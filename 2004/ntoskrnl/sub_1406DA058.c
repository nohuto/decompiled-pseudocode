/*
 * XREFs of sub_1406DA058 @ 0x1406DA058
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CE220 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405CE490 @ 0x1405CE490 (sub_1405CE490.c)
 *     WbFreeMemoryBlock @ 0x1406D9FD8 (WbFreeMemoryBlock.c)
 *     sub_1409606F8 @ 0x1409606F8 (sub_1409606F8.c)
 *     sub_1409608E8 @ 0x1409608E8 (sub_1409608E8.c)
 * Callees:
 *     IoFreeMdl @ 0x140267A50 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 */

void __fastcall sub_1406DA058(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
