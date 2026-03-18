/*
 * XREFs of XmOrOp @ 0x140393C40
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140394068 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmOrOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) | *(_DWORD *)(a1 + 108)));
}
