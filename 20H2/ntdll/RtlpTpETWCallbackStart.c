/*
 * XREFs of RtlpTpETWCallbackStart @ 0x1801128D4
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062130 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18006FB60 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070C70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071670 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800761B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800785F0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x18007FE90 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180113470 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
