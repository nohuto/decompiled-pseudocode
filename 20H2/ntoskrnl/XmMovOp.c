/*
 * XREFs of XmMovOp @ 0x1403968E0
 * Callers:
 *     XmEmulateStream @ 0x140396D98 (XmEmulateStream.c)
 * Callees:
 *     XmStoreResult @ 0x140396950 (XmStoreResult.c)
 */

__int64 __fastcall XmMovOp(__int64 a1)
{
  return XmStoreResult(a1, *(unsigned int *)(a1 + 108));
}
