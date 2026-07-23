/*
 * XREFs of _RtlDeleteTimerQueue@4 @ 0x4B3851D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueue(HANDLE TimerQueueHandle)
{
  return RtlDeleteTimerQueueEx(TimerQueueHandle, 0);
}
