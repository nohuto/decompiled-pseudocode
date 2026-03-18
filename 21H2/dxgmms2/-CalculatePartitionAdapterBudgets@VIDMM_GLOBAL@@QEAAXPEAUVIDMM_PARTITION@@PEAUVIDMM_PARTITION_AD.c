/*
 * XREFs of ?CalculatePartitionAdapterBudgets@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_PARTITION@@PEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C001C938
 * Callers:
 *     ?EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C001C768 (-EnsureAdapter@VIDMM_PARTITION@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ?GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PARTITION@@@Z @ 0x1C00A7394 (-GetSegmentGroupStateForPartition@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KPEAUVIDMM_PA.c)
 *     ?InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z @ 0x1C00B1A50 (-InitializeSegmentGroupState@VIDMM_GLOBAL@@QEAAXIPEAUVIDMM_SEGMENT_GROUP_STATE@@_K@Z.c)
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

  v3 = (unsigned int)dword_1C006E578;
  v4 = 0;
  v5 = *((_QWORD *)a2 + 6);
  if ( *((_DWORD *)a2 + 8) )
    v3 = (unsigned int)dword_1C006E57C;
  v8 = v5 * v3 / 0x64;
  if ( v8 < (unsigned int)dword_1C006E570 )
  {
    if ( v5 > (unsigned int)dword_1C006E574 )
    {
      v8 = (v5 - (unsigned int)dword_1C006E574) >> 1;
      if ( (unsigned int)dword_1C006E570 > v8 )
        v8 = (unsigned int)dword_1C006E570;
    }
    else
    {
      v8 = (unsigned int)dword_1C006E570;
    }
  }
  *((_QWORD *)a3 + 2) = v8;
  if ( !*((_DWORD *)a2 + 8) )
  {
    v9 = v8 - *((_QWORD *)this + 881);
    *((_QWORD *)a3 + 2) = v9;
    qword_1C006E568 = v9;
    v8 = *((_QWORD *)a3 + 2);
  }
  if ( qword_1C006E430 && v8 >= qword_1C006E430 )
    v8 = qword_1C006E430;
  if ( *((_DWORD *)this + 1754) )
  {
    do
    {
      SegmentGroupStateForPartition = VIDMM_GLOBAL::GetSegmentGroupStateForPartition(this, v4, a2);
      VIDMM_GLOBAL::InitializeSegmentGroupState(this, v11, SegmentGroupStateForPartition, v8);
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 1754) );
  }
}
