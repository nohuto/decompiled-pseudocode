/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14037E4DC
 * Callers:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x1402264E0 (MiPfnsWorthTrying.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x140355434 (MiCanStealKernelStack.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F0884 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052EB18 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x14052EBC8 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140530A50 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140530B80 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054EF48 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x140558FF8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x1407583C8 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D46A4 (MiGetNextDirectFixupProto.c)
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
