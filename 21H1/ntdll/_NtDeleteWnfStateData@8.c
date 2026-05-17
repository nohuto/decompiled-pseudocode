/*
 * XREFs of _NtDeleteWnfStateData@8 @ 0x4B2F36F0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtDeleteWnfStateData(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
