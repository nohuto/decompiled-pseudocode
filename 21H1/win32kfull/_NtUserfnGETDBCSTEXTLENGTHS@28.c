/*
 * XREFs of _NtUserfnGETDBCSTEXTLENGTHS@28 @ 0x16B7AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserfnGETDBCSTEXTLENGTHS(int a1, int a2, int a3, int a4, int a5, char a6, int a7)
{
  return ((int (__stdcall *)(int, int, int, int, int))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, a3, a7, a5);
}
