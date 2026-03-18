/*
 * XREFs of XmHltOp @ 0x1404E0E60
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403CC230 (longjmp.c)
 */

void __fastcall __noreturn XmHltOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 5);
}
