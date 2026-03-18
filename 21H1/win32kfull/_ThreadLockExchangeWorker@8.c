/*
 * XREFs of _ThreadLockExchangeWorker@8 @ 0x1562CB
 * Callers:
 *     _TimersProc@0 @ 0x73F70 (_TimersProc@0.c)
 *     _DestroyThreadsTimers@4 @ 0x92E40 (_DestroyThreadsTimers@4.c)
 * Callees:
 *     <none>
 */

int __fastcall ThreadLockExchangeWorker(int a1, int a2)
{
  int v2; // esi

  v2 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = a1;
  if ( a1 )
    HMLockObjectWorker(a1);
  if ( v2 )
    return HMUnlockObjectWorker(v2);
  return v2;
}
