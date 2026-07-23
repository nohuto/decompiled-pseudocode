/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1408BB900
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x1403814C0 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
