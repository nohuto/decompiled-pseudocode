/*
 * XREFs of XmStiOp @ 0x1403633B0
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStiOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x200u;
}
