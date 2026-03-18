/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140878930
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpInvalidateSubtree @ 0x14076EB60 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  CmpInvalidateSubtree(a1, *(_DWORD *)(a3 + 4), a2, 0LL);
  if ( *(_BYTE *)a3 )
  {
    CmpMarkKeyUnbacked(a1);
    CmpFlushNotifiesOnKeyBodyList(a1, *(unsigned int *)(a3 + 4), a2, 1);
    CmpDiscardKcb(a1, a2);
  }
  return 0LL;
}
