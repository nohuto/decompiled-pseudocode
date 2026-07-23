/*
 * XREFs of _ZwPulseEvent@8 @ 0x4B2F3D50
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwPulseEvent(HANDLE EventHandle, PLONG PreviousState)
{
  return Wow64SystemServiceCall();
}
