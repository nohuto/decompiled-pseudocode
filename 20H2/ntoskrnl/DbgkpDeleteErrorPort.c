/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140889AA8
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404EC7F8 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1408894A4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
