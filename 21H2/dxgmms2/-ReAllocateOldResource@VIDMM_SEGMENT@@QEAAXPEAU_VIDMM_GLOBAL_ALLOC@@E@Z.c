/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00EC1C0
 * Callers:
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00D5604 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C002DCFC (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002EDC8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C00A0E24 (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C00A208C (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00EEC44 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v8; // r8d
  unsigned int v9; // edx
  struct VIDMM_PARTITION *v10; // r9
  VIDMM_GLOBAL *v11; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  int v19; // ebx
  VIDMM_SEGMENT *v20; // rax
  struct _VIDMM_GLOBAL_ALLOC **v21; // rcx
  VIDMM_SEGMENT **v22; // rdx
  VIDMM_SEGMENT **v23; // rdx
  unsigned int v24; // [rsp+20h] [rbp-18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = a2;
  }
  v7 = *((_QWORD *)a2 + 2);
  v8 = *((_DWORD *)this + 119);
  v9 = *((_DWORD *)this + 95);
  v10 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 63);
  v11 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) += v7;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v11, v9, v8, v10);
  *((_QWORD *)SegmentGroupState + 15) += v7;
  *((_QWORD *)this + 28) += *((_QWORD *)a2 + 2);
  if ( *((_DWORD *)this + 92) != -1 && (*((_DWORD *)a2 + 17) & 0x200) == 0 )
  {
    v14 = *((_QWORD *)this + 29);
    v15 = v14 + *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 29) = v15;
    if ( v14 <= qword_1C006E508 && v15 > qword_1C006E508 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40088LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40152LL));
    if ( !v14 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  ++*((_DWORD *)this + 80);
  ++*((_DWORD *)this + 81);
  if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
  {
    v24 = *((_DWORD *)this + 4) + 1;
    McTemplateK0pqx_EtwWriteTransfer(
      v24,
      &TotalBytesResidentInSegment,
      v13,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v24,
      *((_QWORD *)this + 28));
  }
  v16 = *((_DWORD *)this + 20);
  if ( (v16 & 0x1001) != 0 )
  {
    v17 = *((_QWORD *)a2 + 64);
    if ( v17 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v17 + 44)) == 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 63) + 56LL), *((_QWORD *)a2 + 2));
      if ( _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 64) + 40LL)) != 1 )
        goto LABEL_21;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 63) + 56LL), *((_QWORD *)a2 + 2));
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 63) + 64LL), *((_QWORD *)a2 + 2));
LABEL_21:
    *(_QWORD *)(*((_QWORD *)this + 1) + 40208LL) += *((_QWORD *)a2 + 2);
    v16 = *((_DWORD *)this + 20);
  }
  if ( (v16 & 0x20) != 0 )
    v18 = *((_QWORD *)a2 + 3);
  else
    v18 = *((_QWORD *)a2 + 2);
  if ( (v16 & 0x1000) != 0 )
  {
    v19 = 0;
    *((_QWORD *)a2 + 17) = 1LL;
  }
  else
  {
    v19 = VIDMM_LINEAR_POOL::AllocateAt(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *(union _LARGE_INTEGER *)((char *)a2 + 128),
            v18,
            a2,
            (void **)a2 + 17);
  }
  v20 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  v21 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 50);
  if ( v21[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v22 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 51), *v22 != v20)
    || (*v22 = (VIDMM_SEGMENT *)v21,
        v21[1] = (struct _VIDMM_GLOBAL_ALLOC *)v22,
        v23 = (VIDMM_SEGMENT **)*((_QWORD *)this + 21),
        *v23 != (VIDMM_SEGMENT *)((char *)this + 160)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v20 = (char *)this + 160;
  *((_QWORD *)a2 + 51) = v23;
  *v23 = v20;
  *((_QWORD *)this + 21) = v20;
  VIDMM_SEGMENT::MarkResourcesForEviction((VIDMM_LINEAR_POOL **)this, (struct _VIDMM_POOL_BLOCK **)a2, 0LL, 0LL);
  if ( v19 < 0 )
    WdLogSingleEntry5(0LL, 270LL, 6LL, a2, v19, 0LL);
}
