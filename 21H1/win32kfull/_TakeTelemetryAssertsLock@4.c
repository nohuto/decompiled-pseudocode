/*
 * XREFs of _TakeTelemetryAssertsLock@4 @ 0xD40BE
 * Callers:
 *     _UninitializeTelemetryAssertsKM@0 @ 0xD3FD0 (_UninitializeTelemetryAssertsKM@0.c)
 *     _MicrosoftTelemetryAssertTriggeredWorker@24 @ 0x24B8ED (_MicrosoftTelemetryAssertTriggeredWorker@24.c)
 * Callees:
 *     <none>
 */

int TakeTelemetryAssertsLock()
{
  if ( KeGetCurrentIrql() > 1u )
    return -1;
  ExAcquireFastMutex(g_AssertFastMutex);
  return 0;
}
