/*
 * XREFs of ?GetShellTabGroupId@TabShellTelemetryBase@@SA?BU_GUID@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026FFBC
 * Callers:
 *     LoggingUtil::GetGroupIdFromTab @ 0x18026F608 (LoggingUtil--GetGroupIdFromTab.c)
 *     ?InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTabGroup@5678@@Z @ 0x1802710B0 (-InvokingAppManagedTabCloseRequestedHandlers@TabViewManagerCloseTabRequested@TabViewManagerMeasu.c)
 *     ?StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180277198 (-StartActivity@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@0PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x180277EA4 (-StartActivity@TabViewManager_ReplacementTabSelection@TabViewManagerTraceLogging@@QEAAXPEAUIAppl.c)
 *     ?StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x180278020 (-StartActivity@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUISh.c)
 *     ?Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180278340 (-Stop@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShel.c)
 *     ?Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802788AC (-Stop@TabViewManager_GetOrCreateTabForWindowId@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180278BD0 (-Stop@TabViewManager_UpdateFallbackTabForGroup@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Ta.c)
 *     ?TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027C374 (-TabViewManagerAddVirtualTabToView@TabViewManagerAddVirtualTab@TabViewManagerMeasures@@QEAAXPEAU.c)
 *     ?TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@4567@@Z @ 0x18027C4A8 (-TabViewManagerCloseViewForTab_@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTab.c)
 *     ?TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@I@Z @ 0x18027C5D4 (-TabViewManagerClosingTab@TabViewManagerCloseTab@TabViewManagerMeasures@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@@Z @ 0x18027C734 (-TabViewManagerSelectTab@TabViewManagerSelectTabRequested@TabViewManagerMeasures@@QEAAXPEAUIAppl.c)
 *     ?TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@5678@_N@Z @ 0x18027C870 (-TabViewManagerTabAddedForView@TabViewManagerConnectTabToView@TabViewManagerMeasures@@QEAAXPEAUI.c)
 *     ?TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18027C9D0 (-TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composa.c)
 *     ?TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEBUtagRECT@@@Z @ 0x18027CAD4 (-TabViewManager_BoundingRectRequestedForTab_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18027CD90 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@@Z @ 0x18027CEC0 (-TabViewManager_OnThumbnailRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTabGroup@Tabs@C.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18027D018 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18027D11C (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 *     ?TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027D250 (-TabViewManager_ViewForTabNotFound_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composab.c)
 *     ?ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180280610 (-ZombieTab@TabViewManagerCloseTabRequested@TabViewManagerMeasures@@QEAAXPEAUIShellTab@Tabs@Compo.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x180283CD8 (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 *     ?HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@3456@AEBU_GUID@@@Z @ 0x180291B1C (-HotKeyHandlerMessageReceived_@TabViewManagerMeasures@@QEAAXIPEAUIShellTabGroup@Tabs@ComposableS.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
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
