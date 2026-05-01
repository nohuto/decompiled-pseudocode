/*
 * XREFs of ?get@?$static_lazy@VCustomShellHostTelemetry@@@details@wil@@QEAAPEAVCustomShellHostTelemetry@@P6AXXZ@Z @ 0x1803DDEAC
 * Callers:
 *     ??$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z @ 0x1803DA34C (--$SecondaryAppLaunched@PEBG@CustomShellHostTelemetry@@SAX$$QEAPEBG@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085A24 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D6F4 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CustomShellHostTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CustomShellHostTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805CE3A0;
    qword_1805CE3A0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CE3B8 = (struct _tlgProvider_t *)&`CustomShellHostTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CE3A0, qword_1805CE3B8, v3);
    InitOnceComplete(&`CustomShellHostTelemetry::Instance'::`2'::wrapper, 0, qword_1805CE3A0);
  }
  return v6;
}
