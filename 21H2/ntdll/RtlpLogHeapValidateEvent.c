/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x18010A99C
 * Callers:
 *     RtlValidateHeap @ 0x18005F680 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapValidateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
