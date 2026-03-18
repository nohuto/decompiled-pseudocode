/*
 * XREFs of XmIllOp @ 0x1404E1BD0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     longjmp @ 0x1403CD070 (longjmp.c)
 */

void __fastcall __noreturn XmIllOp(_JBTYPE *a1)
{
  longjmp(a1 + 10, 12);
}
