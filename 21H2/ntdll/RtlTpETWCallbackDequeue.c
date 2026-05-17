/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x18011388C
 * Callers:
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x180070E00 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlTpETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
