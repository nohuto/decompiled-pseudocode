/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x1402141D0
 * Callers:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KiSetSystemAffinityThread @ 0x1402F0A5C (KiSetSystemAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402F0DCC (KiApplyForegroundBoostThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x14030BE20 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14034E7C8 (KeUpdateThreadSchedulingProperties.c)
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
