/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x14032BA58
 * Callers:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14030BD5C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x14032B9D0 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x14032BAB8 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(_KTHREAD *a1, int a2, __int64 a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= a1->WaitBlock[2].SpareLong )
    KiSetPriorityBoost(0LL, a1, 15, a1->CycleTime);
  return KiInsertDeferredReadyList(a3, a1);
}
