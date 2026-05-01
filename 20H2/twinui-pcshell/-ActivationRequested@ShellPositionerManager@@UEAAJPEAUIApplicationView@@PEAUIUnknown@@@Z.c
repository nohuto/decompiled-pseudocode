/*
 * XREFs of ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18001D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x18001CD48 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001D424 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x18001D65C (-StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006A534 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18007FBF0 (-reset@-$shared_object@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     memset_0 @ 0x18008DA68 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145D38 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::ActivationRequested(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  int v6; // eax
  unsigned int v7; // edi
  IUnknown *v8; // rcx
  void *v9; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v12; // rdx
  void *v13; // rbx
  HANDLE v14; // rax
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v16; // [rsp+20h] [rbp-E0h]
  IUnknown *v17; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL fPending; // [rsp+48h] [rbp-B8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B0h] BYREF
  void **v20; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v21[3]; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+80h] [rbp-80h]
  int *v23; // [rsp+88h] [rbp-78h]
  int *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h] BYREF
  char v26; // [rsp+9Ch] [rbp-64h]
  _BYTE v27[32]; // [rsp+A0h] [rbp-60h] BYREF
  int v28; // [rsp+C0h] [rbp-40h] BYREF
  const char *v29; // [rsp+C8h] [rbp-38h]
  LPVOID v30; // [rsp+D0h] [rbp-30h]
  char v31; // [rsp+D8h] [rbp-28h]
  __int64 v32; // [rsp+E0h] [rbp-20h]
  _BYTE v33[144]; // [rsp+E8h] [rbp-18h] BYREF
  LPVOID lpMem; // [rsp+178h] [rbp+78h]
  __int128 v35; // [rsp+180h] [rbp+80h]
  __int64 v36; // [rsp+190h] [rbp+90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v20 = &wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v21[0] = 0LL;
  v21[1] = &v20;
  v21[2] = 0LL;
  v22 = 0;
  v23 = &v28;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v31 = 0;
  v28 = 0;
  v29 = "ActivationRequested";
  v30 = 0LL;
  v32 = 1LL;
  lpMem = 0LL;
  memset_0(v33, 0, sizeof(v33));
  v35 = 0LL;
  v36 = 0LL;
  v20 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  ShellPositionerTelemetry::ActivationRequested::StartActivity((ShellPositionerTelemetry::ActivationRequested *)&v20);
  v17 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL))(a2, &v17);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 547LL;
  }
  else
  {
    v6 = ShellPositionerManager::HandleActivationRequest((int *)this - 28, 1, a2, v17, a3, 0LL, 0);
    v7 = v6;
    if ( v6 >= 0 )
    {
      wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v20);
      v7 = 0;
      goto LABEL_4;
    }
    v12 = 548LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
    (const char *)(unsigned int)v6,
    v16);
LABEL_4:
  v8 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
  }
  v20 = &ShellPositionerTelemetry::ActivationRequested::`vftable';
  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v20);
  wil::details::shared_object<wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v36);
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v9 = lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v9);
    }
    lpMem = 0LL;
    *(_QWORD *)&v35 = 0LL;
  }
  if ( v31 )
  {
    v13 = v30;
    v14 = GetProcessHeap();
    HeapFree(v14, 0, v13);
    v31 = 0;
  }
  v30 = 0LL;
  if ( v25 == 1 )
  {
    v25 = 2;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC298;
      qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
      qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v15);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v27);
  }
  v25 = 3;
  if ( v22 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v21);
  return v7;
}
