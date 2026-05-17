/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x18010AB78
 * Callers:
 *     RtlpWalkHeap @ 0x1800F509C (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapWalkEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
