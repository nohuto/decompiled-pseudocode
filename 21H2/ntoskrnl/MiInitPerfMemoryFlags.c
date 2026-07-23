/*
 * XREFs of MiInitPerfMemoryFlags @ 0x140544C98
 * Callers:
 *     MiMapUserLargePages @ 0x14055E970 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C79B0 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
