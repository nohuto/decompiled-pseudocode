/*
 * XREFs of KiInsertDeferredReadyList @ 0x14029B890
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140229114 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSelectNextThread @ 0x1402785FC (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14029B830 (KiPrepareReadyThreadForRescheduling.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14029D960 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037DB9C (KiMoveScbThreadsToNewReadylist.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 *     KeTransitionProcessorParkState @ 0x1405256EC (KeTransitionProcessorParkState.c)
 *     KiFlushReadyLists @ 0x140525D3C (KiFlushReadyLists.c)
 * Callees:
 *     KiEnterDeferredReadyState @ 0x1402ECFD0 (KiEnterDeferredReadyState.c)
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
