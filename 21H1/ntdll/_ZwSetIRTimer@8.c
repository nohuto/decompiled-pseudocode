/*
 * XREFs of _ZwSetIRTimer@8 @ 0x4B2F42C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return Wow64SystemServiceCall();
}
