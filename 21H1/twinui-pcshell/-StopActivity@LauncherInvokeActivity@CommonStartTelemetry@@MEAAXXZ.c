/*
 * XREFs of ?StopActivity@LauncherInvokeActivity@CommonStartTelemetry@@MEAAXXZ @ 0x1800535D0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028ED8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180053AB0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?zInternalStop@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180054854 (-zInternalStop@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180120628 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::StopActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  int *v1; // rdi
  int v3; // eax
  int *v4; // rdi
  _DWORD *v5; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v7; // r8
  int v8; // eax
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rcx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r8
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v15; // [rsp+A0h] [rbp-80h] BYREF
  int v16; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v17; // [rsp+A8h] [rbp-78h] BYREF
  LPVOID v18; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v20; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v21; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v22; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v28[6]; // [rsp+100h] [rbp-20h] BYREF
  WINBOOL fPending; // [rsp+140h] [rbp+20h] BYREF
  __int64 v30; // [rsp+148h] [rbp+28h] BYREF
  __int64 v31; // [rsp+150h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+158h] [rbp+38h] BYREF

  v1 = (int *)*((_QWORD *)this + 6);
  v3 = v1[19];
  if ( v3 < 0 && v3 == v1[21] )
    v4 = v1 + 20;
  else
    v4 = 0LL;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStop();
  if ( v4 )
  {
    v18 = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &v18) && fPending )
    {
      v18 = qword_1805A0318;
      qword_1805A0318[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805A0330 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0318, qword_1805A0330, v9);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805A0318);
    }
    v10 = (_DWORD *)*((_QWORD *)v18 + 1);
    if ( *v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
    {
      v12 = *((_QWORD *)v4 + 14);
      v13 = *((_QWORD *)this + 6);
      v19 = 0LL;
      v20 = v12;
      v21 = *((_QWORD *)v4 + 13);
      LODWORD(v30) = v4[24];
      v22 = *((_QWORD *)v4 + 11);
      v23 = *((_QWORD *)v4 + 10);
      LODWORD(v31) = v4[18];
      v24 = *((_QWORD *)v4 + 8);
      LODWORD(Context) = v4[6];
      v25 = *((_QWORD *)v4 + 2);
      v15 = *v4;
      v26 = *((_QWORD *)v4 + 15);
      v16 = v4[14];
      v27 = *((_QWORD *)v4 + 6);
      LODWORD(v17) = v4[1];
      v28[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
        v11,
        (int)&dword_1804EF54F,
        v13 + 8,
        (__int64)&v19,
        (__int64)v28,
        (__int64)&v17,
        (__int64)&v27,
        (__int64)&v16,
        (__int64)&v26,
        (__int64)&v15,
        (__int64)&v25,
        (__int64)&Context,
        (__int64)&v24,
        (__int64)&v31,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v30,
        (__int64)&v21,
        (__int64)&v20);
    }
  }
  else
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805A0318;
      qword_1805A0318[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805A0330 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805A0318, qword_1805A0330, v14);
      InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1805A0318);
    }
    v5 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v5 > 5u && tlgKeywordOn(*((_QWORD *)Context + 1), 0x400000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v7 = *((_QWORD *)this + 6);
      LODWORD(v30) = CurrentThreadId;
      v8 = *(_DWORD *)(v7 + 76);
      v19 = 0LL;
      LODWORD(v31) = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (_DWORD)v5,
        (unsigned int)&unk_1804EF477,
        v7 + 8,
        0,
        (__int64)&v19,
        (__int64)&v31,
        (__int64)&v30);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((CommonStartTelemetry::LauncherInvokeActivity *)((char *)this + 8));
}
