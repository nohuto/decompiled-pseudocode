/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1402058F0
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x140205158 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140205430 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x14027B1B0 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  char IsThreadRankNonZero; // al
  char v6; // cl
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  if ( !v2 )
    v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v2 + 104);
  if ( v4 )
  {
    for ( v4 += *(unsigned int *)(a1 + 216); v4; v4 = *(_QWORD *)(v4 + 408) )
    {
      if ( v4 == a2 )
        goto LABEL_9;
    }
  }
  if ( v4 == a2 )
  {
LABEL_9:
    if ( (*(_BYTE *)(v2 + 2) & 4) == 0
      || (IsThreadRankNonZero = KiIsThreadRankNonZero(v2, a1), v6 = 1, !IsThreadRankNonZero) )
    {
      v6 = *(_BYTE *)(v2 + 195);
    }
    **(_BYTE **)(a1 + 56) = v6;
    if ( *(_QWORD *)(a1 + 33976) )
    {
      v7 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( v2 != *(_QWORD *)(a1 + 24) )
        v7 = (unsigned int)v6;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 33976), v7, 0LL);
    }
  }
}
