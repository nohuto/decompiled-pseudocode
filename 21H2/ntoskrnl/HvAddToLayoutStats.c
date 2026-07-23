/*
 * XREFs of HvAddToLayoutStats @ 0x1407207D4
 * Callers:
 *     HvCheckBin @ 0x140720570 (HvCheckBin.c)
 *     HvCheckHive @ 0x140720C28 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
