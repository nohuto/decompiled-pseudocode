/*
 * XREFs of EtwpSavePersistedLoggers @ 0x1409493DC
 * Callers:
 *     EtwpKsrCallback @ 0x1409488F0 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14039B5C0 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x14094940C (EtwpSavePersistedLoggersWorker.c)
 */

char EtwpSavePersistedLoggers()
{
  signed __int32 v0; // eax

  LOBYTE(v0) = ExIsSoftBoot();
  if ( (_BYTE)v0 )
  {
    v0 = _InterlockedCompareExchange(&EtwpLoggerSaveState, 1, 0);
    if ( !v0 )
      LOBYTE(v0) = EtwpSavePersistedLoggersWorker();
  }
  return v0;
}
