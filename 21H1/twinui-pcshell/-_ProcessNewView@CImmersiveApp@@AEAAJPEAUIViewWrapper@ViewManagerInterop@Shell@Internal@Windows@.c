/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18001DB6C
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001DB00 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180159F80 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18001E67C (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18001F9F8 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x1800238B8 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002A5A0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180040AA4 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061400 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800743C8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_1800743C8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     memset_0 @ 0x18008D658 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801217A4 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180156554 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18015F2C0 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_ProcessNewView(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        char a3,
        unsigned int a4,
        struct ITaskWindow *a5,
        bool *a6)
{
  CImmersiveApp::CImmersiveWindowCollection *v10; // rcx
  int View; // eax
  unsigned int v12; // esi
  __int64 v13; // rax
  void (__fastcall *v15)(struct ITaskWindow *, GUID *, __int64 *); // rbx
  struct IApplicationPresentationLayer *v16; // rdx
  void *v17; // rbx
  HANDLE ProcessHeap; // rax
  void (*v19)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v20; // [rsp+20h] [rbp-E0h] BYREF
  WINBOOL fPending; // [rsp+28h] [rbp-D8h] BYREF
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  void **v23; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+60h] [rbp-A0h]
  int *v26; // [rsp+68h] [rbp-98h]
  int *v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h] BYREF
  char v29; // [rsp+7Ch] [rbp-84h]
  _BYTE v30[32]; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+A0h] [rbp-60h] BYREF
  const char *v32; // [rsp+A8h] [rbp-58h]
  LPVOID lpMem; // [rsp+B0h] [rbp-50h]
  char v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  _BYTE v36[144]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v37; // [rsp+158h] [rbp+58h] BYREF
  __int128 v38; // [rsp+160h] [rbp+60h]
  __int64 v39; // [rsp+170h] [rbp+70h] BYREF

  *a6 = *(_QWORD *)(a1 + 472) == 0LL;
  v24[0] = 0LL;
  v24[1] = &v23;
  v24[2] = 0LL;
  v25 = 0;
  v26 = &v31;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v34 = 0;
  v31 = 0;
  v32 = "ProcessNewWindow";
  lpMem = 0LL;
  v35 = 1LL;
  v37 = 0LL;
  memset_0(v36, 0, sizeof(v36));
  v38 = 0LL;
  v39 = 0LL;
  v23 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)&v23,
    *(const unsigned __int16 **)(a1 + 592));
  v20 = 0LL;
  if ( a2 )
  {
    (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, __int64 *))a2)(
      a2,
      &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2,
      &v20);
  }
  else
  {
    v15 = *(void (__fastcall **)(struct ITaskWindow *, GUID *, __int64 *))(*(_QWORD *)a5 + 40LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v15(a5, &GUID_6d043cea_6cdf_43a3_b9d0_d755297c11d2, &v20);
  }
  (*(void (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v20 + 96LL))(
    v20,
    L"LastSetGlomIdForReconstitution",
    *(unsigned int *)(a1 + 600));
  v10 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296);
  if ( a3 )
    View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(v10, a2, a5);
  else
    View = CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(v10, a2, a4, a5);
  v12 = View;
  if ( View < 0 )
  {
    if ( *a6 )
      *a6 = 0;
  }
  else if ( a3 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 676));
    v13 = *(_QWORD *)(a1 + 676);
    *(_QWORD *)(a1 + 700) = v13;
    if ( *(_BYTE *)(a1 + 496) && !*(_BYTE *)(a1 + 497) )
    {
      *(_QWORD *)(a1 + 708) = v13;
      v16 = *(struct IApplicationPresentationLayer **)(a1 + 448);
      *(_DWORD *)(a1 + 632) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((CImmersiveApp::CloakType *)(a1 + 632), v16);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)a1);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v23, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  v23 = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v23);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v39);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v37);
  if ( v34 )
  {
    v17 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v17);
    v34 = 0;
  }
  lpMem = 0LL;
  if ( v28 == 1 )
  {
    v28 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_18059FE50;
      qword_18059FE50[0] = &ShellScreenClippingLogging::`vftable';
      qword_18059FE68 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FE50, qword_18059FE68, v19);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_18059FE50);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v30);
  }
  v28 = 3;
  if ( v25 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v24);
  return v12;
}
