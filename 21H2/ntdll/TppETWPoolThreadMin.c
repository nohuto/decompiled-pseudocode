/*
 * XREFs of TppETWPoolThreadMin @ 0x180112A24
 * Callers:
 *     TpSetPoolMinThreads @ 0x180083C20 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
