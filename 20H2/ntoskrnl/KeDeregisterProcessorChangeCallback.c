/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408BE2C0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
