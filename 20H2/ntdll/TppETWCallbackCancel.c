/*
 * XREFs of TppETWCallbackCancel @ 0x1801126F4
 * Callers:
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180084E50 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085350 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180111DB0 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DC60 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
