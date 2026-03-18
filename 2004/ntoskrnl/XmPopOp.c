/*
 * XREFs of XmPopOp @ 0x140394040
 * Callers:
 *     XmEmulateStream @ 0x1403948D8 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140394490 (XmStoreResult.c)
 *     XmPopStack @ 0x14039458C (XmPopStack.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
