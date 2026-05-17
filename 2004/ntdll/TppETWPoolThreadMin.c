/*
 * XREFs of TppETWPoolThreadMin @ 0x180112674
 * Callers:
 *     TpSetPoolMinThreads @ 0x180083410 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
