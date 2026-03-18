/*
 * XREFs of ?GreGetBaseUFIBits@@YGHPAU_UNIVERSAL_FONT_ID@@PAU_FONTFILEVIEW@@@Z @ 0x1D785A
 * Callers:
 *     _NtGdiAddRemoteMMInstanceToDC@12 @ 0x1D9196 (_NtGdiAddRemoteMMInstanceToDC@12.c)
 * Callees:
 *     ?ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z @ 0x1D8628 (-ppfeGetPFEFromUFIInternal@@YGPAVPFE@@PAU_UNIVERSAL_FONT_ID@@HH@Z.c)
 */

int __fastcall GreGetBaseUFIBits(int a1, void *a2)
{
  int v3; // esi
  struct PFE *PFEFromUFIInternal; // eax
  int v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h]

  v3 = 0;
  PFEFromUFIInternal = ppfeGetPFEFromUFIInternal(0, v6, v7);
  if ( PFEFromUFIInternal )
  {
    qmemcpy(a2, **(const void ***)(*(_DWORD *)PFEFromUFIInternal + 120), 0x48u);
    return 1;
  }
  return v3;
}
