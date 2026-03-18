/*
 * XREFs of MiAddLockedPageCharge @ 0x1402296A0
 * Callers:
 *     MmCopyToCachedPage @ 0x140223C10 (MmCopyToCachedPage.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140229704 (MiRelockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x14022AA00 (MiFinishHardFault.c)
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiHandleCollidedFault @ 0x140312448 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMakeProtoAddressValid @ 0x140352940 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiDoubleLockMdlPage @ 0x14037B1EC (MiDoubleLockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x14037FD90 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x140531BD4 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053C420 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x14054081C (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140550974 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x140552B2C (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140555E58 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int locked; // r9d
  unsigned int v5; // r10d

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1, a2, a3, 1LL) )
  {
    locked = MiChargeForLockedPage(a1, v5);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
