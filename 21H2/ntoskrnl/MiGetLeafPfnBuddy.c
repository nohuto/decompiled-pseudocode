/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140380A4C
 * Callers:
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1402C69E4 (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x140302130 (MiPfnsWorthTrying.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140533FE8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x140534098 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140535F20 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140536050 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1405543E8 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x14055E498 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x14076B198 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D7CA4 (MiGetNextDirectFixupProto.c)
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
