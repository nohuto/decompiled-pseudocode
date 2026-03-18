/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x1402E9B80
 * Callers:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402F7C3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiInsertDeferredReadyList @ 0x14028D3E0 (KiInsertDeferredReadyList.c)
 *     KiSetPriorityBoost @ 0x14031A640 (KiSetPriorityBoost.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi

  v3 = a3;
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= *(_DWORD *)(a1 + 436) )
  {
    LOBYTE(a3) = 15;
    KiSetPriorityBoost(0LL, a1, a3, *(_QWORD *)(a1 + 72));
  }
  return KiInsertDeferredReadyList(v3, a1);
}
