/*
 * XREFs of MiIsPfnFileOnly @ 0x1402186F0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiFillSystemPtes @ 0x140274CE0 (MiFillSystemPtes.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14027FB00 (MiActivePageClaimCandidate.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiMakeSystemCachePteValid @ 0x1402BB58C (MiMakeSystemCachePteValid.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiUnlockImageSection @ 0x1402EB5D0 (MiUnlockImageSection.c)
 *     MiUnlinkStandbyPfn @ 0x140300770 (MiUnlinkStandbyPfn.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x14034C6C0 (MiCanPageMove.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MmSetPfnListInfo @ 0x14036FCF8 (MmSetPfnListInfo.c)
 *     MiMirrorGatherBrownPages @ 0x14037F854 (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B4634 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x140531584 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1405401CC (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x140549A20 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0;
}
