/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408B86A0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
