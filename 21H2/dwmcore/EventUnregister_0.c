/*
 * XREFs of EventUnregister_0 @ 0x1800E856E
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180217120 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
