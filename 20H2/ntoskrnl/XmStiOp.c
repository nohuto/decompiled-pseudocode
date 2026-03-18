/*
 * XREFs of XmStiOp @ 0x140365390
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStiOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 0x200u;
}
