/*
 * XREFs of TppETWCallbackDequeue @ 0x18011263C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180063620 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180071CA0 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800726A0 (TppTimerpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180084BC0 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180112110 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
