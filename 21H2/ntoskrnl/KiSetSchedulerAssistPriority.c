/*
 * XREFs of KiSetSchedulerAssistPriority @ 0x140520954
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
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KiCheckForEffectivePriorityChange @ 0x140288750 (KiCheckForEffectivePriorityChange.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402AAFD4 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1402EC368 (KeUpdateThreadSchedulingProperties.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 *     KeTransitionProcessorParkState @ 0x1405254AC (KeTransitionProcessorParkState.c)
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
