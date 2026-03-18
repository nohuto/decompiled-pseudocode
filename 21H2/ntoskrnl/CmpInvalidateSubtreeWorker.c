/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x1406E8680
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x140657990 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpDiscardKcb @ 0x14067EB68 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14067EDC0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14067EE40 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x14071B5A0 (CmpCleanUpSubKeyInfo.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  __int64 v3; // rsi

  v3 = *((_QWORD *)a2 + 2);
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, v3, 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0LL);
    CmpMarkKeyUnbacked(a1, v3);
    CmpDiscardKcb(a1);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1);
  ++a2[1];
  return 0LL;
}
