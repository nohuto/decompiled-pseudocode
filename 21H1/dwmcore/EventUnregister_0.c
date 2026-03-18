/*
 * XREFs of EventUnregister_0 @ 0x1800E2858
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180218CA0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
