/*
 * XREFs of HvAddToLayoutStats @ 0x1407074C4
 * Callers:
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 *     HvCheckBin @ 0x140707260 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
