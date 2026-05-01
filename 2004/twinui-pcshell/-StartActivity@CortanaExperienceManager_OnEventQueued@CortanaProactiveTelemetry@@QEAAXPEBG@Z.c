/*
 * XREFs of ?StartActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@QEAAXPEBG@Z @ 0x180021358
 * Callers:
 *     ??$?0PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG@Z @ 0x180020954 (--$-0PEBG@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@AEAA@U-$integral_con.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F71C (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002AEA0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C450 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *this,
        const unsigned __int16 *a2)
{
  __int64 v4; // rdi
  RTL_SRWLOCK *v5; // rcx
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // r9
  const GUID *v9; // r8
  __int64 v10; // rcx
  int v11; // eax
  REGHANDLE v12; // rcx
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  WINBOOL v16; // [rsp+3Ch] [rbp-65h] BYREF
  DWORD v17; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  LPVOID v19; // [rsp+50h] [rbp-51h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp-49h] BYREF
  __int64 v21; // [rsp+60h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-39h] BYREF
  void (__stdcall *v23)(PSRWLOCK); // [rsp+78h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-19h] BYREF
  void *v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+A0h] [rbp-1h]
  int v27; // [rsp+A4h] [rbp+3h]
  __int64 *v28; // [rsp+A8h] [rbp+7h]
  __int64 v29; // [rsp+B0h] [rbp+Fh]
  DWORD *v30; // [rsp+B8h] [rbp+17h]
  __int64 v31; // [rsp+C0h] [rbp+1Fh]
  const unsigned __int16 *v32; // [rsp+C8h] [rbp+27h]
  int v33; // [rsp+D0h] [rbp+2Fh]
  int v34; // [rsp+D4h] [rbp+33h]

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &SRWLock);
  v4 = *((_QWORD *)this + 6);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CD2A0;
    qword_1805CD2A0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD2B8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD2A0, qword_1805CD2B8, v13);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CD2A0);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *(_OWORD *)(v4 + 8) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v4 + 8));
  v5 = SRWLock;
  *(_DWORD *)v4 = 1;
  if ( v5 )
  {
    v23 = ReleaseSRWLockExclusive;
    ReleaseSRWLockExclusive(v5);
  }
  v19 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v16, &v19) && v16 )
  {
    v19 = qword_1805CD2A0;
    qword_1805CD2A0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CD2B8 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CD2A0, qword_1805CD2B8, v14);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CD2A0);
  }
  v6 = *((_QWORD *)v19 + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    v21 = 0x1000000LL;
    v17 = CurrentThreadId;
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v9 = (const GUID *)(*((_QWORD *)this + 6) + 8LL);
    if ( a2 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a2[v10] );
      v11 = 2 * v10 + 2;
    }
    else
    {
      a2 = &szAgent;
      v11 = 2;
    }
    v33 = v11;
    v32 = a2;
    v30 = &v17;
    v28 = &v21;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    v34 = 0;
    v31 = 4LL;
    v29 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v25 = &unk_1804FFB56;
    UserData.Reserved = 2;
    v12 = *(_QWORD *)(v6 + 32);
    v26 = 93;
    v27 = 1;
    fPending = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v12, &EventDescriptor, v9, v8, 5u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)((char *)this + 8));
}
