/*
 * XREFs of EtwpSavePersistedLoggers @ 0x14094BA40
 * Callers:
 *     EtwpKsrCallback @ 0x14094AF50 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1403A7820 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x14094BA70 (EtwpSavePersistedLoggersWorker.c)
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
