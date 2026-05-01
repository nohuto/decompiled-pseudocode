/*
 * XREFs of ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001E2E4
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800311BC (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180149920 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x18015406C (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 * Callees:
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x18001F030 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18001F7C0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002ADE0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180061B30 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180072EC0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180074AE8 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_180074AE8.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     memset_0 @ 0x18008DF08 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145E58 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::_AddViewToGlom(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  const unsigned __int16 *v10; // rbx
  int v11; // edi
  void *v13; // rbx
  HANDLE ProcessHeap; // rax
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-B0h] BYREF
  void **v19; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+80h] [rbp-80h]
  int *v22; // [rsp+88h] [rbp-78h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h] BYREF
  char v25; // [rsp+9Ch] [rbp-64h]
  _BYTE v26[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+C0h] [rbp-40h] BYREF
  const char *v28; // [rsp+C8h] [rbp-38h]
  LPVOID lpMem; // [rsp+D0h] [rbp-30h]
  char v30; // [rsp+D8h] [rbp-28h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[144]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v33; // [rsp+178h] [rbp+78h] BYREF
  __int128 v34; // [rsp+180h] [rbp+80h]
  __int64 v35; // [rsp+190h] [rbp+90h] BYREF

  *(_QWORD *)fPending = a6;
  v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)a3 + 24LL))(a3);
  v20[0] = 0LL;
  v20[1] = &v19;
  v20[2] = 0LL;
  v21 = 0;
  v22 = &v27;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "AddWindowToGlom";
  lpMem = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  memset_0(v32, 0, sizeof(v32));
  v34 = 0LL;
  v35 = 0LL;
  v19 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  CAppManagerTelemetry::AddWindowToGlom::StartActivity((CAppManagerTelemetry::AddWindowToGlom *)&v19, v10);
  v18[0] = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, _QWORD *))(**(_QWORD **)(a1 + 576) + 32LL))(
          *(_QWORD *)(a1 + 576),
          0LL,
          &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
          v18);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD, __int64, int, __int64))(*(_QWORD *)v18[0] + 48LL))(
            v18[0],
            a3,
            0LL,
            a2,
            a4,
            a5);
    if ( v11 >= 0 && !a4 )
    {
      Context = a3;
      (*(void (__fastcall **)(void *))(*(_QWORD *)a3 + 8LL))(a3);
      v11 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp((CActivationBasedAppAndGlomCollection *)(a1 + 624));
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&Context);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v19, (unsigned int)v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  v19 = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v19);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v35);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v33);
  if ( v30 )
  {
    v13 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v13);
    v30 = 0;
  }
  lpMem = 0LL;
  if ( v24 == 1 )
  {
    v24 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v15);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v26);
  }
  v24 = 3;
  if ( v21 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
  return (unsigned int)v11;
}
