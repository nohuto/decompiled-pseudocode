/*
 * XREFs of KiCheckForEffectivePriorityChange @ 0x140208284
 * Callers:
 *     KiUpdateCpuTargetByWeight @ 0x140207A84 (KiUpdateCpuTargetByWeight.c)
 *     KiUpdateCpuTargetByRate @ 0x140207CCC (KiUpdateCpuTargetByRate.c)
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KiComputeGroupSchedulingRank @ 0x14022A040 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiCheckForEffectivePriorityChange(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  _BYTE *v5; // rsi
  char v6; // cl
  char v7; // al
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  int ThreadEffectiveRankNonZero; // eax
  __int64 v13; // rdx
  unsigned int v14; // edx
  char v15; // al
  char v16; // al

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
    v5 = *(_BYTE **)(a1 + 56);
    if ( (*(_BYTE *)(v2 + 2) & 4) == 0
      || *(char *)(v2 + 195) >= 16
      || !*(_QWORD *)(v2 + 104)
      || (v10 = *(_QWORD *)(v2 + 104)) == 0
      || (v11 = *(unsigned int *)(a1 + 216) + v10) == 0
      || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(v2, v11, 0, 0, 0LL),
          v6 = 1,
          !ThreadEffectiveRankNonZero) )
    {
      v6 = *(_BYTE *)(v2 + 195);
    }
    v7 = v6 & 0x7F | (*(_BYTE *)(v2 + 119) << 7);
    *v5 = v7;
    v8 = *(_QWORD *)(a1 + 35000);
    if ( v8 )
    {
      if ( v2 == *(_QWORD *)(a1 + 24) )
        v13 = (unsigned int)KiVpThreadSystemWorkPriority;
      else
        v13 = v7 & 0x7F;
      KiSetSchedulerAssistPriority(v8, v13, 0LL);
    }
    v9 = *(_QWORD *)(a1 + 56);
    if ( KeHeteroSystem )
    {
      v14 = *(_DWORD *)(v2 + 80);
      v15 = (*(_BYTE *)(v9 + 64) ^ *(_BYTE *)(v2 + 512)) & 7 ^ *(_BYTE *)(v9 + 64);
      v16 = (v15 ^ (8 * *(_BYTE *)(v2 + 516))) & 0x38 ^ v15;
      if ( v14 <= *(_DWORD *)(v2 + 84) )
        v14 = *(_DWORD *)(v2 + 84);
      *(_BYTE *)(v9 + 64) = (v14 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v16 & 0xBF;
    }
  }
}
