/*
 * XREFs of EventUnregister_0 @ 0x18008DCBA
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18047A460 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
