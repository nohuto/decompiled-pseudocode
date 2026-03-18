/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408B7380
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037EB50 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
