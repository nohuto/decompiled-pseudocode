/*
 * XREFs of ?PerformDelayedInitialization@TabViewManager@@UEAAJXZ @ 0x180253CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x180246A70 (--$com_weak_query@PEAVTabViewManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exception_pol.c)
 *     ??$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1802470FC (--$wnf_query_nothrow@I@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAIPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x18024B9E4 (-CreateHotKeyHandler@TabViewManager@@AEAAJXZ.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x18025F1D4 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ??$MakeAndInitializeOrThrow@VTabTransferManager@@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VTabTransferManager@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITabTransferEventBroker@6789@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x18026B548 (--$MakeAndInitializeOrThrow@VTabTransferManager@@V-$com_ptr_t@UIWeakReference@@Uerr_exception_po.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TabViewManager::PerformDelayedInitialization(TabViewManager *this)
{
  int HotKeyHandler; // eax
  void (__fastcall *v3)(char *, GUID *, __int64 *); // rbx
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r9
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  __int64 v17; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v21[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v22[32]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v23[24]; // [rsp+90h] [rbp-68h] BYREF
  int v24; // [rsp+A8h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]
  __int64 v26; // [rsp+100h] [rbp+8h] BYREF
  int v27; // [rsp+108h] [rbp+10h] BYREF
  __int64 v28; // [rsp+110h] [rbp+18h] BYREF
  __int64 v29; // [rsp+118h] [rbp+20h] BYREF

  LODWORD(v26) = 0;
  TabViewManagerTraceLogging::WatchCurrentThread(v22, "TabViewManager_PerformDelayedInitialization");
  HotKeyHandler = TabViewManager::CreateHotKeyHandler((TabViewManager *)((char *)this - 48));
  try
  {
    if ( HotKeyHandler < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        781LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)HotKeyHandler);
    v17 = *((_QWORD *)this + 45);
    v28 = 0LL;
    LODWORD(v26) = 2;
    v3 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this - 5) + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v3((char *)this - 40, &GUID_00000000_0000_0000_c000_000000000046, &v28);
    v4 = v28;
    v5 = *((_QWORD *)this + 167);
    v6 = *((_QWORD *)this + 145);
    v7 = *((_QWORD *)this + 146);
    v26 = (__int64)this - 48;
    v8 = wil::com_weak_query<TabViewManager *>(&v29, &v26);
    v21[1] = (__int64)v8;
    v26 = v17;
    v17 = v4;
    v18 = v5;
    v19 = v6;
    v20 = v7;
    v9 = (__int64 *)wil::MakeAndInitializeOrThrow<TabTransferManager,wil::com_ptr_t<IWeakReference,wil::err_exception_policy>,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &,IUnknown * &,IPrivilegedForegroundOperations * &>(
                      (unsigned int)v21,
                      (_DWORD)v8,
                      (unsigned int)&v20,
                      (unsigned int)&v19,
                      (unsigned int)&v18,
                      (__int64)&v17,
                      (__int64)&v26);
    v10 = *v9;
    *v9 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v8);
    v26 = 0LL;
    v11 = *((_QWORD *)this + 166);
    *((_QWORD *)this + 166) = v10;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    v27 = 0;
    wil::wnf_query_nothrow<unsigned int>(v12, (char *)&v26, (__int64)&v27, v13);
    ++v27;
    v14 = RtlPublishWnfStateData(WNF_SHEL_TAB_SHELL_INIT_COMPLETE, 0LL, &v27, 4LL) | 0x10000000;
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x31A,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v14);
    if ( v24 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v23);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v22);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x31E,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v15);
    return (unsigned int)v26;
  }
  return result;
}
