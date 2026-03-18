/*
 * XREFs of TakeTelemetryAssertsLock @ 0x1C0128944
 * Callers:
 *     UninitializeTelemetryAssertsKM @ 0x1C0128834 (UninitializeTelemetryAssertsKM.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C02DE440 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
