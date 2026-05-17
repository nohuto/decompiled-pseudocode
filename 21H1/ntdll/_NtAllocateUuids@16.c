/*
 * XREFs of _NtAllocateUuids@16 @ 0x4B2F30D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtAllocateUuids(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
