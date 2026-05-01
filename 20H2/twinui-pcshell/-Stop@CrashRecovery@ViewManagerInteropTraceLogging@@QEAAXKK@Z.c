/*
 * XREFs of ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1802A6288
 * Callers:
 *     ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x1802AC6D8 (-_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@4545645644544@Z @ 0x18029EECC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_18029EECC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x18029F224 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ?zInternalStop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802ADA44 (-zInternalStop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CrashRecovery::Stop(
        ViewManagerInteropTraceLogging::CrashRecovery *this,
        int a2,
        int a3)
{
  int *v3; // rsi
  int v7; // eax
  int *v8; // rsi
  BOOL inited; // eax
  __int64 v10; // r9
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v16; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v18; // r8
  int v19; // eax
  int v20; // [rsp+D0h] [rbp-80h] BYREF
  DWORD v21; // [rsp+D4h] [rbp-7Ch] BYREF
  __int64 v22; // [rsp+D8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+E0h] [rbp-70h] BYREF
  int v24; // [rsp+E8h] [rbp-68h] BYREF
  int v25; // [rsp+ECh] [rbp-64h] BYREF
  int v26; // [rsp+F0h] [rbp-60h] BYREF
  int v27; // [rsp+F4h] [rbp-5Ch] BYREF
  int v28; // [rsp+F8h] [rbp-58h] BYREF
  int v29; // [rsp+FCh] [rbp-54h] BYREF
  __int64 v30; // [rsp+100h] [rbp-50h] BYREF
  __int64 v31; // [rsp+108h] [rbp-48h] BYREF
  __int64 v32; // [rsp+110h] [rbp-40h] BYREF
  __int64 v33; // [rsp+118h] [rbp-38h] BYREF
  __int64 v34; // [rsp+120h] [rbp-30h] BYREF
  __int64 v35; // [rsp+128h] [rbp-28h] BYREF
  __int64 v36; // [rsp+130h] [rbp-20h] BYREF
  __int64 v37; // [rsp+138h] [rbp-18h] BYREF
  __int64 v38; // [rsp+140h] [rbp-10h] BYREF
  __int64 v39; // [rsp+148h] [rbp-8h] BYREF
  __int64 v40[6]; // [rsp+150h] [rbp+0h] BYREF
  WINBOOL fPending; // [rsp+190h] [rbp+40h] BYREF
  __int64 v42; // [rsp+1A8h] [rbp+58h] BYREF

  v3 = (int *)*((_QWORD *)this + 6);
  v7 = v3[19];
  if ( v7 < 0 && v7 == v3[21] )
    v8 = v3 + 20;
  else
    v8 = 0LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  Context = 0LL;
  inited = InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( v8 )
  {
    if ( inited && fPending )
    {
      Context = qword_1805CC5B0;
      qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v11);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
    }
    v12 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v12 > 5u )
    {
      v31 = *((_QWORD *)v8 + 5);
      v25 = v8[15];
      v26 = v8[2];
      v32 = *((_QWORD *)v8 + 14);
      v33 = *((_QWORD *)v8 + 13);
      v27 = v8[24];
      v34 = *((_QWORD *)v8 + 11);
      v13 = *((_QWORD *)v8 + 10);
      v30 = 0LL;
      v14 = *((_QWORD *)this + 6);
      v35 = v13;
      v28 = v8[18];
      v36 = *((_QWORD *)v8 + 8);
      v29 = v8[6];
      v37 = *((_QWORD *)v8 + 2);
      v20 = *v8;
      v38 = *((_QWORD *)v8 + 15);
      v21 = v8[14];
      v39 = *((_QWORD *)v8 + 6);
      LODWORD(v22) = v8[1];
      LODWORD(v42) = a3;
      v24 = a2;
      v40[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        (unsigned __int8 *)dword_180510901,
        (const GUID *)(v14 + 8),
        v10,
        (__int64)&v30,
        (__int64)v40,
        (__int64)&v22,
        (const wchar_t **)&v39,
        (__int64)&v21,
        (const wchar_t **)&v38,
        (__int64)&v20,
        (const WCHAR **)&v37,
        (__int64)&v29,
        (const wchar_t **)&v36,
        (__int64)&v28,
        (const wchar_t **)&v35,
        (const WCHAR **)&v34,
        (__int64)&v27,
        (const wchar_t **)&v33,
        (const WCHAR **)&v32,
        (__int64)&v26,
        (__int64)&v25,
        (const wchar_t **)&v31,
        (__int64)&v24,
        (__int64)&v42);
    }
  }
  else
  {
    if ( inited && fPending )
    {
      Context = qword_1805CC5B0;
      qword_1805CC5B0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805CC5C8 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC5B0, qword_1805CC5C8, v15);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_1805CC5B0);
    }
    v16 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v16 > 5u )
    {
      LODWORD(v42) = a3;
      LODWORD(v22) = a2;
      CurrentThreadId = GetCurrentThreadId();
      v18 = *((_QWORD *)this + 6);
      v21 = CurrentThreadId;
      v19 = *(_DWORD *)(v18 + 76);
      v30 = 0LL;
      v20 = v19;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v16,
        byte_180510892,
        (const GUID *)(v18 + 8),
        0LL,
        (__int64)&v30,
        (__int64)&v20,
        (__int64)&v21,
        (__int64)&v22,
        (__int64)&v42);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((ViewManagerInteropTraceLogging::CrashRecovery *)((char *)this + 8));
}
