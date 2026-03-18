/*
 * XREFs of CmpRefreshWorkerRoutine @ 0x140879040
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x140691D6C (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpMarkKeyUnbacked @ 0x140691E68 (CmpMarkKeyUnbacked.c)
 *     CmpDiscardKcb @ 0x1406939DC (CmpDiscardKcb.c)
 */

__int64 __fastcall CmpRefreshWorkerRoutine(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)(a1 + 32) != a2 || (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
    return 0LL;
  CmpFlushNotifiesOnKeyBodyList(a1, 8LL, a3, 1);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1, a3);
  return 2LL;
}
