/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1402EF758
 * Callers:
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402EE560 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x1402F0A5C (KiSetSystemAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x1402F130C (KiGroupSchedulingMoveThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14030BD5C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiComputeThreadAffinity @ 0x14030BE20 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
