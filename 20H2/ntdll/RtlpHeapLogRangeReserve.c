/*
 * XREFs of RtlpHeapLogRangeReserve @ 0x1801085BC
 * Callers:
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegSegmentAllocate @ 0x180006258 (RtlpHpSegSegmentAllocate.c)
 *     RtlpExtendHeap @ 0x18000E348 (RtlpExtendHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeReserve()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
