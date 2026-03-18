/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x14076DE10
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1407017C0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x1407018BC (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140704A60 (CmpCleanUpSubKeyInfo.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR a1, unsigned int *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 1);
  CmpFlushNotifiesOnKeyBodyList(a1, *a2, v2, 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(a1 + 72), 0);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1, v2);
  ++a2[1];
  return 0LL;
}
