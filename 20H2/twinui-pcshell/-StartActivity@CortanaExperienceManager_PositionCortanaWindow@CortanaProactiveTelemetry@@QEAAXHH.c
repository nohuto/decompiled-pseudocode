/*
 * XREFs of ?StartActivity@CortanaExperienceManager_PositionCortanaWindow@CortanaProactiveTelemetry@@QEAAXHH@Z @ 0x180013C1C
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x1800130D0 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18020F3C8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?zInternalStart@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180013DC0 (-zInternalStart@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800237B0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008C048 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow::StartActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *this,
        int a2,
        int a3)
{
  __int64 v6; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v8; // rax
  __int64 v9; // r8
  REGHANDLE v10; // rcx
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-69h] BYREF
  int v13; // [rsp+34h] [rbp-65h] BYREF
  int v14; // [rsp+38h] [rbp-61h] BYREF
  DWORD v15; // [rsp+3Ch] [rbp-5Dh] BYREF
  LPVOID Context; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-51h]
  __int64 v18; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-29h] BYREF
  void *v21; // [rsp+80h] [rbp-19h]
  int v22; // [rsp+88h] [rbp-11h]
  int v23; // [rsp+8Ch] [rbp-Dh]
  __int64 *v24; // [rsp+90h] [rbp-9h]
  int v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+9Ch] [rbp+3h]
  DWORD *v27; // [rsp+A0h] [rbp+7h]
  int v28; // [rsp+A8h] [rbp+Fh]
  int v29; // [rsp+ACh] [rbp+13h]
  int *v30; // [rsp+B0h] [rbp+17h]
  int v31; // [rsp+B8h] [rbp+1Fh]
  int v32; // [rsp+BCh] [rbp+23h]
  int *v33; // [rsp+C0h] [rbp+27h]
  int v34; // [rsp+C8h] [rbp+2Fh]
  int v35; // [rsp+CCh] [rbp+33h]

  wil::ActivityBase<CortanaProactiveLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1805CC310;
    qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v11);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
  }
  v6 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v13 = a3;
    v14 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 0x1000000LL;
    v15 = CurrentThreadId;
    v8 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(this);
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v26 = 0;
    EventDescriptor.Keyword = 0LL;
    v9 = *((_QWORD *)this + 6);
    v33 = &v13;
    v34 = 4;
    v30 = &v14;
    v27 = &v15;
    v24 = &v18;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v6 + 8);
    v31 = 4;
    v28 = 4;
    v25 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v21 = &unk_180507104;
    UserData.Reserved = 2;
    v10 = *(_QWORD *)(v6 + 32);
    v22 = 105;
    v23 = 1;
    v17 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(v10, &EventDescriptor, (LPCGUID)(v9 + 8), v8, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((CortanaProactiveTelemetry::CortanaExperienceManager_PositionCortanaWindow *)((char *)this + 8));
}
