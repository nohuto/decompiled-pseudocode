/*
 * XREFs of ThreadLockExchangeWorker @ 0x1C01EB7E8
 * Callers:
 *     DestroyThreadsTimers @ 0x1C00C0A20 (DestroyThreadsTimers.c)
 *     TimersProc @ 0x1C00C6DF0 (TimersProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchangeWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    HMLockObjectWorker(a1);
  if ( v2 )
    return HMUnlockObjectWorker(v2);
  return v2;
}
