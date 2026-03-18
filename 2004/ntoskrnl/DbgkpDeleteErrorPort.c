/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140883F58
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404E8F68 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140883954 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x140602510 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
