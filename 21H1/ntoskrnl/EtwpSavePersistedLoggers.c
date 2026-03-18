/*
 * XREFs of EtwpSavePersistedLoggers @ 0x140944A10
 * Callers:
 *     EtwpKsrCallback @ 0x140943F20 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x140397F50 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x140944A40 (EtwpSavePersistedLoggersWorker.c)
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
