/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C005AA80
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C005A970 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C01FBC0C (MicrosoftTelemetryAssertTriggeredWorker.c)
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
