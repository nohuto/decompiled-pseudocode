/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1408762A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x14066C928 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14066CB80 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x140772CE0 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, int *a3)
{
  CmpInvalidateSubtree(a1, *a3, a3[1], a2, 0LL);
  if ( (a3[1] & 2) != 0 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, (unsigned int)*a3, a2, 1);
    CmpDiscardKcb(a1);
  }
  return 0LL;
}
