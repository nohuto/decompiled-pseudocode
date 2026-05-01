/*
 * XREFs of ?RegisterForShellHooks@TitleBarController@@AEAAJXZ @ 0x180287B8C
 * Callers:
 *     _lambda_0d811e3ff9caf4aeb25826d22c7c0665_::operator() @ 0x180285A1C (_lambda_0d811e3ff9caf4aeb25826d22c7c0665_--operator().c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$function@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIFrameworkViewTypeSetEventArgs@2345@@Foundation@Windows@@@Z@wistd@@QEAA@XZ @ 0x180041EE4 (--1-$function@$$A6AJPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Window.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180141840 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Swap@SmartCookie@@QEAAXAEAV1@@Z @ 0x180253068 (-Swap@SmartCookie@@QEAAXAEAV1@@Z.c)
 *     ??$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@ZPEB_KIPEAVTitleBarController@@@SmartCookie@@QEAAJPEAUIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotification@@PEAK@ZP81@EAAJK@Z1IPEAVTitleBarController@@@Z @ 0x180284C54 (--$Register@UIImmersiveShellHookService@@P81@EAAJPEB_KIPEAUIImmersiveShellHookNotif_ea_180284C54.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall TitleBarController::RegisterForShellHooks(TitleBarController *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // eax
  __int64 v7[2]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v8[112]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v9; // [rsp+C0h] [rbp-28h]
  int v10; // [rsp+C8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v7[0] = 0LL;
  v2 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockShared((PSRWLOCK)this + 10);
  v3 = *((_QWORD *)this + 17);
  if ( !v3 || *((_DWORD *)this + 86) )
  {
    if ( v2 )
      ReleaseSRWLockShared(v2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
    return 0LL;
  }
  else
  {
    v7[0] = *((_QWORD *)this + 17);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    v9 = 0LL;
    v10 = 0;
    v5 = SmartCookie::Register<IImmersiveShellHookService,long (IImmersiveShellHookService::*)(unsigned __int64 const *,unsigned int,IImmersiveShellHookNotification *,unsigned long *),long (IImmersiveShellHookService::*)(unsigned long),unsigned __int64 const *,unsigned int,TitleBarController *>(
           (__int64)v8,
           *((_QWORD *)this + 17),
           v4);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        778LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v5);
    AcquireSRWLockExclusive(v2);
    v7[1] = (__int64)v2;
    SmartCookie::Swap((TitleBarController *)((char *)this + 224), (struct SmartCookie *)v8);
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    SmartCookie::Unregister((SmartCookie *)v8);
    wistd::function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>::~function<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs *> *)>((__int64)v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
    return 0LL;
  }
}
