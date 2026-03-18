/*
 * XREFs of XmPushOp @ 0x140394020
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmPushStack @ 0x140394438 (XmPushStack.c)
 */

__int64 __fastcall XmPushOp(__int64 a1)
{
  return XmPushStack(a1, *(unsigned int *)(a1 + 108));
}
