/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x140918B70
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CEC5E4);
  ExUnregisterCallback(a1);
}
