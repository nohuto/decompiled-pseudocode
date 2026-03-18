/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14037DA1C
 * Callers:
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiPfnsWorthTrying @ 0x14027F530 (MiPfnsWorthTrying.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x140317984 (MiCanStealKernelStack.c)
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14052E4C8 (MiInitializeLargeMdlLeafPfns.c)
 *     MiLogMdlRangeEvent @ 0x14052E578 (MiLogMdlRangeEvent.c)
 *     MiDoStackCopy @ 0x140530400 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x140530530 (MiJumpStackTarget.c)
 *     MiMakeUnusedImageExtentsCold @ 0x14054E8F8 (MiMakeUnusedImageExtentsCold.c)
 *     MiFreeLargePages @ 0x1405589A8 (MiFreeLargePages.c)
 *     MiFreeRelocations @ 0x140756458 (MiFreeRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D3354 (MiGetNextDirectFixupProto.c)
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
