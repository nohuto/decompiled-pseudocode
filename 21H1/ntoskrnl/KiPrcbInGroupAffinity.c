/*
 * XREFs of KiPrcbInGroupAffinity @ 0x140334898
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402CA37C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1403336A0 (KiDeferGroupSchedulingPreemption.c)
 *     KiSetSystemAffinityThread @ 0x140335B9C (KiSetSystemAffinityThread.c)
 *     KiGroupSchedulingMoveThread @ 0x14033644C (KiGroupSchedulingMoveThread.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
