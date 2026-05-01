/*
 * XREFs of EventUnregister_0 @ 0x18008D85A
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180456DF0 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventUnregister_0(REGHANDLE RegHandle)
{
  return EventUnregister(RegHandle);
}
