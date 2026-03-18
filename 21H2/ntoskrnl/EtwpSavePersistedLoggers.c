/*
 * XREFs of EtwpSavePersistedLoggers @ 0x1409ED690
 * Callers:
 *     EtwpKsrCallback @ 0x1409ECB90 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x1403B72A0 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1409ED6C0 (EtwpSavePersistedLoggersWorker.c)
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
