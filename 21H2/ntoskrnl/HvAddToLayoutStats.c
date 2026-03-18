/*
 * XREFs of HvAddToLayoutStats @ 0x14079CED8
 * Callers:
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvCheckBin @ 0x14079C640 (HvCheckBin.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
