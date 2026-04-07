/*
 * XREFs of ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800C0ED0
 * Callers:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C0B04 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800C0E00 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180041DA8 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18005379C (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180053906 (InitOnceBeginInitialize_0.c)
 *     InitOnceComplete_0 @ 0x180053912 (InitOnceComplete_0.c)
 */

LPVOID __fastcall wil::details::static_lazy<ScalingCompatLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  LPVOID v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, &v6) && (_DWORD)v5 )
  {
    v6 = &qword_1800E5C28;
    qword_1800E5C28 = &WindowFrameLogging::`vftable';
    qword_1800E5C40 = (struct _tlgProvider_t *)&`ScalingCompatLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1800E5C28, qword_1800E5C40, v3);
    InitOnceComplete_0(&`ScalingCompatLogging::Instance'::`2'::wrapper, 0, &qword_1800E5C28);
  }
  return v6;
}
