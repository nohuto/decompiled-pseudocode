/*
 * XREFs of TppETWTimerCancelNtTimer @ 0x180112AA4
 * Callers:
 *     TppUpdateSubQueueTimer @ 0x180013B20 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWTimerCancelNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
