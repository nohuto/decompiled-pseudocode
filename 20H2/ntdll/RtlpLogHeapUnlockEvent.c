/*
 * XREFs of RtlpLogHeapUnlockEvent @ 0x18010AA80
 * Callers:
 *     RtlUnlockHeap @ 0x18005E540 (RtlUnlockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapUnlockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
