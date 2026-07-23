/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x14087D9A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDiscardKcb @ 0x140661748 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1406619A0 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140661A20 (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8, a3, 1);
  CmpMarkKeyUnbacked(a1, a3);
  CmpDiscardKcb(a1);
  return 2LL;
}
