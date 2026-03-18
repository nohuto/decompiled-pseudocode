/*
 * XREFs of XmClcOp @ 0x140365300
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmClcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~1u;
}
