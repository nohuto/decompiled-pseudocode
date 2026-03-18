/*
 * XREFs of sub_1406ED14C @ 0x1406ED14C
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405CCE50 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1405CD0C0 @ 0x1405CD0C0 (sub_1405CD0C0.c)
 *     WbFreeMemoryBlock @ 0x14065BC4C (WbFreeMemoryBlock.c)
 *     sub_14095F358 @ 0x14095F358 (sub_14095F358.c)
 *     sub_14095F548 @ 0x14095F548 (sub_14095F548.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1402C0A80 (IoFreeMdl.c)
 */

void __fastcall sub_1406ED14C(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
