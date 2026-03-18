/*
 * XREFs of XmPushOp @ 0x1403964E0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmPushStack @ 0x1403968F8 (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
