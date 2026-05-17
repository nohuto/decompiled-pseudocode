/*
 * XREFs of TppETWPoolThreadMax @ 0x1801129A4
 * Callers:
 *     TpSetPoolMaxThreads @ 0x180062C20 (TpSetPoolMaxThreads.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWPoolThreadMax()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
