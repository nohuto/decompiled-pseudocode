/*
 * XREFs of KiPrcbInGroupAffinity @ 0x14029CDC4
 * Callers:
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14027B680 (KiDeferGroupSchedulingPreemption.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     KiGroupSchedulingMoveThread @ 0x14029C9C8 (KiGroupSchedulingMoveThread.c)
 *     KiSetSystemAffinityThread @ 0x14029CC14 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14029D960 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1403520C0 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
