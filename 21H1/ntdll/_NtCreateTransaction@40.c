/*
 * XREFs of _NtCreateTransaction@40 @ 0x4B2F35E0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtCreateTransaction(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  return Wow64SystemServiceCall();
}
