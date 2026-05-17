/*
 * XREFs of _NtQueryAuxiliaryCounterFrequency@4 @ 0x4B2F3D60
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQueryAuxiliaryCounterFrequency(int a1)
{
  return Wow64SystemServiceCall();
}
