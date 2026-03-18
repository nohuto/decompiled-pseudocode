/*
 * XREFs of MiReturnSystemImageAddress @ 0x14074A19C
 * Callers:
 *     MiReturnImageBase @ 0x1405FF238 (MiReturnImageBase.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x140748C34 (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiReleaseDriverPtes @ 0x14074A1E8 (MiReleaseDriverPtes.c)
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
