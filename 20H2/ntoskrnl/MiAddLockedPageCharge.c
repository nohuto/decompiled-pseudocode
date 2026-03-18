/*
 * XREFs of MiAddLockedPageCharge @ 0x1402CACB8
 * Callers:
 *     MiHandleCollidedFault @ 0x140201AA8 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x1402B4910 (MmCopyToCachedPage.c)
 *     MiFinishHardFault @ 0x1402C80B0 (MiFinishHardFault.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x1402CA924 (MiRelockProtoPoolPage.c)
 *     MiMakeProtoAddressValid @ 0x140323340 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiDoubleLockMdlPage @ 0x14037CF1C (MiDoubleLockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140381C74 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1405355A4 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1405441EC (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140554344 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x1405564FC (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140559828 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  unsigned int locked; // r9d
  char v4; // r10

  if ( (a2 & 1) == 0 && *(_WORD *)(a1 + 32) >= 0x7FFFu )
    return 0LL;
  if ( (unsigned int)MiAreChargesNeededToLockPage(a1) )
  {
    locked = MiChargeForLockedPage(a1, v4);
    if ( !locked )
      return 0LL;
  }
  ++*(_WORD *)(a1 + 32);
  return locked;
}
