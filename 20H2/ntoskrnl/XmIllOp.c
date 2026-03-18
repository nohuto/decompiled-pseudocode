/*
 * XREFs of XmIllOp @ 0x1404E5160
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403CFD00 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
