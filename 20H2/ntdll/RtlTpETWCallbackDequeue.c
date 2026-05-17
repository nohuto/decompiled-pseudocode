/*
 * XREFs of RtlTpETWCallbackDequeue @ 0x1801139EC
 * Callers:
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     RtlpTpWorkUnposted @ 0x18006FDD0 (RtlpTpWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlTpETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
