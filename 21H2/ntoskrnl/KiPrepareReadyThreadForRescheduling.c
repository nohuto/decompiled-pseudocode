/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1402EA4E0
 * Callers:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402EC610 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x1402BCC00 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x1402EA540 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(_KTHREAD *a1, int a2, __int64 a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= a1->WaitBlock[2].SpareLong )
    KiSetPriorityBoost(0LL, a1, 15, a1->CycleTime);
  return KiInsertDeferredReadyList(a3, a1);
}
