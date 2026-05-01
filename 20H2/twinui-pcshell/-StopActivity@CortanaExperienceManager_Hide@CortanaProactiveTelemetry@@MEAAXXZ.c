/*
 * XREFs of ?StopActivity@CortanaExperienceManager_Hide@CortanaProactiveTelemetry@@MEAAXXZ @ 0x18005B470
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800489CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18005BAA0 (-zInternalStop@-$ActivityBase@VStartMenuExperienceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180144BBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 */

void __fastcall CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_Hide *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  void (*v8)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v9; // rcx
  int v10; // ecx
  __int64 v11; // r8
  void (*v12)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v13; // [rsp+A0h] [rbp-80h] BYREF
  int v14; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v15; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID v16; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v17; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v18; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v19; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v21; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v24; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v25; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v26[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v28; // [rsp+148h] [rbp+28h] BYREF
  __int64 v29; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<StartMenuExperienceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  if ( v4 )
  {
    v16 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &v16) && fPending )
    {
      v16 = qword_1805CC310;
      qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v8);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
    }
    v9 = (_DWORD *)*((_QWORD *)v16 + 1);
    if ( *v9 > 5u && tlgKeywordOn((__int64)v9, 0x400000000000LL) )
    {
      v11 = *((_QWORD *)this + 6);
      v18 = *((_QWORD *)v4 + 14);
      v19 = *((_QWORD *)v4 + 13);
      LODWORD(v28) = v4[24];
      v20 = *((_QWORD *)v4 + 11);
      v21 = *((_QWORD *)v4 + 10);
      LODWORD(v29) = v4[18];
      v22 = *((_QWORD *)v4 + 8);
      LODWORD(Context) = v4[6];
      v23 = *((_QWORD *)v4 + 2);
      v13 = *v4;
      v24 = *((_QWORD *)v4 + 15);
      v14 = v4[14];
      v25 = *((_QWORD *)v4 + 6);
      LODWORD(v15) = v4[1];
      v26[0] = 0x1000000LL;
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v10,
        (int)&dword_1805068F0,
        v11 + 8,
        (__int64)&v17,
        (__int64)v26,
        (__int64)&v15,
        (__int64)&v25,
        (__int64)&v14,
        (__int64)&v24,
        (__int64)&v13,
        (__int64)&v23,
        (__int64)&Context,
        (__int64)&v22,
        (__int64)&v29,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v28,
        (__int64)&v19,
        (__int64)&v18);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1805CC310;
      qword_1805CC310[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC328 = (struct _tlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC310, qword_1805CC328, v12);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, qword_1805CC310);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      LODWORD(v28) = CurrentThreadId;
      LODWORD(v29) = *(_DWORD *)(v7 + 76);
      v17 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v5,
        byte_180506A25,
        (const GUID *)(v7 + 8),
        0LL,
        (__int64)&v17,
        (__int64)&v29,
        (__int64)&v28);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CortanaProactiveTelemetry::CortanaExperienceManager_Hide *)((char *)this + 8));
}
