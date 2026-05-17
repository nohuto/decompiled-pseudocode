/*
 * XREFs of RtlpTpETWCallbackStart @ 0x1801123C4
 * Callers:
 *     TppExecuteWaitCallback @ 0x180010E18 (TppExecuteWaitCallback.c)
 *     TppAlpcpExecuteCallback @ 0x1800200D0 (TppAlpcpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180020FD0 (TppIopExecuteCallback.c)
 *     TppWorkpExecuteCallback @ 0x180062020 (TppWorkpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18006FA60 (RtlpTpWorkCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070B70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071570 (TppTimerpExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x1800760B0 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x1800784F0 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x18007FD90 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180112F60 (RtlpTpIoCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 RtlpTpETWCallbackStart()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
