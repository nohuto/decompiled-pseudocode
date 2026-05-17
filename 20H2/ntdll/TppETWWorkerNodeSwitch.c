/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180112F58
 * Callers:
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     TppWorkerSwitchNode @ 0x180054314 (TppWorkerSwitchNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
