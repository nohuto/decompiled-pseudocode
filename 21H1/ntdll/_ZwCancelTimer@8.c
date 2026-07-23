/*
 * XREFs of _ZwCancelTimer@8 @ 0x4B2F2F90
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  return Wow64SystemServiceCall();
}
