/*
 * XREFs of KiIsThreadRankNonZero @ 0x14024D450
 * Callers:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x140230E50 (KiUpdateThreadPriority.c)
 *     KiRemoveBoostThread @ 0x14024AED0 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x140256CB8 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x14025708C (KiSelectNextThread.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402587E0 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402599DC (KiGroupSchedulingGenerationEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140259CF0 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14025A110 (KiDeferGroupSchedulingPreemption.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x14027197C (KeQueryEffectiveBasePriorityThread.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KiCheckForEffectivePriorityChange @ 0x140288750 (KiCheckForEffectivePriorityChange.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1402EC368 (KeUpdateThreadSchedulingProperties.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 *     KeQueryEffectivePriorityThread @ 0x140376970 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x1405254AC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x14099FD80 (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14024D500 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
