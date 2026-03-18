/*
 * XREFs of KeDeregisterProcessorChangeCallback @ 0x1409617F0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14025DE40 (ExUnregisterCallback.c)
 */

void __stdcall KeDeregisterProcessorChangeCallback(PVOID CallbackHandle)
{
  ExUnregisterCallback(CallbackHandle);
}
