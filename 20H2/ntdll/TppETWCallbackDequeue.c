/*
 * XREFs of TppETWCallbackDequeue @ 0x18011279C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180062130 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070C70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071670 (TppTimerpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180084880 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180112270 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
