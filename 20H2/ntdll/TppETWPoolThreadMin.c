/*
 * XREFs of TppETWPoolThreadMin @ 0x180112B84
 * Callers:
 *     TpSetPoolMinThreads @ 0x180083510 (TpSetPoolMinThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMin()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
