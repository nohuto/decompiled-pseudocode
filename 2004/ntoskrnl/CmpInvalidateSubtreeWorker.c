/*
 * XREFs of CmpInvalidateSubtreeWorker @ 0x14075F7A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpCleanUpSubKeyInfo @ 0x14069CE70 (CmpCleanUpSubKeyInfo.c)
 */

__int64 __fastcall CmpInvalidateSubtreeWorker(ULONG_PTR BugCheckParameter4, unsigned int *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 1);
  CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, *a2, v2, 1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(BugCheckParameter4 + 72), 0);
  CmpMarkKeyUnbacked(BugCheckParameter4);
  CmpDiscardKcb(BugCheckParameter4, v2);
  ++a2[1];
  return 0LL;
}
