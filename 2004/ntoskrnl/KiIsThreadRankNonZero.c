/*
 * XREFs of KiIsThreadRankNonZero @ 0x1402EF550
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402EB1C0 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x1402EB5B4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402ECC90 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402EDB30 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402EE560 (KiDeferGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x1402F1DC8 (KeQueryEffectiveBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiCheckForEffectivePriorityChange @ 0x140348F10 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14034E7C8 (KeUpdateThreadSchedulingProperties.c)
 *     KeQueryEffectivePriorityThread @ 0x140376C40 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x14051FFFC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14099C45C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiIsThreadRankNonZero(__int64 a1, struct _KPRCB *a2)
{
  int ThreadEffectiveRankNonZero; // ebx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  if ( *(char *)(a1 + 195) >= 16 || !*(_QWORD *)(a1 + 104) )
    return 0;
  ThreadEffectiveRankNonZero = 0;
  if ( a2 )
  {
    CurrentIrql = 2;
    CurrentPrcb = a2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
  }
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 )
  {
    v7 = CurrentPrcb->ScbOffset + v6;
    if ( v7 )
    {
      if ( a2 )
      {
        ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(a1, v7, 0, 0, 0LL);
      }
      else
      {
        do
        {
          ThreadEffectiveRankNonZero = (*(unsigned __int8 *)(v7 + 112) >> 3) & 1;
          if ( ThreadEffectiveRankNonZero )
            break;
          v7 = *(_QWORD *)(v7 + 408);
        }
        while ( v7 );
      }
    }
  }
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    __writecr8(CurrentIrql);
  }
  return ThreadEffectiveRankNonZero != 0;
}
