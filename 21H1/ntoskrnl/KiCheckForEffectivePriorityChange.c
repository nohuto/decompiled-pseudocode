/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x1402DC6D4
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x1402DBF3C (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x1402DC214 (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x140332BC0 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
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
