/*
 * XREFs of XmHltOp @ 0x1404E49B0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403CFD00 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
