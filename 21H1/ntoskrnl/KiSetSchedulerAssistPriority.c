/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x14051AE54
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KiCheckForEffectivePriorityChange @ 0x1402DC6D4 (KiCheckForEffectivePriorityChange.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1403116F4 (KeUpdateThreadSchedulingProperties.c)
 *     KiGroupSchedulingGenerationEnd @ 0x140330300 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x140330AC8 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140331DD0 (KiGroupSchedulingQuantumEnd.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140332C70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
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
