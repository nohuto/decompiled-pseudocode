/*
 * XREFs of RtlpLogHeapWalkEvent @ 0x18010A668
 * Callers:
 *     RtlpWalkHeap @ 0x1800F4B8C (RtlpWalkHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapWalkEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
