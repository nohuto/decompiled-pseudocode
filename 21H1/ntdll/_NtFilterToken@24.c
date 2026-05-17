/*
 * XREFs of _NtFilterToken@24 @ 0x4B2F37C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtFilterToken(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
