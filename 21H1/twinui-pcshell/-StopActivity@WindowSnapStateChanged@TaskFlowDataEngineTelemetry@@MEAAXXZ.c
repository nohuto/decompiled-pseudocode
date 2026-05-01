/*
 * XREFs of ?StopActivity@WindowSnapStateChanged@TaskFlowDataEngineTelemetry@@MEAAXXZ @ 0x180217370
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180053AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180120628 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?zInternalStop@?$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18014F078 (-zInternalStop@-$ActivityBase@VTaskFlowDataEngineTelemetry@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_Tlg.c)
 */

void __fastcall TaskFlowDataEngineTelemetry::WindowSnapStateChanged::StopActivity(
        TaskFlowDataEngineTelemetry::WindowSnapStateChanged *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  void (*v10)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  int v14; // [rsp+A0h] [rbp-80h] BYREF
  int v15; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v16; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v18; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v27[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v29; // [rsp+148h] [rbp+28h] BYREF
  __int64 v30; // [rsp+150h] [rbp+30h] BYREF
  LPVOID v31; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<TaskFlowDataEngineTelemetry,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805A01A8;
      qword_1805A01A8 = &ShellScreenClippingLogging::`vftable';
      qword_1805A01C0 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805A01A8, qword_1805A01C0, v5);
      InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_1805A01A8);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v9 = *((_QWORD *)this + 6);
      v19 = *((_QWORD *)v4 + 14);
      v20 = *((_QWORD *)v4 + 13);
      LODWORD(v29) = v4[24];
      v21 = *((_QWORD *)v4 + 11);
      v22 = *((_QWORD *)v4 + 10);
      LODWORD(v30) = v4[18];
      v23 = *((_QWORD *)v4 + 8);
      LODWORD(v31) = v4[6];
      v24 = *((_QWORD *)v4 + 2);
      v14 = *v4;
      v25 = *((_QWORD *)v4 + 15);
      v15 = v4[14];
      v26 = *((_QWORD *)v4 + 6);
      LODWORD(v16) = v4[1];
      v27[0] = 0x1000000LL;
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v7,
        (unsigned __int8 *)dword_1804E0A03,
        (const GUID *)(v9 + 8),
        v8,
        (__int64)&v18,
        (__int64)v27,
        (__int64)&v16,
        (const wchar_t **)&v26,
        (__int64)&v15,
        (const wchar_t **)&v25,
        (__int64)&v14,
        (const WCHAR **)&v24,
        (__int64)&v31,
        (const wchar_t **)&v23,
        (__int64)&v30,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21,
        (__int64)&v29,
        (const wchar_t **)&v20,
        (const WCHAR **)&v19);
    }
  }
  else
  {
    v31 = 0LL;
    if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &v31) && fPending )
    {
      v31 = &qword_1805A01A8;
      qword_1805A01A8 = &ShellScreenClippingLogging::`vftable';
      qword_1805A01C0 = (struct _tlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805A01A8, qword_1805A01C0, v10);
      InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &qword_1805A01A8);
    }
    v11 = (_DWORD *)*((_QWORD *)v31 + 1);
    if ( *v11 > 5u && tlgKeywordOn(*((_QWORD *)v31 + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v13 = *((_QWORD *)this + 6);
      LODWORD(v29) = CurrentThreadId;
      LODWORD(v30) = *(_DWORD *)(v13 + 76);
      v18 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v11,
        byte_1804E09AC,
        (const GUID *)(v13 + 8),
        0LL,
        (__int64)&v18,
        (__int64)&v30,
        (__int64)&v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TaskFlowDataEngineTelemetry::WindowSnapStateChanged *)((char *)this + 8));
}
