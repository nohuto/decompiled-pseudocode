/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x140337BD0
 * Callers:
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402CA37C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x14030BD14 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x140337C30 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(_KTHREAD *a1, int a2, __int64 a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= a1->WaitBlock[2].SpareLong )
    KiSetPriorityBoost(0LL, a1, 15, a1->CycleTime);
  return KiInsertDeferredReadyList(a3, a1);
}
