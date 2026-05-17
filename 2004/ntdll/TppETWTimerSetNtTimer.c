/*
 * XREFs of TppETWTimerSetNtTimer @ 0x1801129C4
 * Callers:
 *     TppTimerQueueExpiration @ 0x180011AE0 (TppTimerQueueExpiration.c)
 *     TppUpdateSubQueueTimer @ 0x180013B20 (TppUpdateSubQueueTimer.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWTimerSetNtTimer()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
