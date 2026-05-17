/*
 * XREFs of RtlpLogHeapValidateEvent @ 0x18010A5EC
 * Callers:
 *     RtlValidateHeap @ 0x18005E080 (RtlValidateHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapValidateEvent()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
