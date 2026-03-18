/*
 * XREFs of ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50
 * Callers:
 *     ?ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C0087B5C (-ReferenceAllocationForPreparation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0093DF0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0002224 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A20F8 (-ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReclaimResource(
        VIDMM_LINEAR_POOL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  VIDMM_SEGMENT *v6; // rcx
  __int64 v7; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v8; // r8d
  unsigned int v9; // edx
  struct VIDMM_PARTITION *v10; // r9
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  char **v16; // rcx
  char *v17; // rsi
  char **v18; // rcx

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( ((_DWORD)this[10] & 0x1000) == 0 )
    VIDMM_LINEAR_POOL::ReclaimBlock(this[19], *((void **)a2 + 17));
  v6 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 15);
  *((_DWORD *)a2 + 28) = 2;
  *(_WORD *)(*((_QWORD *)a2 + 66) + 6LL) = VIDMM_SEGMENT::DriverId(v6);
  *(_QWORD *)(*((_QWORD *)a2 + 66) + 32LL) = *((_QWORD *)a2 + 16) + *(_QWORD *)(*((_QWORD *)a2 + 15) + 24LL);
  v7 = *((_QWORD *)a2 + 2);
  v8 = *((_DWORD *)this + 119);
  v9 = *((_DWORD *)this + 95);
  v10 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 63);
  v11 = this[1];
  this[27] = (VIDMM_LINEAR_POOL *)((char *)this[27] + v7);
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v11, v9, v8, v10);
  *((_QWORD *)SegmentGroupState + 15) += v7;
  ++*((_DWORD *)this + 80);
  if ( ((_DWORD)this[10] & 0x1001) != 0 )
  {
    v13 = *((_QWORD *)a2 + 64);
    if ( !v13 || _InterlockedIncrement((volatile signed __int32 *)(v13 + 44)) == 1 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 63) + 56LL), *((_QWORD *)a2 + 2));
  }
  v14 = (char *)a2 + 400;
  v15 = *((_QWORD *)a2 + 50);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v15 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v16 = (char **)*((_QWORD *)a2 + 51), *v16 != v14)
    || (*v16 = (char *)v15,
        v17 = (char *)(this + 20),
        *(_QWORD *)(v15 + 8) = v16,
        v18 = (char **)*((_QWORD *)v17 + 1),
        *v18 != v17) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v14 = v17;
  *((_QWORD *)a2 + 51) = v18;
  *v18 = v14;
  *((_QWORD *)v17 + 1) = v14;
}
