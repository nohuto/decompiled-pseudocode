/*
 * XREFs of XmDecOp @ 0x1403960E0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140396738 (XmSubOperands.c)
 */

__int64 __fastcall XmDecOp(__int64 a1)
{
  *(_DWORD *)(a1 + 108) = 1;
  return XmSubOperands(a1, 0LL);
}
