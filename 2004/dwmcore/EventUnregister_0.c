/*
 * XREFs of EventUnregister_0 @ 0x1800E3C49
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1802162D0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
