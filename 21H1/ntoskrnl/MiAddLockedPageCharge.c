/*
 * XREFs of MiAddLockedPageCharge @ 0x1402826F0
 * Callers:
 *     MmCopyToCachedPage @ 0x14027CC60 (MmCopyToCachedPage.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140282754 (MiRelockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x140283A50 (MiFinishHardFault.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402FD72C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMakeProtoAddressValid @ 0x140314BF0 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiHandleCollidedFault @ 0x140341780 (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiDoubleLockMdlPage @ 0x14037A46C (MiDoubleLockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x14038A368 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x140531584 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1405401CC (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140550324 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x1405524DC (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x140555808 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 */

__int64 __fastcall MiAddLockedPageCharge(__int64 a1, char a2)
{
  unsigned int locked; // r9d
  unsigned int v4; // r10d

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
