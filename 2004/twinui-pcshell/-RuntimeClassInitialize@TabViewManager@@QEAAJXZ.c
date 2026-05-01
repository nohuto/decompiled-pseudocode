/*
 * XREFs of ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x1802773A4
 * Callers:
 *     ??$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802649FC (--$MakeAndInitialize@VTabViewManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@UIControlCenterExperienceManager@6789@UIImmersiveSessionIdleNotification@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007C430 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNoti.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007F7A4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x1802687B0 (--$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_fail.c)
 *     ?WatchCurrentThread@TabViewManagerTraceLogging@@SA?AVActivityThreadWatcher@wil@@PEBD@Z @ 0x180280E54 (-WatchCurrentThread@TabViewManagerTraceLogging@@SA-AVActivityThreadWatcher@wil@@PEBD@Z.c)
 *     ?GetTabShellGroupPolicy@@YA?AW4TabShellGroupPolicy@@XZ @ 0x18028343C (-GetTabShellGroupPolicy@@YA-AW4TabShellGroupPolicy@@XZ.c)
 *     ??$MakeAndInitializeOrThrow@VTitleBarController@@V?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@@wil@@YA?AV?$ComPtr@VTitleBarController@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@0@@Z @ 0x180285188 (--$MakeAndInitializeOrThrow@VTitleBarController@@V-$com_ptr_t@UIWeakReference@@Uerr_returncode_p.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ @ 0x180287AE8 (-InternalRelease@-$ComPtr@VCVirtualDesktop@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180289B80 (--$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@w.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18028A438 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 *     ??$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA?AV?$ComPtr@VViewGroupManager@@@WRL@Microsoft@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@Z @ 0x18028B304 (--$MakeOrThrow@VViewGroupManager@@AEAPEAUITitleBarController@@AEAPEAUITabViewManager@@@wil@@YA-A.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::RuntimeClassInitialize(TabViewManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  TabViewManager *v11; // rax
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  const char *v17; // r9
  __int64 result; // rax
  _BYTE v19[32]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v20[24]; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v23; // [rsp+90h] [rbp+8h] BYREF
  TabViewManager *v24; // [rsp+98h] [rbp+10h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+18h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp+20h]

  TabViewManagerTraceLogging::WatchCurrentThread(v19, "TabViewManager_RuntimeClassInitialize");
  v24 = this;
  try
  {
    v2 = wil::com_weak_query_failfast<TabViewManager *>(&v25, (__int64 *)&v24);
    v3 = *v2;
    *v2 = 0LL;
    v23 = v3;
    v26 = &v23;
    v4 = (__int64 *)wil::MakeAndInitializeOrThrow<TitleBarController,wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>>(
                      &v24,
                      &v23);
    v5 = *v4;
    *v4 = 0LL;
    if ( v5 )
      v6 = v5 + 8;
    else
      v6 = 0LL;
    Microsoft::WRL::ComPtr<CVirtualDesktop>::InternalRelease(&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    v24 = 0LL;
    v7 = *((_QWORD *)this + 171);
    *((_QWORD *)this + 171) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
    v8 = (__int64 *)wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(&v23);
    v9 = *v8;
    *v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(&v23);
    v23 = 0LL;
    v10 = *((_QWORD *)this + 173);
    *((_QWORD *)this + 173) = v9;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    if ( this )
      v11 = (TabViewManager *)((char *)this + 136);
    else
      v11 = 0LL;
    v24 = v11;
    v25 = *((_QWORD *)this + 171);
    v12 = (__int64 *)wil::MakeOrThrow<ViewGroupManager,ITitleBarController * &,ITabViewManager * &>(&v23, &v25, &v24);
    v13 = *v12;
    *v12 = 0LL;
    if ( v13 )
      v14 = v13 + 8;
    else
      v14 = 0LL;
    v15 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IBaseExperienceManager,Windows::Internal::Shell::Experience::IControlCenterExperienceManager,IImmersiveSessionIdleNotification,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,Windows::Foundation::IClosable>::Release(v15);
    }
    v23 = 0LL;
    v16 = *((_QWORD *)this + 170);
    *((_QWORD *)this + 170) = v14;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    *((_BYTE *)this + 1428) = (unsigned int)GetTabShellGroupPolicy() != 2;
    if ( v21 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
    wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)v19);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x284,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v17);
    return (unsigned int)v23;
  }
  return result;
}
