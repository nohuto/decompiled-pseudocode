/*
 * XREFs of KiPrcbInGroupAffinity @ 0x1402EBA74
 * Callers:
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14025A110 (KiDeferGroupSchedulingPreemption.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402EAD48 (KeSetIdealProcessorThreadEx.c)
 *     KiGroupSchedulingMoveThread @ 0x1402EB678 (KiGroupSchedulingMoveThread.c)
 *     KiSetSystemAffinityThread @ 0x1402EB8C4 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     KiSetAffinityThread @ 0x1402EC3D4 (KiSetAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402EC610 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiPrcbInGroupAffinity(__int64 a1, __int64 a2)
{
  return *(unsigned __int8 *)(a1 + 208) == *(_WORD *)(a2 + 8) && (*(_QWORD *)(a1 + 200) & *(_QWORD *)a2) != 0LL;
}
