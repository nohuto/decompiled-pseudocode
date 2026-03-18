/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x140334740
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140332C70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1403338E0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x140334C40 (KiChooseLowestRankedThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037B20C (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x1405193F4 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadEffectiveRankNonZero(__int64 a1, __int64 a2, __int64 a3, char a4, bool *a5)
{
  bool v5; // r11
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // r9

  v5 = a5 && *(_QWORD *)(a2 + 120);
  result = 0LL;
  v7 = 0;
  if ( *(char *)(a1 + 195) < 16
    && (*(_DWORD *)(a1 + 120) & 0x200) == 0
    && (!a4 || !*(_DWORD *)(a1 + 484) && *(_BYTE *)(a1 + 390) != 1) )
  {
    v8 = a2;
    do
    {
      if ( (*(_BYTE *)(v8 + 112) & 2) != 0 )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_12;
      }
      v8 = *(_QWORD *)(v8 + 408);
    }
    while ( v8 );
    do
    {
      result = (unsigned int)(*(_DWORD *)(a2 + 116) + result);
      if ( v5 )
      {
        v7 += **(_DWORD **)(a2 + 120);
      }
      else if ( (_DWORD)result )
      {
        break;
      }
      a2 = *(_QWORD *)(a2 + 408);
    }
    while ( a2 );
  }
LABEL_12:
  if ( a5 )
    *a5 = v7 != 0;
  return result;
}
