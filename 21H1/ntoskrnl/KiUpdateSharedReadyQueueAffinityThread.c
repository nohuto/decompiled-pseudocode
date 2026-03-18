/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x14026D220
 * Callers:
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1403116F4 (KeUpdateThreadSchedulingProperties.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x140335B9C (KiSetSystemAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
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
