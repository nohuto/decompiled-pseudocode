/*
 * XREFs of EventUnregister_0 @ 0x1800E411E
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180214470 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
