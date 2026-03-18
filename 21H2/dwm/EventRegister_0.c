/*
 * XREFs of EventRegister_0 @ 0x1400046D8
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x14000A088 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
ULONG __stdcall EventRegister_0(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  return EventRegister(ProviderId, EnableCallback, CallbackContext, RegHandle);
}
