/*
 * XREFs of ?DecrementBytesCommitted@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K@Z @ 0x1C0073CCC
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0064208 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0073BAC (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C0087D50 (-ReleaseResource@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 * Callees:
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0073D54 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::DecrementBytesCommitted(VIDMM_SEGMENT *this, struct VIDMM_PARTITION *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // r8d
  unsigned int v8; // edx
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rbx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax

  v3 = *((_QWORD *)this + 27);
  if ( v3 < v3 - a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v13 + 24) = 292LL;
    WdLogEvent5_WdAssertion(v13);
    v3 = *((_QWORD *)this + 27);
  }
  v7 = *((_DWORD *)this + 119);
  v8 = *((_DWORD *)this + 95);
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) = v3 - a3;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v9, v8, v7, a2);
  v12 = *((_QWORD *)SegmentGroupState + 15);
  if ( v12 < v12 - a3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v12 - a3, v12, v11);
    *(_QWORD *)(v14 + 24) = 299LL;
    WdLogEvent5_WdAssertion(v14);
    v12 = *((_QWORD *)SegmentGroupState + 15);
  }
  *((_QWORD *)SegmentGroupState + 15) = v12 - a3;
}
