/*
 * XREFs of ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x1800597A8
 * Callers:
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x1800594A0 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationMode.c)
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@AEAPEAUIWindow@4567@AEAUWindowId@4567@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@AEAPEAUIWindow@6789@AEAUWindowId@6789@AEAY0DF@$$CBGAEAW4WindowCreatedType@@@Z @ 0x180084D38 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@Ap_ea_180084D38.c)
 * Callees:
 *     ?Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@W4AppModelKind@4567@UAppViewId@4567@PEAUIWindow@4567@UWindowId@4567@PEBGW4WindowCreatedType@@@Z @ 0x180059CD8 (-Initialize@WindowWrapperBase@@QEAAJPEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManag.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005C27C (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UIUAPViewWrapper@@.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009ECD8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall WindowWrapper::WindowWrapper(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _QWORD *); // rsi
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  PCWSTR StringRawBuffer; // rbx
  PCWSTR v19; // rdi
  __int64 v20; // r10
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  int v25; // ecx
  void (*v26)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+50h] [rbp-A1h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-99h] BYREF
  int v29; // [rsp+5Ch] [rbp-95h] BYREF
  __int64 v30; // [rsp+60h] [rbp-91h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-89h] BYREF
  PCWSTR v32; // [rsp+78h] [rbp-79h]
  PCWSTR v33; // [rsp+80h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-61h] BYREF
  void *v35; // [rsp+A0h] [rbp-51h]
  int v36; // [rsp+A8h] [rbp-49h]
  int v37; // [rsp+ACh] [rbp-45h]
  PCWSTR v38; // [rsp+B0h] [rbp-41h]
  int v39; // [rsp+B8h] [rbp-39h]
  int v40; // [rsp+BCh] [rbp-35h]
  PCWSTR v41; // [rsp+C0h] [rbp-31h]
  int v42; // [rsp+C8h] [rbp-29h]
  int v43; // [rsp+CCh] [rbp-25h]
  int *v44; // [rsp+D0h] [rbp-21h]
  __int64 v45; // [rsp+D8h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+47h]

  Context = a1;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>();
  *a1 = &WindowWrapper::`vftable';
  a1[1] = &WindowWrapper::`vftable'{for `Microsoft::WRL::Details::Selector<WindowWrapperBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewWrapper'};
  a1[3] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::ChainInterfaces<IWindowWrapperInternal,Windows::Internal::Shell::ViewManagerInterop::IWindowWrapper,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride'};
  a1[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies,Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  a1[6] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IClientWindowState'};
  a1[7] = &WindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewRecoveryState,IFramedViewWrapper,Microsoft::WRL::FtmBase>'};
  a1[8] = &WindowWrapper::`vftable'{for `IFramedViewWrapper'};
  a1[9] = &WindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  a1[74] = &WindowWrapper::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<WindowWrapperBase>,IWeakReferenceSource,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>>'};
  a1[75] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::`vftable'{for `IUAPViewWrapper'};
  a1[76] = &WindowWrapper::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>'};
  a1[79] = 0LL;
  a1[80] = 0LL;
  *((_BYTE *)a1 + 648) = 0;
  *((_DWORD *)a1 + 163) = 1;
  memset_0(a1 + 82, 0, 0x5CuLL);
  WindowWrapperBase::Initialize(a1 + 1, a2, a3, a4);
  *((_BYTE *)a1 + 648) = 0;
  v9 = (__int64 *)wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
                    a1 + 42,
                    &v30);
  v10 = *v9;
  *v9 = 0LL;
  v11 = a1[79];
  a1[79] = v10;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v12 = a1[79];
  v13 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 304LL);
  v14 = a1[80];
  a1[80] = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = v13(v12, a1 + 80);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x24,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v15,
      a5);
    __debugbreak();
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[79] + 80LL))(a1[79], a1 + 60);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v16,
      a5);
    __debugbreak();
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)a1[79] + 120LL))(a1[79], (__int64)a1 + 484);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)v17,
      a5);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a1[41], 0LL);
  v19 = WindowsGetStringRawBuffer((HSTRING)a1[40], 0LL);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805A0260;
    qword_1805A0260[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805A0278 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0260, qword_1805A0278, v26);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805A0260);
  }
  v20 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v20 > 5u )
  {
    v29 = *((_DWORD *)a1 + 92);
    v32 = StringRawBuffer;
    v33 = v19;
    v44 = &v29;
    v45 = 4LL;
    v22 = -1LL;
    if ( StringRawBuffer )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( StringRawBuffer[v23] );
      v24 = 2 * v23 + 2;
    }
    else
    {
      StringRawBuffer = &word_1804BE2A8;
      v24 = 2;
    }
    v41 = StringRawBuffer;
    v42 = v24;
    v43 = 0;
    if ( v19 )
    {
      do
        ++v22;
      while ( v19[v22] );
      v25 = 2 * v22 + 2;
    }
    else
    {
      v19 = &word_1804BE2A8;
      v25 = 2;
    }
    v38 = v19;
    v39 = v25;
    v40 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v20 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v35 = &unk_1804ECA0B;
    v36 = 78;
    v37 = 1;
    LODWORD(v30) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v20 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return a1;
}
