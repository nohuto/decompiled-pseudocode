/*
 * XREFs of EventRegister_0 @ 0x1800E2864
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180218CA0 (MicrosoftTelemetryAssertTriggeredWorker.c)
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
