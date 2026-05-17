/*
 * XREFs of TppETWPoolClose @ 0x1801124FC
 * Callers:
 *     TpReleasePool @ 0x180054C60 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
