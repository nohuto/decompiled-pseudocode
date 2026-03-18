/*
 * XREFs of XmCliOp @ 0x140362980
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall XmCliOp(__int64 a1)
{
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
