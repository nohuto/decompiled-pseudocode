/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x14087A330
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x1406447A4 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140644960 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1406449E0 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(BugCheckParameter4 + 32) != a2 || (*(_DWORD *)(BugCheckParameter4 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(BugCheckParameter4, 8LL, a3, 1);
  CmpMarkKeyUnbacked(BugCheckParameter4);
  CmpDiscardKcb(BugCheckParameter4, a3);
  return 2LL;
}
