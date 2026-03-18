/*
 * XREFs of XmSubOp @ 0x140394260
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140394278 (XmSubOperands.c)
 */

__int64 __fastcall XmSubOp(__int64 a1)
{
  return XmSubOperands(a1, 0LL);
}
