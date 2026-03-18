/*
 * XREFs of MiReturnSystemImageAddress @ 0x14074861C
 * Callers:
 *     MiReturnImageBase @ 0x140634278 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1407470B4 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140748668 (MiReleaseDriverPtes.c)
 */

__int64 __fastcall MiReturnSystemImageAddress(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 PteAddress; // rbx
  unsigned __int64 v4; // r8
  int SystemRegionType; // eax

  v2 = a2 >> 12;
  PteAddress = MiGetPteAddress(a1);
  SystemRegionType = MiGetSystemRegionType(v4);
  return MiReleaseDriverPtes(SystemRegionType == 1, PteAddress, (unsigned int)v2);
}
