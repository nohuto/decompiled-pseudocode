/*
 * XREFs of RtlpTpETWCallbackStart @ 0x180112774
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180063620 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070B90 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180071CA0 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800726A0 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800771E0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x180079620 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800807B0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180113310 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
