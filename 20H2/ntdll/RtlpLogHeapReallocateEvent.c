/*
 * XREFs of RtlpLogHeapReallocateEvent @ 0x18010A528
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180023990 (RtlpHpReAllocateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapReallocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
