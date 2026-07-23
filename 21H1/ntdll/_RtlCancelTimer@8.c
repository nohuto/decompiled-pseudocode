/*
 * XREFs of _RtlCancelTimer@8 @ 0x4B3851B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 */

NTSTATUS __stdcall RtlCancelTimer(HANDLE TimerQueueHandle, HANDLE TimerToCancel)
{
  return RtlDeleteTimer(TimerQueueHandle, TimerToCancel, 0);
}
