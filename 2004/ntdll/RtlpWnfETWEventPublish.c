/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DE958
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007CAB0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180084C90 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
