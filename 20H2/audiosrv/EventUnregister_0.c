/*
 * XREFs of EventUnregister_0 @ 0x18006BC96
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18013CA88 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
