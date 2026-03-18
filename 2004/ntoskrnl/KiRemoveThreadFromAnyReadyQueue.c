/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14032BAE8
 * Callers:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14030BD5C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromScbQueue @ 0x1402F1420 (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14032BC78 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14032BCD8 (KiRemoveThreadFromReadyQueue.c)
 */

int __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 944), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
