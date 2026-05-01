/*
 * XREFs of ?get@?$static_lazy@VCCriticalFailureLogging@@@details@wil@@QEAAPEAVCCriticalFailureLogging@@P6AXXZ@Z @ 0x18046CDE8
 * Callers:
 *     ??1Completer@?$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ @ 0x18046C658 (--1Completer@-$static_lazy@VCCriticalFailureTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z @ 0x18046C810 (-ReportFailure_@CCriticalFailureTelemetry@@QEBAXJPEBGIPEA_K1_N@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x1801383D0 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CCriticalFailureLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805CE560;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1805CE560);
    qword_1805CE560[0] = &ImmersiveIconsLogging::`vftable';
    qword_1805CE578 = (struct _tlgProvider_t *)&`CCriticalFailureLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CE560, qword_1805CE578, v3);
    InitOnceComplete(&`CCriticalFailureLogging::Instance'::`2'::wrapper, 0, qword_1805CE560);
  }
  return v6;
}
