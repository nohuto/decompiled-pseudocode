/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800DEB38
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425FC (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
