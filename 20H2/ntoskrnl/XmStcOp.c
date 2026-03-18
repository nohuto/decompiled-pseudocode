/*
 * XREFs of XmStcOp @ 0x140365370
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmStcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) |= 1u;
}
