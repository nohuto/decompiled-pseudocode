/*
 * XREFs of ?StartActivity@ActivationRequested@ShellPositionerTelemetry@@QEAAXXZ @ 0x18001D65C
 * Callers:
 *     ?ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18001D8F0 (-ActivationRequested@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001D878 (-LockExclusive@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ShellPositionerTelemetry::ActivationRequested::StartActivity(
        ShellPositionerTelemetry::ActivationRequested *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  const GUID *v4; // rax
  const GUID *v5; // r8
  void (*v6)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  WINBOOL v9; // [rsp+34h] [rbp-45h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  LPVOID v12; // [rsp+48h] [rbp-31h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-9h] BYREF
  void *v17; // [rsp+80h] [rbp+7h]
  int v18; // [rsp+88h] [rbp+Fh]
  int v19; // [rsp+8Ch] [rbp+13h]
  __int64 *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  DWORD *p_CurrentThreadId; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    this,
    &SRWLock);
  v2 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC298;
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v6);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  v12 = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &v9, &v12) && v9 )
  {
    v12 = qword_1805CC298;
    qword_1805CC298[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CC2B0 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC298, qword_1805CC2B0, v7);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1805CC298);
  }
  v3 = *((_QWORD *)v12 + 1);
  if ( *(_DWORD *)v3 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v14 = 0LL;
    v4 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v5 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    p_CurrentThreadId = &CurrentThreadId;
    v24 = 4;
    v25 = 0;
    v20 = &v14;
    v21 = 8;
    v22 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v3 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v17 = &unk_18051E6B8;
    v18 = 63;
    v19 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v3 + 32), &EventDescriptor, v5, v4, 4u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((ShellPositionerTelemetry::ActivationRequested *)((char *)this + 8));
}
