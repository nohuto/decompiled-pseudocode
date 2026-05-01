/*
 * XREFs of ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18024EC2C
 * Callers:
 *     LoggingUtil::GetGroupIdFromTab @ 0x18024E278 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x18024FD20 (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180255E08 (-StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180256B14 (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x180256C90 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180256FB0 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x18025751C (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180257840 (-Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025AFE4 (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 *     ?TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x18025B118 (-TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18025B244 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x18025B3A4 (-TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIAppl.c)
 *     ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x18025B4E0 (-TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUI.c)
 *     ?TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18025B640 (-TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composa.c)
 *     ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x18025B744 (-TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18025BA00 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18025BB30 (-TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@C.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18025BC88 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18025BD8C (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 *     ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025BEC0 (-TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composab.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18025F280 (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180262948 (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 *     ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x18027077C (-HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableS.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

struct _GUID *__fastcall TabShellTelemetryBase::GetShellTabGroupId(
        struct _GUID *__return_ptr retstr,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *a2)
{
  struct _GUID v4; // [rsp+20h] [rbp-28h] BYREF

  *retstr = GUID_NULL;
  if ( a2
    && !(*(unsigned int (__fastcall **)(struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup *, struct _GUID *))(*(_QWORD *)a2 + 48LL))(
          a2,
          &v4) )
  {
    *retstr = v4;
  }
  return retstr;
}
