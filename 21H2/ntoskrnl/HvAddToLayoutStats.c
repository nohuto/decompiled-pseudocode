/*
 * XREFs of HvAddToLayoutStats @ 0x1407093F4
 * Callers:
 *     HvCheckBin @ 0x140709190 (HvCheckBin.c)
 *     HvCheckHive @ 0x140709848 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
