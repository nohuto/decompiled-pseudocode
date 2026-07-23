/*
 * XREFs of _NtQueryAuxiliaryCounterFrequency@4 @ 0x4B2F3D60
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryAuxiliaryCounterFrequency(PLARGE_INTEGER AuxiliaryCounterFrequency)
{
  return Wow64SystemServiceCall();
}
