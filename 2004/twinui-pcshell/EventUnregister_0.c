/*
 * XREFs of EventUnregister_0 @ 0x18008E15A
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18047AE00 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
