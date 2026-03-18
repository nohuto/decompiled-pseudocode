/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x14091E7A0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CEC6A4);
  ExUnregisterCallback(a1);
}
