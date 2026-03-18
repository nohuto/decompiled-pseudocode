/*
 * XREFs of XmDecOp @ 0x140393050
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x1403936A8 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
