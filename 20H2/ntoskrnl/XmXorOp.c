/*
 * XREFs of XmXorOp @ 0x1403C65A0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140396528 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmXorOp(__int64 a1)
{
  return XmSetLogicalResult(a1, *(_DWORD *)(a1 + 104) ^ *(_DWORD *)(a1 + 108));
}
