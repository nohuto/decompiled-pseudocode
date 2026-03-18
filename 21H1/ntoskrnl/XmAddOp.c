/*
 * XREFs of XmAddOp @ 0x1403BF7A0
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x140393520 (XmAddOperands.c)
 */

__int64 __fastcall XmAddOp(__int64 a1)
{
  return XmAddOperands(a1, 0);
}
