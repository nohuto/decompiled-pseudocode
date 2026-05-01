/*
 * XREFs of ?get@?$static_lazy@VMeetNowTelemetryLogging@@@details@wil@@QEAAPEAVMeetNowTelemetryLogging@@P6AXXZ@Z @ 0x18009ADAC
 * Callers:
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800999D4 (-Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 */

LPVOID __fastcall wil::details::static_lazy<MeetNowTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`MeetNowTelemetryLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_1805A0A88;
    qword_1805A0A88 = &ShellScreenClippingLogging::`vftable';
    qword_1805A0AA0 = (struct _tlgProvider_t *)&`MeetNowTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1805A0A88, qword_1805A0AA0, v3);
    InitOnceComplete(&`MeetNowTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_1805A0A88);
  }
  return v6;
}
