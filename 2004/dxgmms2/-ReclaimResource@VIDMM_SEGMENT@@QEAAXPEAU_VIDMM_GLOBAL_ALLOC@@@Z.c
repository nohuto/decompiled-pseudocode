/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006328C
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00704F8 (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B4000 (-RecommitTrimmedList@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001194 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C005F5EC (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(VIDMM_LINEAR_POOL **this, struct _VIDMM_GLOBAL_ALLOC *a2, __int64 a3)
{
  VIDMM_SEGMENT *v5; // rcx
  __int64 v6; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v7; // r8d
  unsigned int v8; // edx
  struct VIDMM_PARTITION *v9; // r9
  VIDMM_GLOBAL *v10; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v12; // rcx
  char *v13; // rax
  __int64 v14; // rdx
  char **v15; // rcx
  char *v16; // rsi
  char **v17; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[19], *((_QWORD **)a2 + 18), a3);
  v5 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 16);
  *((_DWORD *)a2 + 30) = 2;
  *(_WORD *)(*((_QWORD *)a2 + 62) + 6LL) = VIDMM_SEGMENT::DriverId(v5);
  *(_QWORD *)(*((_QWORD *)a2 + 62) + 32LL) = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((_DWORD *)this + 119);
  v8 = *((_DWORD *)this + 95);
  v9 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 60);
  v10 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v6);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v10, v8, v7, v9);
  *((_QWORD *)SegmentGroupState + 15) += v6;
  ++*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v12 = *((_QWORD *)a2 + 61);
    if ( !v12 || _InterlockedIncrement((volatile signed __int32 *)(v12 + 44)) == 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 60) + 56LL), *((_QWORD *)a2 + 2));
  }
  v13 = (char *)a2 + 376;
  v14 = *((_QWORD *)a2 + 47);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v14 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376)
    || (v15 = (char **)*((_QWORD *)a2 + 48), *v15 != v13)
    || (*v15 = (char *)v14,
        v16 = (char *)(this + 20),
        *(_QWORD *)(v14 + 8) = v15,
        v17 = (char **)*((_QWORD *)v16 + 1),
        *v17 != v16) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v13 = v16;
  *((_QWORD *)a2 + 48) = v17;
  *v17 = v13;
  *((_QWORD *)v16 + 1) = v13;
}
