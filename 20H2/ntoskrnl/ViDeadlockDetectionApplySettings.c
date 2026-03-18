/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1409E226C
 * Callers:
 *     VfDeadlockInitialize @ 0x1409E0EF0 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409E348C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A0A88 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A0B00 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409E22BC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E22F4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1409E2324 (ViDeadlockEmptyDatabase.c)
 */

__int64 ViDeadlockDetectionApplySettings()
{
  unsigned __int8 v0; // bl

  if ( (MmVerifierData & 0x20) == 0 )
    return ViDeadlockEmptyDatabase();
  v0 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  ViDeadlockDetectionEnabled = 1;
  ViDeadlockDetectionUnlock(1LL);
  return ViLowerIrql(v0);
}
