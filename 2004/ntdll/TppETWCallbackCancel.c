/*
 * XREFs of TppETWCallbackCancel @ 0x1801121E4
 * Callers:
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180084D50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085250 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x1801118A0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009D9C0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
