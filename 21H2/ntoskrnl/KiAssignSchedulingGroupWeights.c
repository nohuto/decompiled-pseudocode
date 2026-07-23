/*
 * XREFs of KiAssignSchedulingGroupWeights @ 0x1402050A0
 * Callers:
 *     KeInsertSchedulingGroup @ 0x140202418 (KeInsertSchedulingGroup.c)
 *     KeRemoveSchedulingGroup @ 0x140204D04 (KeRemoveSchedulingGroup.c)
 *     KeSetSchedulingGroupWeights @ 0x140204EE0 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x140204FD0 (KeSetSchedulingGroupCpuRates.c)
 *     KeUpdateGroupSchedulingConstants @ 0x1403CC3FC (KeUpdateGroupSchedulingConstants.c)
 * Callees:
 *     KiUpdateCpuTargetByWeight @ 0x140205158 (KiUpdateCpuTargetByWeight.c)
 */

__int64 __fastcall KiAssignSchedulingGroupWeights(int a1, char a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  __int64 *v9; // rcx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a1 )
  {
    if ( a3 )
      v6 = *(_DWORD *)(a3 + 12);
    else
      v6 = KiGroupSchedulingMinimumRate;
  }
  else if ( a3 )
  {
    if ( !*(_DWORD *)(a3 + 20) )
      return result;
    v6 = *(_DWORD *)(a3 + 16);
  }
  else
  {
    if ( !KiGroupSchedulingTotalWeight )
      return result;
    v6 = KiGroupSchedulingMinimumWeight;
  }
  if ( a3 )
  {
    v8 = (__int64 *)(a3 + 80);
    v7 = *(__int64 **)(a3 + 80);
  }
  else
  {
    v7 = (__int64 *)KiSchedulingGroupList;
    v8 = &KiSchedulingGroupList;
  }
  do
  {
    v9 = v7 - 7;
    result = *((_DWORD *)v7 - 13) & 1;
    if ( (_DWORD)result == a1 )
    {
      v10 = (*(unsigned __int16 *)v9 << 7) % v6;
      result = (*(unsigned __int16 *)v9 << 7) / v6;
      *((_DWORD *)v9 + 2) = result;
      if ( !a1 )
      {
        LOBYTE(v10) = a2;
        result = KiUpdateCpuTargetByWeight(v9, v10);
      }
    }
    v7 = (__int64 *)*v7;
  }
  while ( v7 != v8 );
  return result;
}
