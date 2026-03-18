/*
 * XREFs of XmClcOp @ 0x140363320
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmClcOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~1u;
}
