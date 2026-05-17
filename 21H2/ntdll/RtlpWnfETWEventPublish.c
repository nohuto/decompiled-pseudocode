/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DEAA8
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007D550 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x1800850D0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
