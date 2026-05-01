/*
 * XREFs of ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18013C9C8
 * Callers:
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18006E44C (-MarshalObjectToPropertySet@CActivatedEventArgsBase@@QEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     ?get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180089620 (-get_ViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewMan.c)
 *     ?get_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1800AAE00 (-get_KeepAlive@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::operator() @ 0x1800AFC2C (_lambda_e127833a80797c5d08a14d2b9986789f_--operator().c)
 *     ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800BAF80 (-TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHS.c)
 *     ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BB110 (-TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Win.c)
 *     winrt::Windows::Internal::Shell::implementation::WindowTabHost::DelayedUpdateActivationTimestamp$_ResumeCoro$2 @ 0x1800C8720 (winrt--Windows--Internal--Shell--implementation--WindowTabHost--DelayedUpdateActiva_ea_1800C8720.c)
 *     ?OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelActiveTabChangedEventArgs@38456@@Z @ 0x1800CACB0 (-OnActiveTabChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTa.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800CB030 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x1800CC1E8 (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUIApplicationView@@@Z @ 0x1800CC5B0 (-ViewVirtualDesktopChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUI.c)
 *     ?GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA?AUguid@6@XZ @ 0x1800D14D0 (-GetActiveTabId@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA-AUguid@6@XZ.c)
 *     ?GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800D19FC (-GetTabProxyWindowHwnd@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@U.c)
 *     ?GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHWND__@@Uguid@6@@Z @ 0x1800D1A58 (-GetTabProxyWindowOwnerWindow@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAPEAUHW.c)
 *     ?MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApplicationViewCollection@@PEAUIVirtualDesktopManagerInternal3@@PEAUIApplicationView@@@Z @ 0x1800D1B10 (-MoveProxyWindowsToDesktop@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXPEAUIApp.c)
 *     ?TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z @ 0x1800D22EC (-TabProxyWindowExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_NUguid@6@@Z.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800DF240 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 *     ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x180454470 (-GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU-$IVec.c)
 *     ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1804546D0 (-GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRI.c)
 *     ?IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180455970 (-IsAppActive@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@.c)
 *     ?StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x180456860 (-StartUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1804569D0 (-StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ.c)
 *     ?get_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAPEAUIInspectable@@@Z @ 0x180486DE0 (-get_ActivationValueSetReference@CActivatedEventArgsBase@@UEAAJPEAPEAUIInspectable@@@Z.c)
 *     ?get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180486E30 (-get_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAPEAUIActivationViewSwitch.c)
 *     ?get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z @ 0x180486EA0 (-get_CurrentlyShownApplicationViewId@CActivatedEventArgsWithViewIdBase@@UEAAJPEAH@Z.c)
 *     ?get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x180486EF0 (-get_IsForegroundActivation@CActivatedEventArgsBase@@UEAAJPEAE@Z.c)
 *     ?get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z @ 0x180486F40 (-get_IsHolographic@CActivatedEventArgsBase@@UEAAJPEAE@Z.c)
 *     ?get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@Z @ 0x180487010 (-get_Properties@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUMultiviewActivationProperties@Activa.c)
 *     ?get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel@Windows@@@Z @ 0x180487060 (-get_SplashScreen@CActivatedEventArgsBase@@UEAAJPEAPEAUISplashScreen@Activation@ApplicationModel.c)
 *     ?get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z @ 0x1804870C0 (-get_User@CActivatedEventArgsBase@@UEAAJPEAPEAUIUser@System@Windows@@@Z.c)
 *     ?get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z @ 0x180487230 (-get_UserContext@CActivatedEventArgsBase@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  AcquireSRWLockShared(a1);
  *a2 = a1;
  return a2;
}
