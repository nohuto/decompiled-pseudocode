/*
 * XREFs of ViDeadlockDetectionApplySettings @ 0x1409DC24C
 * Callers:
 *     VfDeadlockInitialize @ 0x1409DAED0 (VfDeadlockInitialize.c)
 *     VfSettingsCheckForChanges @ 0x1409DD46C (VfSettingsCheckForChanges.c)
 * Callees:
 *     ViLowerIrql @ 0x14059CFE8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14059D060 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DC29C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC2D4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockEmptyDatabase @ 0x1409DC304 (ViDeadlockEmptyDatabase.c)
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
