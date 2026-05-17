/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x18010A250
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18007ABA8 (RtlpEstimateAllocatedSize.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 __fastcall RtlpLogHeapCreateEvent(__int64 a1)
{
  RtlpEstimateAllocatedSize(a1);
  return NtTraceEvent();
}
