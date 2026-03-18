/*
 * XREFs of KiIsThreadRankNonZero @ 0x1402DF180
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14021D160 (KiSearchForNewThreadOnProcessor.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D9090 (KiDeferGroupSchedulingPreemption.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1402D9380 (KiTransitionSchedulingGroupGeneration.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1402D9798 (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402DB840 (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KeQueryEffectiveBasePriorityThread @ 0x140332948 (KeQueryEffectiveBasePriorityThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x14035E6B0 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F29C (KeUpdateThreadSchedulingProperties.c)
 *     KeQueryEffectivePriorityThread @ 0x140378BD0 (KeQueryEffectivePriorityThread.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 *     KiConfigureSchedulingInformation @ 0x1409A255C (KiConfigureSchedulingInformation.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
