/*
 * XREFs of ?OnMessage@TabViewManager@@UEAAJI_K_J@Z @ 0x1802731D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007F7A4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180273138 (-OnGetUnmetTabRequirementsResult@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@.c)
 *     ?OnTitleBarsLost@TabViewManager@@UEAAJXZ @ 0x180274DB0 (-OnTitleBarsLost@TabViewManager@@UEAAJXZ.c)
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180274F18 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180280E54 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 */

__int64 __fastcall TabViewManager::OnMessage(TabViewManager *this, int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  _BYTE v11[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[24]; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  TabViewManagerTraceLogging::WatchCurrentThread(v11, "TabViewManager_OnMessage");
  if ( a2 == 798 )
  {
    v9 = TabViewManager::OnTitleBarsLost((TabViewManager *)((char *)this - 24));
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x422,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v9);
  }
  else if ( a2 == *((_DWORD *)this + 252) )
  {
    TabViewManager::OnGetUnmetTabRequirementsResult(v8, a3, a4);
  }
  else if ( a2 == *((_DWORD *)this + 253) )
  {
    TabViewManager::OnUnmetTabRequirementsChanged((char *)this - 192, a3, a4);
  }
  if ( v13 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v12);
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v11);
  return 0LL;
}
