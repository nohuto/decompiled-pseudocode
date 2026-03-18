/*
 * XREFs of XmAddOp @ 0x1403C0660
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403940F0 (XmAddOperands.c)
 */

__int64 __fastcall XmAddOp(__int64 a1)
{
  return XmAddOperands(a1, 0);
}
