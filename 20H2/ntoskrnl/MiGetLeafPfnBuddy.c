/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14038020C
 * Callers:
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x1403260F4 (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x14034C3D0 (MiPfnsWorthTrying.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F4D98 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1405324E8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x140532598 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140534420 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140534550 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x140552918 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x14055C9C8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x140767008 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408DA4E4 (MiGetNextDirectFixupProto.c)
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
