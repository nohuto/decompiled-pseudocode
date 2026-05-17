/*
 * XREFs of RtlpWnfETWEventSubscribe @ 0x1800DE9E8
 * Callers:
 *     RtlpAddWnfUserSubToNameSub @ 0x1800425EC (RtlpAddWnfUserSubToNameSub.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpWnfETWEventSubscribe()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
