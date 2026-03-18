/*
 * XREFs of EventUnregister_0 @ 0x1400046CC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
