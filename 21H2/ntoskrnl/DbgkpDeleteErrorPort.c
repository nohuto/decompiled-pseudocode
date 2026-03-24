/*
 * XREFs of DbgkpDeleteErrorPort @ 0x140887048
 * Callers:
 *     DbgkpDereferenceErrorPort @ 0x1404EE0D8 (DbgkpDereferenceErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 * Callees:
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *P)
{
  ObCloseHandle(P[1], 0);
  ExFreePoolWithTag(P, 0);
}
