/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x14075D4F0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 *     CmpCleanUpSubKeyInfo @ 0x140696930 (CmpCleanUpSubKeyInfo.c)
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
