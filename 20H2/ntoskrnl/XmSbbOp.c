/*
 * XREFs of XmSbbOp @ 0x1404E3F70
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSubOperands @ 0x140396738 (XmSubOperands.c)
 */

__int64 __fastcall XmSbbOp(_DWORD *a1)
{
  return XmSubOperands(a1, a1[4] & 1);
}
