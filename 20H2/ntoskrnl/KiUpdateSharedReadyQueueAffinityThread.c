/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1402BE850
 * Callers:
 *     KiSetPriorityThread @ 0x140291A00 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402BE010 (KeSetActualBasePriorityThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402E972C (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x14033D1E8 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F29C (KeUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

char __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // eax

  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v2 = *(_QWORD *)(a1 + 33856);
  v3 = 0;
  if ( v2 )
    LOBYTE(v3) = (v2 & *(_QWORD *)(a2 + 576)) == v2;
  if ( v3 != ((*(_DWORD *)(a2 + 120) >> 13) & 1) )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return v3;
}
