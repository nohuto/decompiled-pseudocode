/*
 * XREFs of ?StopActivity@TMAppArrange@TabletModeTelemetry@@MEAAXXZ @ 0x1803EDCE0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180053AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180120628 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     ?zInternalStop@?$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180189714 (-zInternalStop@-$ActivityBase@VWindowManagementLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0Is.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::StopActivity(TabletModeTelemetry::TMAppArrange *this)
{
  int *v1; // rsi
  int v3; // eax
  int *v4; // rsi
  void (*v5)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  void (*v11)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v12; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v14; // r8
  int v15; // edx
  int v16; // [rsp+A0h] [rbp-80h] BYREF
  int v17; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v18; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID Context; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v27; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v29[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v31; // [rsp+148h] [rbp+28h] BYREF
  __int64 v32; // [rsp+150h] [rbp+30h] BYREF
  LPVOID v33; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<WindowManagementLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v5);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v6 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v6 > 5u && tlgKeywordOn((__int64)v6, 0x400000000000LL) )
    {
      v9 = *((_QWORD *)v4 + 14);
      v10 = *((_QWORD *)this + 6);
      v20 = 0LL;
      v21 = v9;
      v22 = *((_QWORD *)v4 + 13);
      LODWORD(v31) = v4[24];
      v23 = *((_QWORD *)v4 + 11);
      v24 = *((_QWORD *)v4 + 10);
      LODWORD(v32) = v4[18];
      v25 = *((_QWORD *)v4 + 8);
      LODWORD(v33) = v4[6];
      v26 = *((_QWORD *)v4 + 2);
      v16 = *v4;
      v27 = *((_QWORD *)v4 + 15);
      v17 = v4[14];
      v28 = *((_QWORD *)v4 + 6);
      LODWORD(v18) = v4[1];
      v29[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v7,
        (unsigned __int8 *)dword_1804FAF6B,
        (const GUID *)(v10 + 8),
        v8,
        (__int64)&v20,
        (__int64)v29,
        (__int64)&v18,
        (const wchar_t **)&v28,
        (__int64)&v17,
        (const wchar_t **)&v27,
        (__int64)&v16,
        (const WCHAR **)&v26,
        (__int64)&v33,
        (const wchar_t **)&v25,
        (__int64)&v32,
        (const wchar_t **)&v24,
        (const WCHAR **)&v23,
        (__int64)&v31,
        (const wchar_t **)&v22,
        (const WCHAR **)&v21);
    }
  }
  else
  {
    v33 = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &v33) && fPending )
    {
      v33 = &qword_18059FF68;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_18059FF68);
      qword_18059FF68 = &ImmersiveIconsLogging::`vftable';
      qword_18059FF80 = (struct _tlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059FF68, qword_18059FF80, v11);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &qword_18059FF68);
    }
    v12 = (_DWORD *)*((_QWORD *)v33 + 1);
    if ( *v12 > 5u && tlgKeywordOn(*((_QWORD *)v33 + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      v15 = *(_DWORD *)(v14 + 76);
      v20 = 0LL;
      LODWORD(v31) = CurrentThreadId;
      LODWORD(v32) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_1804FAF1E,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v20,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TabletModeTelemetry::TMAppArrange *)((char *)this + 8));
}
