/*
 * XREFs of ??$CortanaCancelledDueToTimerCutoff@AEBKAEAW4InternalState@XamlLauncherState@@@StartWindowTelemetry@@SAXAEBKAEAW4InternalState@XamlLauncherState@@@Z @ 0x180330C44
 * Callers:
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180334B40 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180052920 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

char __fastcall StartWindowTelemetry::CortanaCancelledDueToTimerCutoff<unsigned long const &,enum XamlLauncherState::InternalState &>(
        int *a1,
        int *a2)
{
  void (*v4)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  char result; // al
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r9
  int v9; // [rsp+30h] [rbp-18h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-10h] BYREF
  WINBOOL v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  if ( InitOnceBeginInitialize(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &v11, (LPVOID *)&v10) && v11 )
  {
    v10 = &qword_1805CC668;
    qword_1805CC668 = &ShellScreenClippingLogging::`vftable';
    qword_1805CC680 = (struct _tlgProvider_t *)&`LauncherTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CC668, qword_1805CC680, v4);
    InitOnceComplete(&`LauncherTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805CC668);
  }
  result = (char)v10;
  v6 = (_DWORD *)v10[1];
  if ( *v6 > 5u )
  {
    result = tlgKeywordOn((__int64)v6, 0x400000000000LL);
    if ( result )
    {
      v12 = *a2;
      v9 = *a1;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               v7,
               byte_180517D51,
               0LL,
               v8,
               (__int64)&v9,
               (__int64)&v12);
    }
  }
  return result;
}
