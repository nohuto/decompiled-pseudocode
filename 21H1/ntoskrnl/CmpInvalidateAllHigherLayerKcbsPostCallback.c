/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140871AF0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpInvalidateSubtree @ 0x14075E1E0 (CmpInvalidateSubtree.c)
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
