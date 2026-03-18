/*
 * XREFs of DestroyThreadsTimers @ 0x1C000BF50
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C000C100 (FreeTimer.c)
 *     ThreadLockExchangeWorker @ 0x1C01EAB78 (ThreadLockExchangeWorker.c)
 */

__int64 __fastcall DestroyThreadsTimers(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[2] = 0LL;
  v4 = (_QWORD *)gtmrListHead;
  v5 = gptiCurrent;
  v7[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v7;
  v7[1] = 0LL;
  while ( v4 != (_QWORD *)gtmrListHead )
  {
    ThreadLockExchangeWorker(v4 - 9, v7);
    if ( *(v4 - 6) == a1 || v4[4] == a1 )
      FreeTimer((struct tagTIMER *)(v4 - 9));
    v4 = (_QWORD *)*v4;
  }
  return ThreadUnlockWorker1(a1, v5, a3);
}
