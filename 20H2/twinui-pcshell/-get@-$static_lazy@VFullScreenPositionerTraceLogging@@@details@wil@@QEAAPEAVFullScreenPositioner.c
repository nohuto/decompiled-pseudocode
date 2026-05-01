/*
 * XREFs of ?get@?$static_lazy@VFullScreenPositionerTraceLogging@@@details@wil@@QEAAPEAVFullScreenPositionerTraceLogging@@P6AXXZ@Z @ 0x1801A839C
 * Callers:
 *     ??1Completer@?$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ @ 0x1801A48C4 (--1Completer@-$static_lazy@VFullScreenPositionerLogging@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<FullScreenPositionerTraceLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`FullScreenPositionerTraceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6)
    && (_DWORD)v5 )
  {
    v6 = &qword_1805CCC68;
    qword_1805CCC68 = &ShellScreenClippingLogging::`vftable';
    qword_1805CCC80 = (struct _tlgProvider_t *)&`FullScreenPositionerTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805CCC68, qword_1805CCC80, v3);
    InitOnceComplete(&`FullScreenPositionerTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805CCC68);
  }
  return v6;
}
