/*
 * XREFs of MiLockSpecialPurposeMemoryCachedPage @ 0x14059A31C
 * Callers:
 *     MiTryLockLeafPage @ 0x1402708F4 (MiTryLockLeafPage.c)
 *     MiSoftFaultMappedView @ 0x140270A00 (MiSoftFaultMappedView.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140325B30 (MiResolveTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x140328690 (MmCheckCachedPageStates.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiReuseStandbyPage @ 0x1405B3FA4 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiLockSpecialPurposeMemoryCachedPage(ULONG_PTR a1, char a2)
{
  if ( (a2 & 2) != 0 )
    return a1;
  MiReuseStandbyPage(a1);
  MiReturnFreeZeroPage(a1, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
