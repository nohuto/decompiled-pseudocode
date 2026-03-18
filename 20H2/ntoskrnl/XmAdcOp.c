/*
 * XREFs of XmAdcOp @ 0x1404E3EB0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x1403965B0 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
