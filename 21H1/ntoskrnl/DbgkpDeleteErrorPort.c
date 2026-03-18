/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140882C38
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404E8938 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140882634 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x140637550 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
