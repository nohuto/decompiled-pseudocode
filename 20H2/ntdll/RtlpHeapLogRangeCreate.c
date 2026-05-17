/*
 * XREFs of RtlpHeapLogRangeCreate @ 0x180108400
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpHeapLogRangeCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
