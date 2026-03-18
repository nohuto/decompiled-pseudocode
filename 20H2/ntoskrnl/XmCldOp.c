/*
 * XREFs of XmCldOp @ 0x140365310
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCldOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x400u;
}
