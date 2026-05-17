/*
 * XREFs of RtlpLogHeapAffinityManagerEnable @ 0x180109A2C
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpLogHeapAffinityManagerEnable()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
