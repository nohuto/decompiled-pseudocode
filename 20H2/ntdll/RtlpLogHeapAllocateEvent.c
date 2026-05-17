/*
 * XREFs of RtlpLogHeapAllocateEvent @ 0x18010A060
 * Callers:
 *     RtlpHpAllocateHeap @ 0x18000776C (RtlpHpAllocateHeap.c)
 *     RtlpAllocateHeapInternal @ 0x18002AA20 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAllocateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
