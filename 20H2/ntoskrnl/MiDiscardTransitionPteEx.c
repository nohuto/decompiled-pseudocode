/*
 * XREFs of MiDiscardTransitionPteEx @ 0x140388734
 * Callers:
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x140381C74 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052B0F0 (MiWalkResetCommitPte.c)
 *     MiGetSlabStandbyPage @ 0x1405515FC (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C3730 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 */

void __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, __int16 a2)
{
  MiRestoreTransitionPte(a1, 0);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, a2 | 2);
}
