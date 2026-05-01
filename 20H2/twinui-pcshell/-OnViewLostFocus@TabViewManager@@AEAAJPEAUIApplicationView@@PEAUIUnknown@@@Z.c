/*
 * XREFs of ?OnViewLostFocus@TabViewManager@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180274DAC
 * Callers:
 *     ?OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180271F70 (-OnApplicationViewChanged@TabViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIWinRTApplicationView@@@Z @ 0x180092974 (--$com_query@UIApplicationView@@AEAPEAUIWinRTApplicationView@@@wil@@YA-AV-$com_ptr_t@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180250E50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_180250E50.c)
 *     ??$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180263520 (--$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@-$.c)
 *     ??$MakeOrThrow@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIShellTab@2345@@wil@@YA?AV?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAPEAUIApplicationView@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802641E8 (--$MakeOrThrow@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PE.c)
 *     ?TryGetGroup@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18027E0E4 (-TryGetGroup@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTabGroup@Tabs@ComposableShell@Internal@Wi.c)
 *     ?TryGetLastSelectedTabForView@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x18027E174 (-TryGetLastSelectedTabForView@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShell.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabViewManager::OnViewLostFocus(RTL_SRWLOCK *this, struct IApplicationView *a2, struct IUnknown *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v8; // rax
  bool v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  struct IUnknown *v17; // [rsp+30h] [rbp-38h] BYREF
  struct IUnknown *v18; // [rsp+38h] [rbp-30h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IApplicationView *v21; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v22; // [rsp+80h] [rbp+18h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v23; // [rsp+88h] [rbp+20h] BYREF

  v22 = a3;
  v21 = a2;
  try
  {
    TabViewManager::TryGetLastSelectedTabForView(this, &v23, a2);
    TabViewManager::TryGetGroup(v6, &v17, v23);
    v8 = v23;
    if ( v23 && v17 )
    {
      v9 = 0;
      if ( a3 )
      {
        wil::com_query<IApplicationView,IWinRTApplicationView * &>((__int64)v19, &v22);
        TabViewManager::TryGetLastSelectedTabForView(this, &v15, v19[0]);
        TabViewManager::TryGetGroup(v10, &v18, v15);
        if ( v15 && v18 )
          v9 = (unsigned int)SHIsSameObject(v17, v18) != 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
      }
      LOBYTE(v7) = v9;
      (*(void (__fastcall **)(PVOID, struct IApplicationView *, __int64))(*(_QWORD *)this[171].Ptr + 48LL))(
        this[171].Ptr,
        a2,
        v7);
      v8 = v23;
    }
    v19[0] = v8;
    wil::MakeOrThrow<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs,IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab *>(
      &v16,
      &v21,
      v19);
    v11 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<TabViewManager *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>(
            this + 40,
            (__int64)this,
            v16);
    if ( v11 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x90F,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        (const char *)(unsigned int)v11);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v12);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v23) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x912,
                     (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                     v13);
    return (unsigned int)v23;
  }
  return result;
}
