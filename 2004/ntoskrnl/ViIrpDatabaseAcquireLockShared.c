/*
 * XREFs of ViIrpDatabaseAcquireLockShared @ 0x14059D160
 * Callers:
 *     VfIrpDatabaseCheckExFreePool @ 0x1409DD6FC (VfIrpDatabaseCheckExFreePool.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409DD798 (VfIrpDatabaseEntryFindAndLock.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall ViIrpDatabaseAcquireLockShared(KIRQL *a1)
{
  KIRQL result; // al

  result = ExAcquireSpinLockShared(&ViIrpDatabaseLock);
  *a1 = result;
  return result;
}
