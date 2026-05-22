/*
 * XREFs of ?TerminateWorkerThreadApc@LampArrayRawInputProvider@@CAX_K@Z @ 0x18001C130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall LampArrayRawInputProvider::TerminateWorkerThreadApc(ULONG_PTR Parameter)
{
  *(_BYTE *)(Parameter + 112) = 1;
}
