/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800DEBB8
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x180062BB0 (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventCallback()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
