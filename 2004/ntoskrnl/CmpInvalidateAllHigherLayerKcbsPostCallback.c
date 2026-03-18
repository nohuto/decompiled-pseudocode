/*
 * XREFs of CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x140872DE0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpInvalidateSubtree @ 0x140760550 (CmpInvalidateSubtree.c)
 */

__int64 __fastcall CmpInvalidateAllHigherLayerKcbsPostCallback(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  CmpInvalidateSubtree(BugCheckParameter4, *(_DWORD *)(a3 + 4), a2, 0LL);
  if ( *(_BYTE *)a3 )
  {
    CmpMarkKeyUnbacked(BugCheckParameter4);
    CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, *(unsigned int *)(a3 + 4), a2, 1);
    CmpDiscardKcb(BugCheckParameter4, a2);
  }
  return 0LL;
}
