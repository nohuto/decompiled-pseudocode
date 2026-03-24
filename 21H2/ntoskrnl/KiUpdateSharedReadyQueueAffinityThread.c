/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x140230DF0
 * Callers:
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402EAD48 (KeSetIdealProcessorThreadEx.c)
 *     KiSetSystemAffinityThread @ 0x1402EB8C4 (KiSetSystemAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     KeUpdateThreadSchedulingProperties @ 0x1402EC368 (KeUpdateThreadSchedulingProperties.c)
 *     KiSetAffinityThread @ 0x1402EC3D4 (KiSetAffinityThread.c)
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
