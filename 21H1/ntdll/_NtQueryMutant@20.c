/*
 * XREFs of _NtQueryMutant@20 @ 0x4B2F3ED0
 * Callers:
 *     PsspDumpObject_Mutant @ 0x4B387F60 (PsspDumpObject_Mutant.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQueryMutant(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
