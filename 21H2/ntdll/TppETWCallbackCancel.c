/*
 * XREFs of TppETWCallbackCancel @ 0x180112594
 * Callers:
 *     TppWorkWait @ 0x180013D78 (TppWorkWait.c)
 *     TpWaitForIoCompletion @ 0x180085350 (TpWaitForIoCompletion.c)
 *     TppWorkCancelPendingCallbacks @ 0x180085820 (TppWorkCancelPendingCallbacks.c)
 *     TppIopCancelPendingCallbacks @ 0x180111C50 (TppIopCancelPendingCallbacks.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E1F0 (NtTraceEvent.c)
 */

__int64 TppETWCallbackCancel()
{
  RtlGetCurrentServiceSessionId();
  return NtTraceEvent();
}
