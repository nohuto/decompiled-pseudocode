/*
 * XREFs of RtlpLogHeapReuseThresholdActivate @ 0x18010A5D4
 * Callers:
 *     RtlpIsSubSegmentReuseThresholdExceeded @ 0x1800235A0 (RtlpIsSubSegmentReuseThresholdExceeded.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReuseThresholdActivate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
