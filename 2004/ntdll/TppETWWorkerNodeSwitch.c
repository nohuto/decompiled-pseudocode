/*
 * XREFs of TppETWWorkerNodeSwitch @ 0x180112A48
 * Callers:
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     TppWorkerSwitchNode @ 0x1800542C4 (TppWorkerSwitchNode.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWWorkerNodeSwitch()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
