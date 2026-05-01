/*
 * XREFs of ?GetWindowAndPrepareForActivation@CImmersiveApp@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAPEAUHWND__@@@Z @ 0x18001F1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18001F52C (-StartActivity@GetWindowAndPrepareForActivation@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18001F78C (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x1800242D4 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
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
 *     ?GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ @ 0x18017C234 (-GetApplicationWindowForActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAPEAUHWND__@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::GetWindowAndPrepareForActivation(__int64 a1, char a2, _QWORD *a3)
{
  int v6; // eax
  CImmersiveApp::CImmersiveWindowCollection *v7; // rcx
  int v8; // edi
  void *v10; // rbx
  HANDLE ProcessHeap; // rax
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending[2]; // [rsp+20h] [rbp-E0h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-D8h] BYREF
  void **v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h]
  int *v18; // [rsp+58h] [rbp-A8h]
  int *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h] BYREF
  char v21; // [rsp+6Ch] [rbp-94h]
  _BYTE v22[32]; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+90h] [rbp-70h] BYREF
  const char *v24; // [rsp+98h] [rbp-68h]
  LPVOID lpMem; // [rsp+A0h] [rbp-60h]
  char v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  _BYTE v28[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+148h] [rbp+48h] BYREF
  __int128 v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+160h] [rbp+60h] BYREF

  v16[0] = 0LL;
  v16[1] = &v15;
  v16[2] = 0LL;
  v17 = 0;
  v18 = &v23;
  v19 = &v20;
  v20 = 0;
  v21 = 0;
  v26 = 0;
  v23 = 0;
  v24 = "GetWindowAndPrepareForActivation";
  lpMem = 0LL;
  v27 = 1LL;
  v29 = 0LL;
  memset_0(v28, 0, sizeof(v28));
  v30 = 0LL;
  v31 = 0LL;
  v15 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::StartActivity(
    (CImmersiveAppTelemetry::GetWindowAndPrepareForActivation *)&v15,
    *(const unsigned __int16 **)(a1 + 480));
  *a3 = 0LL;
  if ( *(_BYTE *)(a1 + 624) || (*(_BYTE *)(a1 + 472) & 1) == 0 && (*(_DWORD *)(a1 + 472) & 8) == 0 )
  {
    v8 = -2147019873;
    goto LABEL_10;
  }
  if ( (a2 & 1) == 0 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 440LL))(a1) )
  {
    v8 = -2147023598;
    goto LABEL_10;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 336) + 56LL))(*(_QWORD *)(a1 + 336));
  v7 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184);
  if ( v6 )
  {
    *a3 = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow(v7);
  }
  else
  {
    if ( !CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindowForActivation(v7) )
    {
      v8 = -2147024891;
      goto LABEL_10;
    }
    CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(a1 + 184);
  }
  *(_QWORD *)fPending = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, WINBOOL *))(**(_QWORD **)(a1 + 336) + 136LL))(*(_QWORD *)(a1 + 336), fPending);
  if ( v8 >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)fPending + 24LL))(*(_QWORD *)fPending, a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(fPending);
LABEL_10:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v15, (unsigned int)v8);
  v15 = &CImmersiveAppTelemetry::GetWindowAndPrepareForActivation::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v15);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v31);
  wil::details::shared_buffer::reset((wil::details::shared_buffer *)&v29);
  if ( v26 )
  {
    v10 = lpMem;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v10);
    v26 = 0;
  }
  lpMem = 0LL;
  if ( v20 == 1 )
  {
    v20 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, fPending, &Context) && fPending[0] )
    {
      Context = qword_1805CD110;
      qword_1805CD110[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CD128 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD110, qword_1805CD128, v12);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_1805CD110);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v22);
  }
  v20 = 3;
  if ( v17 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v16);
  return (unsigned int)v8;
}
