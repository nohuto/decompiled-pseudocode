/*
 * XREFs of KiInsertDeferredReadyList @ 0x1402F6970
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14020E464 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140291A94 (KiMoveScbThreadsToNewReadylist.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x14057C888 (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x14057D0C0 (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
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
