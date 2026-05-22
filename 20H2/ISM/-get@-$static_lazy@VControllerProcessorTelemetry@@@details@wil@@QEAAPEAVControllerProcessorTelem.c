/*
 * XREFs of ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180124B40
 * Callers:
 *     ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x180124260 (-ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z.c)
 *     ?LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z @ 0x180124818 (-LogGamepadTaskSwitcherInvoked@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801248B8 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180037234 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18003BFDC (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ControllerProcessorTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = 0LL;
  if ( InitOnceBeginInitialize(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, (PBOOL)&v4, (LPVOID *)&v5)
    && (_DWORD)v4 )
  {
    v5 = qword_180208970;
    qword_180208970[0] = &RawInputProvidersContinuousTracing::`vftable';
    qword_180208988 = (struct _tlgProvider_t *)&`ControllerProcessorTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180208970, qword_180208988, 0LL);
    InitOnceComplete(&`ControllerProcessorTelemetry::Instance'::`2'::wrapper, 0, qword_180208970);
  }
  return v5;
}
