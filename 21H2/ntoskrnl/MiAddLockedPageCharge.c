/*
 * XREFs of MiAddLockedPageCharge @ 0x140274508
 * Callers:
 *     MiDoubleLockMdlPage @ 0x14021372C (MiDoubleLockMdlPage.c)
 *     MiHandleCollidedFault @ 0x14023EB78 (MiHandleCollidedFault.c)
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiLockPagedAddress @ 0x140245DF4 (MiLockPagedAddress.c)
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 *     MiMakeProtoAddressValid @ 0x14024C5E0 (MiMakeProtoAddressValid.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14026FA0C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiObtainProtoReference @ 0x14027449C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14027FE9C (MiRelockProtoPoolPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14027FEF8 (MiWaitForCollidedFaultComplete.c)
 *     MmCopyToCachedPage @ 0x1402BE8E0 (MmCopyToCachedPage.c)
 *     MiLockCode @ 0x140312BB0 (MiLockCode.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiMakeDriverPagesPrivate @ 0x14033F41C (MiMakeDriverPagesPrivate.c)
 *     MiMirrorPerformBrownWrites @ 0x140399444 (MiMirrorPerformBrownWrites.c)
 *     MiLockDriverPageRange @ 0x140581D58 (MiLockDriverPageRange.c)
 *     MiMapSystemCachePage @ 0x140591F50 (MiMapSystemCachePage.c)
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 *     MiBuildReservationCluster @ 0x14059B62C (MiBuildReservationCluster.c)
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiDbgMarkPfnModified @ 0x1405A4940 (MiDbgMarkPfnModified.c)
 *     MiBuildForkPageTable @ 0x1405B85F8 (MiBuildForkPageTable.c)
 *     MiLockDownWorkingSet @ 0x1405BB938 (MiLockDownWorkingSet.c)
 *     MiIdealClusterPage @ 0x1405C3C6C (MiIdealClusterPage.c)
 * Callees:
 *     MiAreChargesNeededToLockPage @ 0x140337EA0 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x140337F60 (MiChargeForLockedPage.c)
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
