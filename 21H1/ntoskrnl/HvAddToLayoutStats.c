/*
 * XREFs of HvAddToLayoutStats @ 0x140699094
 * Callers:
 *     HvCheckHive @ 0x1406987E4 (HvCheckHive.c)
 *     HvCheckBin @ 0x140698E30 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
