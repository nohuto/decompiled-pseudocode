/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140772180
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405CD088 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x14065EECC (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, __int64 a2)
{
  __int64 v3; // rsi

  v3 = *(_QWORD *)(a2 + 16);
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *(_DWORD *)a2, v3, 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
    CmpMarkKeyUnbacked(a1, v3);
    CmpDiscardKcb(a1);
  }
  if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1);
  ++*(_DWORD *)(a2 + 4);
  return 0LL;
}
