/*
 * XREFs of ?StopActivity@CortanaLauncherInvokeActivity@StartWindowTelemetry@@MEAAXXZ @ 0x18032E330
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180022028 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800489CC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ?zInternalStop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180085F88 (-zInternalStop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180144BBC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 */

void __fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::StopActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
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
  int v15; // eax
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
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  if ( v4 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1805CC668;
      qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v5);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
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
        (unsigned __int8 *)dword_180517762,
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
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &v33) && fPending )
    {
      v33 = &qword_1805CC668;
      qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
      qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v11);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
    }
    v12 = (_DWORD *)*((_QWORD *)v33 + 1);
    if ( *v12 > 5u && tlgKeywordOn(*((_QWORD *)v33 + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v14 = *((_QWORD *)this + 6);
      LODWORD(v31) = CurrentThreadId;
      v15 = *(_DWORD *)(v14 + 76);
      v20 = 0LL;
      LODWORD(v32) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v12,
        byte_180517704,
        (const GUID *)(v14 + 8),
        0LL,
        (__int64)&v20,
        (__int64)&v32,
        (__int64)&v31);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((StartWindowTelemetry::CortanaLauncherInvokeActivity *)((char *)this + 8));
}
