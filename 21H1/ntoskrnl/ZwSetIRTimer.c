/*
 * XREFs of ZwSetIRTimer @ 0x1403F55B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
