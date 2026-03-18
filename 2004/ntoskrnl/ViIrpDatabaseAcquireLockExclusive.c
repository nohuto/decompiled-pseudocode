/*
 * XREFs of ViIrpDatabaseAcquireLockExclusive @ 0x14059D13C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1409CD5E0 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1409D2890 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1409D2B14 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryInsertAndLock @ 0x1409DD848 (VfIrpDatabaseEntryInsertAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409DD91C (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockExclusive(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockExclusive(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
