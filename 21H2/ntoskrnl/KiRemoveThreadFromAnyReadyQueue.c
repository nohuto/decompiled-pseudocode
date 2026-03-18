/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x140210C14
 * Callers:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRemoveThreadFromReadyQueue @ 0x140210484 (KiRemoveThreadFromReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402108CC (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromSharedReadyQueue @ 0x140210C6C (KiRemoveThreadFromSharedReadyQueue.c)
 */

int __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 944), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, a4);
}
