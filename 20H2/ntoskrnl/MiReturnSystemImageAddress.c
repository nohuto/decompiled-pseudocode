/*
 * XREFs of MiReturnSystemImageAddress @ 0x140758D7C
 * Callers:
 *     MiReturnImageBase @ 0x14067DD18 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140757814 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140230160 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x140758DC8 (MiReleaseDriverPtes.c)
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
