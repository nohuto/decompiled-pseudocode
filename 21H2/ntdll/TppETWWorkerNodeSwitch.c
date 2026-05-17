/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180112DF8
 * Callers:
 *     TppWorkerThread @ 0x18004D110 (TppWorkerThread.c)
 *     TppWorkerSwitchNode @ 0x18004E904 (TppWorkerSwitchNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
