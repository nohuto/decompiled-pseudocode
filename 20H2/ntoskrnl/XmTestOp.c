/*
 * XREFs of XmTestOp @ 0x140396240
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmSetLogicalResult @ 0x140396528 (XmSetLogicalResult.c)
 */

__int64 __fastcall XmTestOp(__int64 a1)
{
  return XmSetLogicalResult(a1, (unsigned int)(*(_DWORD *)(a1 + 104) & *(_DWORD *)(a1 + 108)));
}
