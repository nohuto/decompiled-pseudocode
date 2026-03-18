/*
 * XREFs of MiInitPerfMemoryFlags @ 0x14053EF34
 * Callers:
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiLogSectionCreate @ 0x1408C2F00 (MiLogSectionCreate.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D5A80 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitPerfMemoryFlags(int a1, char a2)
{
  return (2 * (a2 & 0xF)) | (unsigned int)(a1 != 0);
}
