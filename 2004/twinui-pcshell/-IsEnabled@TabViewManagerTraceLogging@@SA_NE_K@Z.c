/*
 * XREFs of ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x180271B84
 * Callers:
 *     ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x1802639E4 (--$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManage.c)
 *     ??$TabViewManager_AddTabAndViewToMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@TabViewManagerTraceLogging@@SAXAEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@Z @ 0x1802658D8 (--$TabViewManager_AddTabAndViewToMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AE.c)
 *     ??$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAUtagRECT@@@Z @ 0x180265988 (--$TabViewManager_BoundingRectRequestedForTab@PEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x180265AD4 (--$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@T.c)
 *     ??$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAX$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180265BB8 (--$TabViewManager_OnTabViewOperationRequested@PEAUIApplicationView@@PEAUIShellTab@Tabs@Composabl.c)
 *     ??$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAUIShellTab@2345@@Z @ 0x180265C78 (--$TabViewManager_OnThumbnailRequested@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@.c)
 *     ??$TabViewManager_RemoveTabAndViewFromMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@TabViewManagerTraceLogging@@SAXAEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIApplicationView@@@Z @ 0x180265D28 (--$TabViewManager_RemoveTabAndViewFromMaps@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Window.c)
 *     ??$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@$$QEAI@Z @ 0x180265DD8 (--$TabViewManager_RemovingViewFromTabGroup@AEAPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@Comp.c)
 *     ??$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabViewManagerTraceLogging@@SAX$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180265E98 (--$TabViewManager_ViewForTabNotFound@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@TabVi.c)
 *     ??$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAG$$QEAHAEAE@Z @ 0x1802835E0 (--$TabAppPolicySettings_IsActivatingIntoExistingGroup@PEAGHAEAE@TabViewManagerTraceLogging@@SAX$.c)
 *     ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x1802836A4 (--$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell.c)
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x18028D6C0 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005F608 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18005FAE4 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

char __fastcall TabViewManagerTraceLogging::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1805CD4E8;
    qword_1805CD4E8 = (__int64)&TabViewManagerTraceLogging::`vftable';
    atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
