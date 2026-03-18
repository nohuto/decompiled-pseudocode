/*
 * XREFs of KeFlushProcessTb @ 0x140263464
 * Callers:
 *     MiDeleteProcessShadow @ 0x140236418 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x14026314C (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1402DD934 (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x14038D314 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14038FF1C (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
