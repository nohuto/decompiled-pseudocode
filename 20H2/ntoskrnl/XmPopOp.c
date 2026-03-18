/*
 * XREFs of XmPopOp @ 0x140396500
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396950 (XmStoreResult.c)
 *     XmPopStack @ 0x140396A4C (XmPopStack.c)
 */

__int64 __fastcall XmPopOp(__int64 a1)
{
  unsigned int v2; // eax

  v2 = XmPopStack(a1);
  return XmStoreResult(a1, v2);
}
