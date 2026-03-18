/*
 * XREFs of sub_1406E3154 @ 0x1406E3154
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405D46C4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405D4934 @ 0x1405D4934 (sub_1405D4934.c)
 *     WbFreeMemoryBlock @ 0x14065D558 (WbFreeMemoryBlock.c)
 *     sub_1409664C8 @ 0x1409664C8 (sub_1409664C8.c)
 *     sub_1409666B8 @ 0x1409666B8 (sub_1409666B8.c)
 * Callees:
 *     IoFreeMdl @ 0x14020A410 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 */

void __fastcall sub_1406E3154(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
