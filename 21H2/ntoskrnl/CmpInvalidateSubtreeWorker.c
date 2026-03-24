/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x140771FC0
 * Callers:
 *     <none>
 * Callees:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1405CD088 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x14066A0AC (CmpCleanUpSubKeyInfo.c)
 *     CmpDiscardKcb @ 0x14066C928 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x14066CB80 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14066CC00 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
  {
    CmpFlushNotifiesOnKeyBodyList(a1, *a2, *((_QWORD *)a2 + 2), 1);
    CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
    CmpMarkKeyUnbacked(a1);
    CmpDiscardKcb(a1);
  }
  if ( (a2[2] & 1) != 0 )
    CmpRemoveLayerLinkForDiscardedKcb(a1);
  ++a2[1];
  return 0LL;
}
