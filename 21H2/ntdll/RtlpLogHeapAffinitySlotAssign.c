/*
 * XREFs of RtlpLogHeapAffinitySlotAssign @ 0x180109E68
 * Callers:
 *     RtlpSetSegmentInfo @ 0x18007A024 (RtlpSetSegmentInfo.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinitySlotAssign()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
