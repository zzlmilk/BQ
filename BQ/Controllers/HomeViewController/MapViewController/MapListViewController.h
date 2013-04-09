//
//  MapListViewController.h
//  BQ
//
//  Created by Zoe on 13-4-8.
//  Copyright (c) 2013年 zzlmilk. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "Bank.h"
#import "HomeViewController.h"

@interface MapListViewController : UITableViewController

@property(nonatomic,weak) HomeViewController *homeVC;
@property(nonatomic,strong) NSMutableArray *locationArrs;//地图显示数据数组 Bank数组
@property(nonatomic,strong) Bank *bank;
@end
