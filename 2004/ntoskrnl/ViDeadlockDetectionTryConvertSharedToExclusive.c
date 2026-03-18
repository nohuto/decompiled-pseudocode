/*
 * XREFs of ViDeadlockDetectionTryConvertSharedToExclusive @ 0x14059CD28
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x14059CD58 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x14059CEB8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DAD14 (VfDeadlockBeforeCallDriver.c)
 * Callees:
 *     ExTryConvertSharedSpinLockExclusive @ 0x14037F6E0 (ExTryConvertSharedSpinLockExclusive.c)
 */

LOGICAL ViDeadlockDetectionTryConvertSharedToExclusive()
{
  LOGICAL result; // eax

  result = ExTryConvertSharedSpinLockExclusive(&ViDeadlockDatabaseLock);
  if ( result )
    ViDeadlockDatabaseOwner = (__int64)KeGetCurrentThread();
  return result;
}
