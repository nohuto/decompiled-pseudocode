/*
 * XREFs of MiAddLockedPageCharge @ 0x140325158
 * Callers:
 *     MiHandleCollidedFault @ 0x14020909C (MiHandleCollidedFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiMakeProtoAddressValid @ 0x140242A94 (MiMakeProtoAddressValid.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiFinishHardFault @ 0x1402DE0E0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14030FA04 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140324DC8 (MiRelockProtoPoolPage.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MmCopyToCachedPage @ 0x14033C250 (MmCopyToCachedPage.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiDoubleLockMdlPage @ 0x14037CCFC (MiDoubleLockMdlPage.c)
 *     MiMirrorPerformBrownWrites @ 0x140382400 (MiMirrorPerformBrownWrites.c)
 *     MiMapSystemCachePage @ 0x1405372E4 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x140545F2C (MiDbgMarkPfnModified.c)
 *     MiIdealClusterPage @ 0x140556054 (MiIdealClusterPage.c)
 *     MiBuildForkPageTable @ 0x14055820C (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x14055B538 (MiLockDownWorkingSet.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
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
