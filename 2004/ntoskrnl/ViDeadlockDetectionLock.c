/*
 * XREFs of ViDeadlockDetectionLock @ 0x1409DC29C
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
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140224840 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

void __fastcall ViDeadlockDetectionLock(int a1)
{
  if ( a1 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel(&ViDeadlockDatabaseLock);
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  }
  else
  {
    ExAcquireSpinLockSharedAtDpcLevel(&ViDeadlockDatabaseLock);
  }
}
