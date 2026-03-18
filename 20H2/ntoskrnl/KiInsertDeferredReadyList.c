/*
 * XREFs of KiInsertDeferredReadyList @ 0x14028D3E0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiSelectNextThread @ 0x1402D9A48 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x1402E9B80 (KiPrepareReadyThreadForRescheduling.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402F7C3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037DCBC (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14052401C (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x14028D730 (KiEnterDeferredReadyState.c)
 */

__int64 __fastcall KiInsertDeferredReadyList(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 result; // rax
  __int64 *v4; // r8

  KiEnterDeferredReadyState(a2);
  result = *v2;
  v4 += 27;
  *v4 = *v2;
  *v2 = (__int64)v4;
  return result;
}
