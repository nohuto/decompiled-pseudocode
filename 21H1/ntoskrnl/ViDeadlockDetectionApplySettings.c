/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1409DC1EC
 * Callers:
 *     VfDeadlockInitialize @ 0x1409DAE70 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409DD40C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x14059C8F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14059C970 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DC23C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC274 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DC2A4 (ViDeadlockEmptyDatabase.c)
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
