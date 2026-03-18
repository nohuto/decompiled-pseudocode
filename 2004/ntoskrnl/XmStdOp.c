/*
 * XREFs of XmStdOp @ 0x1403633A0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStdOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x400u;
}
