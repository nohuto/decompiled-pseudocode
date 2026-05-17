/*
 * XREFs of RtlpTpETWCallbackEnqueue @ 0x180112838
 * Callers:
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     TppWorkPost @ 0x1800129B8 (TppWorkPost.c)
 *     TppWorkCallbackPrologRelease @ 0x18001FEF8 (TppWorkCallbackPrologRelease.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackEnqueue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
