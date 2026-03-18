/*
 * XREFs of KiInsertDeferredReadyList @ 0x14032BAB8
 * Callers:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KiSelectNextThread @ 0x1402EB988 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14030BD5C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14032BA58 (KiPrepareReadyThreadForRescheduling.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037BF8C (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14051FFFC (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14052064C (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
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
