/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1402D8E00
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14021D160 (KiSearchForNewThreadOnProcessor.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1402D9090 (KiDeferGroupSchedulingPreemption.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402F7C3C (KiRescheduleThreadAfterAffinityChange.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x14033D1E8 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KiGroupSchedulingMoveThread @ 0x14035EA6C (KiGroupSchedulingMoveThread.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
