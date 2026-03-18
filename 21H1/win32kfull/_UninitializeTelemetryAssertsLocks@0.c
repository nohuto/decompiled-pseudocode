/*
 * XREFs of _UninitializeTelemetryAssertsLocks@0 @ 0xD40A0
 * Callers:
 *     _UninitializeTelemetryAssertsKM@0 @ 0xD3FD0 (_UninitializeTelemetryAssertsKM@0.c)
 * Callees:
 *     <none>
 */

void __stdcall UninitializeTelemetryAssertsLocks()
{
  if ( g_AssertFastMutex )
  {
    ExFreePoolWithTag(g_AssertFastMutex, 0x74727341u);
    g_AssertFastMutex = 0;
  }
}
