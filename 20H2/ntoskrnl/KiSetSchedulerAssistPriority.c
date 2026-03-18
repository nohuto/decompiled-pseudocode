/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14051EE74
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
 *     KiCheckForEffectivePriorityChange @ 0x14035E6B0 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F29C (KeUpdateThreadSchedulingProperties.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiSetSchedulerAssistPriority(volatile signed __int32 *a1, int a2, char a3)
{
  __int64 result; // rax
  char v5; // cl

  LODWORD(result) = *a1;
  if ( !a3 )
    LODWORD(result) = (unsigned int)result >> 8;
  result = (unsigned __int8)result;
  v5 = a3 == 0 ? 8 : 0;
  if ( a2 != (unsigned __int8)result )
  {
    if ( a2 <= (unsigned __int8)result )
      return (unsigned int)_InterlockedExchangeAdd(a1, -(((unsigned __int8)result - a2) << v5));
    else
      _InterlockedExchangeAdd(a1, (a2 - (unsigned __int8)result) << v5);
  }
  return result;
}
