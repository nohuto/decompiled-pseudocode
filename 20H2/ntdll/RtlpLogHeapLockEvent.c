/*
 * XREFs of RtlpLogHeapLockEvent @ 0x18010A4AC
 * Callers:
 *     RtlLockHeap @ 0x18005E4A0 (RtlLockHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapLockEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
