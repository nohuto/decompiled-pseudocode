/*
 * XREFs of _RtlSetTimer@28 @ 0x4B3851F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetTimer(
        HANDLE TimerQueueHandle,
        PHANDLE Handle,
        WAITORTIMERCALLBACKFUNC Function,
        PVOID Context,
        ULONG DueTime,
        ULONG Period,
        ULONG Flags)
{
  return RtlCreateTimer(TimerQueueHandle, Handle, Function, Context, DueTime, Period, Flags);
}
