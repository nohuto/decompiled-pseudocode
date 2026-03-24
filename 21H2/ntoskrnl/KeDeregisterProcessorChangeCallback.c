/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408BB7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381970 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
