/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1408871A8
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404EE318 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140886BA4 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
