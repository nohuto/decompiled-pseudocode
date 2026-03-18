/*
 * XREFs of ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C9A4C
 * Callers:
 *     ?CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00AF3F8 (-CancelAllReclaimedAllocationsInList@VIDMM_GLOBAL@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1C00237C0 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C0024C74 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C006492C (-MarkResourcesForEviction@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@PEAUVIDMM_PARTITION@@@Z @ 0x1C0064AD4 (-GetSegmentGroupState@VIDMM_GLOBAL@@QEAAPEAUVIDMM_SEGMENT_GROUP_STATE@@KW4_D3DKMT_MEMORY_SEGMENT.c)
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C00CF7C4 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

void __fastcall VIDMM_SEGMENT::ReAllocateOldResource(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  enum _D3DKMT_MEMORY_SEGMENT_GROUP v6; // r8d
  unsigned int v7; // edx
  struct VIDMM_PARTITION *v8; // r9
  VIDMM_GLOBAL *v9; // rcx
  struct VIDMM_SEGMENT_GROUP_STATE *SegmentGroupState; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  int v17; // ebx
  VIDMM_SEGMENT *v18; // rax
  struct _VIDMM_GLOBAL_ALLOC **v19; // rcx
  VIDMM_SEGMENT **v20; // rdx
  VIDMM_SEGMENT **v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // [rsp+20h] [rbp-18h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = 0LL;
    *(_QWORD *)(v4 + 32) = a2;
  }
  v5 = *((_QWORD *)a2 + 2);
  v6 = *((_DWORD *)this + 119);
  v7 = *((_DWORD *)this + 95);
  v8 = (struct VIDMM_PARTITION *)**((_QWORD **)a2 + 60);
  v9 = (VIDMM_GLOBAL *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 27) += v5;
  SegmentGroupState = VIDMM_GLOBAL::GetSegmentGroupState(v9, v7, v6, v8);
  *((_QWORD *)SegmentGroupState + 15) += v5;
  *((_QWORD *)this + 28) += *((_QWORD *)a2 + 2);
  if ( *((_DWORD *)this + 92) != -1 && (*((_DWORD *)a2 + 19) & 0x200) == 0 )
  {
    v12 = *((_QWORD *)this + 29);
    v13 = v12 + *((_QWORD *)a2 + 2);
    *((_QWORD *)this + 29) = v13;
    if ( v12 <= qword_1C0051498 && v13 > qword_1C0051498 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40080LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40144LL));
    if ( !v12 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  ++*((_DWORD *)this + 80);
  ++*((_DWORD *)this + 81);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v25 = *((_DWORD *)this + 4) + 1;
    McTemplateK0pqx_EtwWriteTransfer(
      v25,
      &TotalBytesResidentInSegment,
      v11,
      *(_QWORD *)(*((_QWORD *)this + 1) + 24LL),
      v25,
      *((_QWORD *)this + 28));
  }
  v14 = *((_DWORD *)this + 20);
  if ( (v14 & 0x1001) != 0 )
  {
    v15 = *((_QWORD *)a2 + 61);
    if ( v15 )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v15 + 44)) == 1 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 60) + 56LL), *((_QWORD *)a2 + 2));
      if ( _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a2 + 61) + 40LL)) != 1 )
        goto LABEL_21;
    }
    else
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 60) + 56LL), *((_QWORD *)a2 + 2));
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(**((_QWORD **)a2 + 60) + 64LL), *((_QWORD *)a2 + 2));
LABEL_21:
    *(_QWORD *)(*((_QWORD *)this + 1) + 40200LL) += *((_QWORD *)a2 + 2);
    v14 = *((_DWORD *)this + 20);
  }
  if ( (v14 & 0x20) != 0 )
    v16 = *((_QWORD *)a2 + 3);
  else
    v16 = *((_QWORD *)a2 + 2);
  if ( (v14 & 0x1000) != 0 )
  {
    v17 = 0;
    *((_QWORD *)a2 + 18) = 1LL;
  }
  else
  {
    v17 = VIDMM_LINEAR_POOL::AllocateAt(
            *((VIDMM_LINEAR_POOL **)this + 19),
            *(union _LARGE_INTEGER *)((char *)a2 + 136),
            v16,
            a2,
            (void **)a2 + 18);
  }
  v18 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376);
  v19 = (struct _VIDMM_GLOBAL_ALLOC **)*((_QWORD *)a2 + 47);
  if ( v19[1] != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376)
    || (v20 = (VIDMM_SEGMENT **)*((_QWORD *)a2 + 48), *v20 != v18)
    || (*v20 = (VIDMM_SEGMENT *)v19,
        v19[1] = (struct _VIDMM_GLOBAL_ALLOC *)v20,
        v21 = (VIDMM_SEGMENT **)*((_QWORD *)this + 21),
        *v21 != (VIDMM_SEGMENT *)((char *)this + 160)) )
  {
    __fastfail(3u);
  }
  *(_QWORD *)v18 = (char *)this + 160;
  *((_QWORD *)a2 + 48) = v21;
  *v21 = v18;
  *((_QWORD *)this + 21) = v18;
  VIDMM_SEGMENT::MarkResourcesForEviction((VIDMM_LINEAR_POOL **)this, (struct _VIDMM_POOL_BLOCK **)a2, 0LL, 0LL);
  if ( v17 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22);
    v24[7] = 0LL;
    v24[6] = v17;
    v24[3] = 270LL;
    v24[4] = 6LL;
    v24[5] = a2;
    WdLogEvent5_WdCriticalError(v24);
  }
}
