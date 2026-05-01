/*
 * XREFs of ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180251F00
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?IsWindowStateStale@TabViewManager@@AEAA_NPEAUHWND__@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802501FC (-IsWindowStateStale@TabViewManager@@AEAA_NPEAUHWND__@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z.c)
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18025EAA4 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x18025F1D4 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

void __fastcall TabViewManager::OnShellTrackedWindowPosChanged(
        TabViewManager *this,
        HWND a2,
        struct IApplicationView *a3,
        __int64 a4,
        unsigned int a5,
        struct _GUID *a6)
{
  __int64 v9; // rcx
  _BYTE v10[32]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+58h] [rbp-30h]

  TabViewManagerTraceLogging::WatchCurrentThread(v10, "TabViewManager_OnShellTrackedWindowPosChanged");
  if ( a3 && !TabViewManager::IsWindowStateStale(v9, a2, a6, a5) )
    TabViewManager::ViewPosChanged((char *)this - 128, a3, a6, a5);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v10);
}
