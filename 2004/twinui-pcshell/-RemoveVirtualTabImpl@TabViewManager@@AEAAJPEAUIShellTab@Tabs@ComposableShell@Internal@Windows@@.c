/*
 * XREFs of ?RemoveVirtualTabImpl@TabViewManager@@AEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180276C78
 * Callers:
 *     ?RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180276A90 (-RemoveVirtualTab@TabViewManager@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 *     ?TryFindAndNotifyReplacementTab@TabViewManager@@AEAA?AV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIApplicationView@@@Z @ 0x18027E2A0 (-TryFindAndNotifyReplacementTab@TabViewManager@@AEAA-AV-$com_ptr_t@UIShellTab@Tabs@ComposableShe.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093890 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPrivilegedForegroundOperations@@@Z @ 0x18015A988 (--4-$com_ptr_t@UIPrivilegedForegroundOperations@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180251770 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_180251770.c)
 *     ??$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAVViewTabEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180263E40 (--$InvokeAll@PEAVTabViewManager@@PEAVViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@-$.c)
 *     ??$Make@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@AEAPEAUIShellTab@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@12@$$QEAPEAUIApplicationView@@AEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180264354 (--$Make@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@AEAPEAUIS.c)
 *     ??$find@PEAUIWin32ApplicationView@@U?$less@X@std@@H@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@X@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UITitleBar@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEBQEAUIWin32ApplicationView@@@Z @ 0x180268D64 (--$find@PEAUIWin32ApplicationView@@U-$less@X@std@@H@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIWin32.c)
 *     ?RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@PEAUIApplicationView@@@Z @ 0x1802769E0 (-RemoveTabAndViewFromMapsLockHeld@TabViewManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Intern.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabViewManager::RemoveVirtualTabImpl(
        TabViewManager *this,
        struct Windows::Internal::ComposableShell::Tabs::IShellTab *a2)
{
  RTL_SRWLOCK *v4; // rbx
  __int64 **v5; // r10
  __int64 result; // rax
  __int64 *v7; // rdi
  const char *v8; // r9
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IApplicationView *v14; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 *v16; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v17; // [rsp+68h] [rbp+20h] BYREF

  v15 = a2;
  v14 = 0LL;
  v4 = (RTL_SRWLOCK *)((char *)this + 1432);
  AcquireSRWLockExclusive((PSRWLOCK)this + 179);
  v17 = v4;
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>,std::less<void>,std::allocator<std::pair<wil::com_ptr_t<IWin32ApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::Shell::Experience::ITitleBar,wil::err_exception_policy>>>,0>>::find<IWin32ApplicationView *,std::less<void>,int>(
    (__int64 **)this + 162,
    &v16,
    (unsigned __int64 *)&v15);
  if ( v16 == *v5 )
  {
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
    return 0LL;
  }
  else
  {
    wil::com_ptr_t<IPrivilegedForegroundOperations,wil::err_exception_policy>::operator=((__int64 *)&v14, v16[5]);
    v7 = (__int64 *)v14;
    try
    {
      TabViewManager::RemoveTabAndViewFromMapsLockHeld(this, a2, v14);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      v16 = v7;
      Microsoft::WRL::Details::Make<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs,IApplicationView *,Windows::Internal::ComposableShell::Tabs::IShellTab * &>(
        &v17,
        (struct IApplicationView **)&v16,
        &v15);
      v9 = (__int64)v17;
      if ( !v17 )
        wil::details::in1diag3::_Throw_NullAlloc(
          retaddr,
          1757LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          v8);
      v10 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::BrokeredViewTabConverter *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<TabViewManager *,Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs *>(
              (RTL_SRWLOCK *)this + 34,
              (__int64)this,
              v9);
      if ( v10 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6DF,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v10);
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v7 + 464))(v7, 8LL);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6E2,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v11);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(v9);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v14);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x6E6,
                             (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
                             v12);
    }
  }
  return result;
}
