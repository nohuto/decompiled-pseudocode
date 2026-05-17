/*
 * XREFs of RtlpWnfETWEventPublish @ 0x1800DECF8
 * Callers:
 *     RtlPublishWnfStateData @ 0x18007CBB0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180084D90 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventPublish()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
