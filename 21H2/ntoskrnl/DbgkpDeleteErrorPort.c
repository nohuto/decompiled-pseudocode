/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140929F64
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x140540210 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14092A29C (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
