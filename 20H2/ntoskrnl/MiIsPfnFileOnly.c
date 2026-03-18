/*
 * XREFs of MiIsPfnFileOnly @ 0x14027A540
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiFillSystemPtes @ 0x140286700 (MiFillSystemPtes.c)
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockImageSection @ 0x1402F3190 (MiUnlockImageSection.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiActivePageClaimCandidate @ 0x14034C9A0 (MiActivePageClaimCandidate.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiCanPageMove @ 0x140350E70 (MiCanPageMove.c)
 *     MiMakeSystemCachePteValid @ 0x140356A3C (MiMakeSystemCachePteValid.c)
 *     MmSetPfnListInfo @ 0x140372878 (MmSetPfnListInfo.c)
 *     MiMirrorGatherBrownPages @ 0x14038621C (MiMirrorGatherBrownPages.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B7E54 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemCachePage @ 0x1405355A4 (MiMapSystemCachePage.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiDbgMarkPfnModified @ 0x1405441EC (MiDbgMarkPfnModified.c)
 *     MiUnlinkPageFromBadList @ 0x14054DA40 (MiUnlinkPageFromBadList.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFileOnly(__int64 a1)
{
  return (*(_QWORD *)(a1 + 40) & 0x2000000000000LL) != 0;
}
