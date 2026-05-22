/*
 * XREFs of ?get@?$static_lazy@VTestCursorTraceLogging@@@details@wil@@QEAAPEAVTestCursorTraceLogging@@P6AXXZ@Z @ 0x180140F18
 * Callers:
 *     ??$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z @ 0x18013DC0C (--$CursorSuppressed@AEA_N@TestCursorTraceLogging@@SAXAEA_N@Z.c)
 *     ?Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x18014060C (-Provider@TestCursorTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180036EB0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BC9C (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TestCursorTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`TestCursorTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180209638;
    qword_180209638[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180209650 = (struct _tlgProvider_t *)&`TestCursorTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180209638, qword_180209650, 0LL);
    InitOnceComplete(&`TestCursorTraceLogging::Instance'::`2'::wrapper, 0, qword_180209638);
  }
  return v5;
}
