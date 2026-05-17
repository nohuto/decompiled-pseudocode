/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x180109FC8
 * Callers:
 *     RtlpSetSegmentInfo @ 0x180078FF4 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinitySlotAssign()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
