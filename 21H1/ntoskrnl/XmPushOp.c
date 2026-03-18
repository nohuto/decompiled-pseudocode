/*
 * XREFs of XmPushOp @ 0x140393450
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmPushStack @ 0x140393868 (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
