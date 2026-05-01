/*
 * XREFs of LoggingUtil::GetViewIdFromView @ 0x180270684
 * Callers:
 *     ?StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277564 (-StartActivity@TabViewManager_CloseView@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@.c)
 *     ?StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277654 (-StartActivity@TabViewManager_EnterFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationV.c)
 *     ?StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@@Z @ 0x180277744 (-StartActivity@TabViewManager_ExitFullScreen@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18027C9D0 (-TabViewManager_AddTabAndViewToMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Composa.c)
 *     ?TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18027CD90 (-TabViewManager_OnTabViewOperationRequested_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationVi.c)
 *     ?TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x18027D018 (-TabViewManager_RemoveTabAndViewFromMaps_@TabViewManagerTraceLogging@@QEAAXPEAUIShellTab@Tabs@Co.c)
 *     ?TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@PEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@I@Z @ 0x18027D11C (-TabViewManager_RemovingViewFromTabGroup_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800243D8 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoggingUtil::GetViewIdFromView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *))
{
  bool v2; // bl
  struct IApplicationView *v3; // rdx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !this )
    return 0LL;
  (**this)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v5);
  v2 = v5 != 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v5);
  if ( v2 )
    return ApplicationViewHelpers::GetCoreWindowForView(this, v3);
  else
    return ApplicationViewHelpers::GetWindowForView(this, v3);
}
