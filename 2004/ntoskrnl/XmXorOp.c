/*
 * XREFs of XmXorOp @ 0x1403C3E30
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140394068 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108));
}
