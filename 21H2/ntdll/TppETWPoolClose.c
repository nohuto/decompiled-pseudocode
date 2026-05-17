/*
 * XREFs of TppETWPoolClose @ 0x1801128AC
 * Callers:
 *     TpReleasePool @ 0x18004F2A0 (TpReleasePool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWPoolClose()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
