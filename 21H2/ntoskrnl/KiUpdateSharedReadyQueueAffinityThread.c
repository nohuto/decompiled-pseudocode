/*
 * XREFs of KiUpdateSharedReadyQueueAffinityThread @ 0x140292818
 * Callers:
 *     KiSetAffinityThread @ 0x14020EC24 (KiSetAffinityThread.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035CAD8 (KiApplyForegroundBoostThread.c)
 *     KiSetIdealProcessorThread @ 0x14035D00C (KiSetIdealProcessorThread.c)
 *     KeUpdateThreadSchedulingProperties @ 0x14035F144 (KeUpdateThreadSchedulingProperties.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateSharedReadyQueueAffinityThread(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // rax
  _WORD *v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = 0;
  if ( !a1 )
    a1 = KiProcessorBlock[*(unsigned int *)(a2 + 588)];
  v3 = *(_QWORD *)(a1 + 34880);
  if ( v3 )
  {
    v4 = *(unsigned __int8 *)(a1 + 208);
    v5 = *(_WORD **)(a2 + 576);
    if ( (unsigned __int16)v4 >= *v5 )
      v6 = 0LL;
    else
      v6 = *(_QWORD *)&v5[4 * v4 + 4];
    LOBYTE(v2) = (v3 & v6) == v3;
  }
  result = (*(_DWORD *)(a2 + 120) >> 13) & 1;
  if ( v2 != (_DWORD)result )
    _InterlockedXor((volatile signed __int32 *)(a2 + 120), 0x2000u);
  return result;
}
