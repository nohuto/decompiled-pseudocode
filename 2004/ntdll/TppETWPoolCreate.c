/*
 * XREFs of TppETWPoolCreate @ 0x180112578
 * Callers:
 *     TpAllocPoolInternal @ 0x180061734 (TpAllocPoolInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWPoolCreate()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
