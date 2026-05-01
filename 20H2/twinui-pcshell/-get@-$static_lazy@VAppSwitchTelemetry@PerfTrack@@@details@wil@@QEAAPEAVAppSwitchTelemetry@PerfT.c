/*
 * XREFs of ?get@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x1803A5BF4
 * Callers:
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x1803A5944 (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 * Callees:
 *     atexit @ 0x18008D254 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180138230 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ @ 0x1801F1A10 (--1Completer@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, (LPVOID *)&v7)
    && (_DWORD)v6 )
  {
    v4 = &`PerfTrack::AppSwitchTelemetry::Instance'::`2'::wrapper;
    v7 = qword_1805CD3C0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1805CD3C0);
    qword_1805CD3C0[0] = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v7;
}
