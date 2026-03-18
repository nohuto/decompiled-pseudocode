/*
 * XREFs of EventRegister_0 @ 0x1800E3C55
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1802162D0 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
