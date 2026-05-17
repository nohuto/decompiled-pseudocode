/*
 * XREFs of RtlpHeapLogRangeRelease @ 0x180108014
 * Callers:
 *     RtlpHpLargeFree @ 0x180003280 (RtlpHpLargeFree.c)
 *     RtlpHpSegSegmentFree @ 0x180004B70 (RtlpHpSegSegmentFree.c)
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlpDestroyHeapSegment @ 0x1800098EC (RtlpDestroyHeapSegment.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpHpLargeAllocationDestroy @ 0x18010E460 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeReAlloc @ 0x18010E5CC (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeRelease()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
