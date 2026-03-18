/*
 * XREFs of ViDeadlockDetectionUnlock @ 0x1409DC2D4
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14059CD58 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14059CEB8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1409DA5B8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1409DACA4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DAD14 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1409DB1A4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB328 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x1409DC24C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DC304 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409DCF38 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionUnlock(int a1)
{
  if ( a1 )
  {
    ViDeadlockDatabaseOwner = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&ViDeadlockDatabaseLock);
  }
  else
  {
    ExReleaseSpinLockSharedFromDpcLevel(&ViDeadlockDatabaseLock);
  }
}
