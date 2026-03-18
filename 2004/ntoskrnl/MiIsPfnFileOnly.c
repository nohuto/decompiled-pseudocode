/*
 * XREFs of MiIsPfnFileOnly @ 0x1402AB200
 * Callers:
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x140226AB0 (MiActivePageClaimCandidate.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140232510 (MiMakePageAvoidRead.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiMakeSystemCachePteValid @ 0x14026255C (MiMakeSystemCachePteValid.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x14031D380 (MiCanPageMove.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiUnlockImageSection @ 0x140324F00 (MiUnlockImageSection.c)
 *     MiUnlinkStandbyPfn @ 0x14033D070 (MiUnlinkStandbyPfn.c)
 *     MmSetPfnListInfo @ 0x140370928 (MmSetPfnListInfo.c)
 *     MiMirrorGatherBrownPages @ 0x1403840EC (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4F34 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x140531BD4 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053C238 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x14054081C (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x14054A070 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0;
}
