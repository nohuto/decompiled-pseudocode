/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14038059C
 * Callers:
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1402451C4 (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140534228 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x1405342D8 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140536160 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140536290 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140554628 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x14055E6D8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x14076B358 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D7E04 (MiGetNextDirectFixupProto.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
