/*
 * XREFs of MiDiscardTransitionPteEx @ 0x140388FE4
 * Callers:
 *     MiUnlinkStandbyPfn @ 0x14022EB40 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x140382400 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052CE30 (MiWalkResetCommitPte.c)
 *     MiGetSlabStandbyPage @ 0x14055330C (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 */

__int64 __fastcall MiDiscardTransitionPteEx(ULONG_PTR a1, __int16 a2, __int64 a3)
{
  MiRestoreTransitionPte(a1, 0LL, a3);
  MiSetPfnBlink(a1, 0LL, 1);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  return MiInsertPageInFreeOrZeroedList((__int64)(a1 + 0x58000000000LL) / 48, a2 | 2u);
}
