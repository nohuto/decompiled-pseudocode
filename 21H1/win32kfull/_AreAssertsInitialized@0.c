/*
 * XREFs of _AreAssertsInitialized@0 @ 0xEAA46
 * Callers:
 *     _UninitializeTelemetryAssertsKM@0 @ 0xD3FD0 (_UninitializeTelemetryAssertsKM@0.c)
 *     _InitializeTelemetryAssertsKMByName@4 @ 0xEA95C (_InitializeTelemetryAssertsKMByName@4.c)
 *     _MicrosoftTelemetryAssertTriggeredWorker@24 @ 0x24B8ED (_MicrosoftTelemetryAssertTriggeredWorker@24.c)
 * Callees:
 *     <none>
 */

int __stdcall AreAssertsInitialized()
{
  if ( _InterlockedExchangeAdd(&g_AssertsOperational, 0) )
    return 0;
  else
    return 259;
}
