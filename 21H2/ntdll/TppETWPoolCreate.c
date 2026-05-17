/*
 * XREFs of TppETWPoolCreate @ 0x180112928
 * Callers:
 *     TpAllocPoolInternal @ 0x180062D34 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWPoolCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
