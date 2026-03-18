/*
 * XREFs of XmSbbOp @ 0x1404E09E0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140394278 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
