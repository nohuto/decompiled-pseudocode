/*
 * XREFs of XmStdOp @ 0x1403629E0
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStdOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x400u;
}
