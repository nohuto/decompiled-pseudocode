/*
 * XREFs of RtlpWnfETWEventNameSubRundown @ 0x1800DE8C8
 * Callers:
 *     RtlpDecRefWnfNameSubscription @ 0x180063018 (RtlpDecRefWnfNameSubscription.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventNameSubRundown()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
