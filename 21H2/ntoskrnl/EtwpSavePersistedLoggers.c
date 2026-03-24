/*
 * XREFs of EtwpSavePersistedLoggers @ 0x14094920C
 * Callers:
 *     EtwpKsrCallback @ 0x140948720 (EtwpKsrCallback.c)
 * Callees:
 *     ExIsSoftBoot @ 0x14039B470 (ExIsSoftBoot.c)
 *     EtwpSavePersistedLoggersWorker @ 0x14094923C (EtwpSavePersistedLoggersWorker.c)
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
