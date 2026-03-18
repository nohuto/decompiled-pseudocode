/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0082938
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C00823E0 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
