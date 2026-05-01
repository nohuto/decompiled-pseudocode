/*
 * XREFs of ?EnsureTitleBarFactoryStatics@TitleBarController@@AEAAJXZ @ 0x1802868D8
 * Callers:
 *     ?GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Shell@Internal@Windows@@@Z @ 0x180286E90 (-GetTitleBarFactoryStatics@TitleBarController@@UEAAJPEAPEAUITitleBarFactoryStatics@Experience@Sh.c)
 *     ?OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802873E4 (-OnViewCreatedImpl@TitleBarController@@AEAAJPEAUIApplicationView@@AEBUShellTabGroupId@Tabs@Compo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800275B0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca___ @ 0x1802845C0 (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b.c)
 *     wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___ @ 0x180284658 (wil--MakeAgileCallback_Windows--Foundation--IEventHandler_IInspectable_____lambda_5768fbe51821da.c)
 *     ??$com_weak_query@PEAVTitleBarController@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVTitleBarController@@@Z @ 0x180284E70 (--$com_weak_query@PEAVTitleBarController@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exception.c)
 *     ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@1@PEAUITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@P834567@EAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x18028513C (--$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITitleBarFactoryWatcher@Experience@.c)
 *     ??4?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802858EC (--4-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@.c)
 *     ?reset@?$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@wil@@QEAAXXZ @ 0x1802888B4 (-reset@-$unique_winrt_event_token@UITitleBarFactoryWatcher@Experience@Shell@Internal@Windows@@@w.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall TitleBarController::EnsureTitleBarFactoryStatics(TitleBarController *this)
{
  RTL_SRWLOCK *v2; // rdi
  char *v3; // rsi
  int ActivationFactory; // eax
  __int64 v5; // r14
  __int64 (__fastcall *v6)(__int64, char *); // r15
  __int64 (__fastcall ****v7)(_QWORD, GUID *, __int64 *); // rsi
  _QWORD *v8; // rcx
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  TitleBarController *v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19[3]; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+70h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)((char *)this + 104);
  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  v19[2] = (__int64)v2;
  v3 = (char *)this + 112;
  if ( !*((_QWORD *)this + 14) )
  {
    *(_QWORD *)v3 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.Shell.Experience.TitleBarFactory",
      0x32u,
      0x31u);
    ActivationFactory = RoGetActivationFactory(v21, &GUID_8d99c789_bf9b_4d04_a028_fccdcdab52f9, (char *)this + 112);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        435LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v5 = *(_QWORD *)v3;
    v6 = *(__int64 (__fastcall **)(__int64, char *))(**(_QWORD **)v3 + 56LL);
    v7 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 120);
    v8 = (_QWORD *)*((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v8 + 16LL))(v8, *v8);
    v9 = v6(v5, (char *)this + 120);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        436LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\titlebarcontroller.cpp",
        (const char *)(unsigned int)v9);
    v18 = this;
    v10 = wil::com_weak_query<TitleBarController *>((__int64 *)&hstringHeader, (__int64 *)&v18);
    v18 = this;
    v11 = *v10;
    *v10 = 0LL;
    v19[0] = v11;
    wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_3ffe7772ea0e8b24850f42cff1d891ca___(
      &v17,
      &v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&hstringHeader);
    v12 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
            &v18,
            *v7,
            (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) IVirtualDesktopNotificationServicePrivate::`vcall'{48,{flat}},
            (__int64) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{56,{flat}},
            v17);
    wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
      (__int64 *)this + 19,
      v12);
    wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    hstringHeader.Reserved.Reserved1 = this;
    v13 = wil::com_weak_query<TitleBarController *>((__int64 *)&v18, (__int64 *)&hstringHeader);
    hstringHeader.Reserved.Reserved1 = this;
    v14 = *v13;
    *v13 = 0LL;
    *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v14;
    wil::MakeAgileCallback_Windows::Foundation::IEventHandler_IInspectable_____lambda_5768fbe51821daf2523ac35b25514dd7___(
      &v17,
      &hstringHeader);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    v15 = wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher,long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(Windows::Foundation::IEventHandler<IInspectable *> *,EventRegistrationToken *),long (Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::*)(EventRegistrationToken),Windows::Foundation::IEventHandler<IInspectable *> *>(
            &hstringHeader,
            *v7,
            (__int64 (__fastcall *)(_QWORD, __int64, __int64 *)) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{64,{flat}},
            (__int64) ITabletModeController::`vcall'{72,{flat}},
            v17);
    wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::operator=(
      (__int64 *)this + 22,
      v15);
    wil::unique_winrt_event_token<Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher>::reset(&hstringHeader);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&hstringHeader.Reserved.Reserved2[8]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
