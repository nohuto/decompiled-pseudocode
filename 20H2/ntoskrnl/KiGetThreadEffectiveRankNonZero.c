/*
 * XREFs of KiGetThreadEffectiveRankNonZero @ 0x1402DF230
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSelectReadyThread @ 0x14021D6F0 (KiSelectReadyThread.c)
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     KiSelectReadyThreadEx @ 0x1402BA4B0 (KiSelectReadyThreadEx.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D9090 (KiDeferGroupSchedulingPreemption.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402D9380 (KiTransitionSchedulingGroupGeneration.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KiEvaluateGroupSchedulingPreemption @ 0x1402DE3D0 (KiEvaluateGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x14035E8B4 (KiChooseLowestRankedThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037DCBC (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x14051D414 (KiAddThreadToReadyQueue.c)
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
