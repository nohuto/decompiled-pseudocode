/*
 * XREFs of TppETWPoolClose @ 0x180112A0C
 * Callers:
 *     TpReleasePool @ 0x180054CB0 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
