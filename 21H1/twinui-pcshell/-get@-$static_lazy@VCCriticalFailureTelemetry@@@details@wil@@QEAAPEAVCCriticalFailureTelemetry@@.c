/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAAPEAVCCriticalFailureTelemetry@@P6AXXZ@Z @ 0x180449034
 * Callers:
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1804488CC (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 * Callees:
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180113D80 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x1804487E8 (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 */

LPVOID __fastcall wil::details::static_lazy<CCriticalFailureTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  LPVOID v7; // [rsp+50h] [rbp+18h] BYREF

  v6 = a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v6, &v7) && (_DWORD)v6 )
  {
    v4 = &`CCriticalFailureTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_1805A1168;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)&qword_1805A1168);
    qword_1805A1168 = &MultitaskingViewTelemetry::`vftable';
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<CCriticalFailureTelemetry>::Completer::~Completer((__int64)&v4);
  }
  return v7;
}
