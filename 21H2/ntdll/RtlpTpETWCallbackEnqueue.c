/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x1801126D8
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
