/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x14028F83C
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x14021050C (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(__int64 a1, int a2, __int64 a3)
{
  char v5; // r8
  unsigned int v6; // ecx

  v5 = 15;
  v6 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5);
  if ( (KiVelocityFlags & 0x8000) == 0 || a2 < 8 )
  {
    if ( a2 <= 0 )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_8;
  }
  if ( a2 > 9 )
  {
LABEL_8:
    if ( a2 >= 15 )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_9;
  }
  if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - KiNormalPriorityBoostReadyTimeTicks) < *(_DWORD *)(a1 + 436) )
  {
LABEL_9:
    if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) < *(_DWORD *)(a1 + 436) )
      return KiInsertDeferredReadyList(a3, a1);
    goto LABEL_6;
  }
  v5 = 11;
  v6 = *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 5) * KiNormalPriorityBoostingPeriodMultiplier;
LABEL_6:
  KiSetPriorityBoost(0LL, a1, v5, *(_QWORD *)(a1 + 72), v6);
  return KiInsertDeferredReadyList(a3, a1);
}
