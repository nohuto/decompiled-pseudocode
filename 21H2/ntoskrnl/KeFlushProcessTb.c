/*
 * XREFs of KeFlushProcessTb @ 0x140274364
 * Callers:
 *     MiDeleteFinalPageTables @ 0x14027404C (MiDeleteFinalPageTables.c)
 *     MmOutSwapProcess @ 0x1402EECE4 (MmOutSwapProcess.c)
 *     MiDeleteProcessShadow @ 0x1403104B8 (MiDeleteProcessShadow.c)
 *     KeSwapDirectoryTableBase @ 0x14038DB84 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14039053C (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
