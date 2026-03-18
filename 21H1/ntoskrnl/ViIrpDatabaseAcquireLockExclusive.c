/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x14059CA4C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409CD5D0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409CE22C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D2830 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2AB4 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409DD7E8 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD8BC (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
