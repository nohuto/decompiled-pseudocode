/*
 * XREFs of TppETWCallbackDequeue @ 0x18011228C
 * Callers:
 *     TppWorkpExecuteCallback @ 0x180062020 (TppWorkpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180070B70 (TppSimplepExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x180071570 (TppTimerpExecuteCallback.c)
 *     TppExecuteWaitTimerCallback @ 0x180084780 (TppExecuteWaitTimerCallback.c)
 *     TppWorkUnposted @ 0x180111D60 (TppWorkUnposted.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackDequeue()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
