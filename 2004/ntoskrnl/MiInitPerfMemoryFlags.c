/*
 * XREFs of MiInitPerfMemoryFlags @ 0x14053F584
 * Callers:
 *     MiMapUserLargePages @ 0x140559290 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C4250 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
