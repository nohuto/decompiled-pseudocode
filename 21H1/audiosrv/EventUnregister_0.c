/*
 * XREFs of EventUnregister_0 @ 0x18006C4F6
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013DA68 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
