/*
 * XREFs of TppETWTimerExpiration @ 0x180112BA0
 * Callers:
 *     TppSingleTimerExpiration @ 0x180014100 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWTimerExpiration()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
