/*
 * XREFs of MiReturnSystemImageAddress @ 0x14075FCA4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiReturnImageBase @ 0x1406EABD8 (MiReturnImageBase.c)
 *     MiGetSystemAddressForImage @ 0x14075E8AC (MiGetSystemAddressForImage.c)
 * Callees:
 *     MiGetPteAddress @ 0x140318100 (MiGetPteAddress.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiReleaseDriverPtes @ 0x14075FCF0 (MiReleaseDriverPtes.c)
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
