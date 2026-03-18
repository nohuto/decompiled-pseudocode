/*
 * XREFs of SeUnregisterImageVerificationCallback @ 0x140917900
 * Callers:
 *     <none>
 * Callees:
 *     ExUnregisterCallback @ 0x14037EB50 (ExUnregisterCallback.c)
 */

void __fastcall SeUnregisterImageVerificationCallback(void *a1)
{
  _InterlockedDecrement(&dword_140CEC724);
  ExUnregisterCallback(a1);
}
