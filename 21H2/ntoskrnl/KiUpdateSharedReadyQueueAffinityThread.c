/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640
 * Callers:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x14029B3DC (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x14029C098 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x14029CC14 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14029D6B8 (KeUpdateThreadSchedulingProperties.c)
 *     KiSetAffinityThread @ 0x14029D724 (KiSetAffinityThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
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
