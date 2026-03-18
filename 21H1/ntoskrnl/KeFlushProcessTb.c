/*
 * XREFs of KeFlushProcessTb @ 0x1402D52E4
 * Callers:
 *     MmOutSwapProcess @ 0x1402446DC (MmOutSwapProcess.c)
 *     MiDeleteProcessShadow @ 0x1402AD198 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1402D4FCC (MiDeleteFinalPageTables.c)
 *     KeSwapDirectoryTableBase @ 0x140389FA4 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14038CEBC (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
