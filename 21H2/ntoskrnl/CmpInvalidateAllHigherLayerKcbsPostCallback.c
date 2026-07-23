/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140876400
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x140772EA0 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1, a2);
    CmpFlushNotifiesOnKeyBodyList(a1, *a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
