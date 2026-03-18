/*
 * XREFs of ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0015934
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C0015798 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C0088260 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C0094314 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::CalculatePartitionAdapterBudgets(
        VIDMM_GLOBAL *this,
        struct VIDMM_PARTITION *a2,
        struct VIDMM_PARTITION_ADAPTER_INFO *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  unsigned __int64 v5; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupStateForPartition; // rax
  unsigned int v11; // edx

  v3 = (unsigned int)dword_1C0051508;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( *((_DWORD *)a2 + 8) )
    v3 = (unsigned int)dword_1C005150C;
  v8 = v5 * v3 / 0x64;
  if ( v8 < (unsigned int)dword_1C0051500 )
  {
    if ( v5 > (unsigned int)dword_1C0051504 )
    {
      v8 = (v5 - (unsigned int)dword_1C0051504) >> 1;
      if ( (unsigned int)dword_1C0051500 > v8 )
        v8 = (unsigned int)dword_1C0051500;
    }
    else
    {
      v8 = (unsigned int)dword_1C0051500;
    }
  }
  *((_QWORD *)a3 + 2) = v8;
  if ( !*((_DWORD *)a2 + 8) )
  {
    v9 = v8 - *((_QWORD *)this + 880);
    *((_QWORD *)a3 + 2) = v9;
    qword_1C00514F8 = v9;
    v8 = *((_QWORD *)a3 + 2);
  }
  if ( qword_1C00513C0 && v8 >= qword_1C00513C0 )
    v8 = qword_1C00513C0;
  if ( *((_DWORD *)this + 1750) )
  {
    do
    {
      SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(this, v4, a2);
      VIDMM_GLOBAL::InitializeSegmentGroupState(this, v11, SegmentGroupStateForPartition, v8);
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 1750) );
  }
}
