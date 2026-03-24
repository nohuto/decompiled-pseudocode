/*
 * XREFs of MiInitPerfMemoryFlags @ 0x140544A58
 * Callers:
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C7850 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
