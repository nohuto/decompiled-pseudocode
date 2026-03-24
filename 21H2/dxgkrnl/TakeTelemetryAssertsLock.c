/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C006FB8C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C006F64C (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

__int64 TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return 0xFFFFFFFFLL;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0LL;
}
