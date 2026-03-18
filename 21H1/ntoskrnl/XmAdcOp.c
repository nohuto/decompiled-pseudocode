/*
 * XREFs of XmAdcOp @ 0x1404E0360
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmAddOperands @ 0x140393520 (XmAddOperands.c)
 */

__int64 __fastcall XmAdcOp(__int64 a1)
{
  return XmAddOperands(a1, *(_DWORD *)(a1 + 16) & 1);
}
