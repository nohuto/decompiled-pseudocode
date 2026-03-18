/*
 * XREFs of HvAddToLayoutStats @ 0x14069F164
 * Callers:
 *     HvCheckHive @ 0x14069E8B4 (HvCheckHive.c)
 *     HvCheckBin @ 0x14069EF00 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
