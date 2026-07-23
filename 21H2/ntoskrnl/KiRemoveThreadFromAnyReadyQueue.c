/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x14029B8C0
 * Callers:
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14029D960 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x14029BA58 (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x14029BAB8 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x14029CADC (KiRemoveThreadFromScbQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 944));
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
