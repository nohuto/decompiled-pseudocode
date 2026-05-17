/*
 * XREFs of _NtSaveKey@8 @ 0x4B2F41A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSaveKey(int a1, int a2)
{
  return Wow64SystemServiceCall();
}
