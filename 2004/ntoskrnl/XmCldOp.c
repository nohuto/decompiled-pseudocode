/*
 * XREFs of XmCldOp @ 0x140363330
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCldOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x400u;
}
