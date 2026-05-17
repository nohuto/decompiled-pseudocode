/*
 * XREFs of RtlpHeapLogRangeDestroy @ 0x180107F8C
 * Callers:
 *     RtlpHpHeapDestroy @ 0x1800048E4 (RtlpHpHeapDestroy.c)
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeDestroy()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
