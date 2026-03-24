/*
 * XREFs of MiIsPfnFileOnly @ 0x140218D60
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216790 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 *     MiFillSystemPtes @ 0x140226EF0 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x14026B990 (MiCanPageMove.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x1402B07E0 (MiUnlinkStandbyPfn.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140302700 (MiActivePageClaimCandidate.c)
 *     MiUnlockImageSection @ 0x14031AA30 (MiUnlockImageSection.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeSystemCachePteValid @ 0x14035E91C (MiMakeSystemCachePteValid.c)
 *     MmSetPfnListInfo @ 0x140372BE4 (MmSetPfnListInfo.c)
 *     MiMirrorGatherBrownPages @ 0x140384378 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B8854 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1405370A4 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541708 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x140545CEC (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x14054F540 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0;
}
