/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0070390
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B94 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002434C (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FBAC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FE64 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070774 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C007079C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008754C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B18EC (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // r14
  char v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  VIDMM_GLOBAL *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  VIDMM_GLOBAL *v24; // r9
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  VIDMM_SYSMEM_SEGMENT *v28; // rax
  VIDMM_SYSMEM_SEGMENT **v29; // rdx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  __int64 v34; // r8
  unsigned int v35; // eax
  __int64 v36; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v38; // rcx
  VIDMM_GLOBAL *v39; // rcx
  signed __int32 v40[8]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+28h] [rbp-10h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = *((int *)a2 + 85);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    v7 = WdLogNewEntry5_WdEvent(v6, v5);
    *(_QWORD *)(v7 + 24) = a2;
    WdLogEvent5_WdEvent(v7);
    return 3221226166LL;
  }
  v9 = 0;
  v10 = 0;
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
  {
    v9 = 1;
    LODWORD(v11) = 0;
  }
  else
  {
    LODWORD(v11) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( (int)v11 < 0 )
    {
LABEL_20:
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v12);
      return (unsigned int)v11;
    }
    v10 = 1;
  }
  v13 = (_DWORD *)*((_QWORD *)a2 + 62);
  v12 = *v13 >> 14;
  if ( (*v13 & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
  {
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
    if ( !v14 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15, v12, v16);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdAssertion(v17);
      LODWORD(v11) = -1073741801;
      goto LABEL_18;
    }
    *((_QWORD *)a2 + 45) = v14;
  }
  v18 = this[1];
  if ( *((_BYTE *)v18 + 40171) )
  {
    v19 = VIDMM_GLOBAL::IoMmuMapAllocation(v18, a2);
    v11 = v19;
    if ( v19 >= 0 )
      goto LABEL_21;
    _InterlockedIncrement(&dword_1C00517B4);
    v21 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = v11;
    WdLogEvent5_WdLowResource(v21);
  }
  if ( (int)v11 < 0 )
  {
LABEL_18:
    if ( v10 )
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
    goto LABEL_20;
  }
LABEL_21:
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v24 = this[1];
    LODWORD(v41) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(v22, &EventPagingOpSysmemCommit, v23, *((_QWORD *)v24 + 3), a2, v41);
  }
  v25 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 16) = v25;
  v26 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 17) = v26;
  v27 = *((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 18) = v27;
  v28 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376);
  *((_DWORD *)a2 + 30) = 2;
  *((_BYTE *)a2 + 89) = 1;
  v29 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v29 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v28 = this + 20;
  *((_QWORD *)a2 + 48) = v29;
  *v29 = v28;
  this[21] = v28;
  v30 = *((_DWORD *)a2 + 18);
  if ( !v30
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v31 = *((_DWORD *)this + 4) + 1) : (v31 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v31
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v32 = *((_DWORD *)this + 4) + 1) : (v32 = 0), ((v30 >> 6) & 0x1F) == v32)) )
  {
    v33 = 0x800000;
  }
  else
  {
    v33 = 0;
  }
  v34 = *((_QWORD *)a2 + 12);
  v35 = v33 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  *((_DWORD *)a2 + 19) = v35;
  if ( v34 && *(_QWORD *)(v34 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v34, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v35 = *((_DWORD *)a2 + 19);
  }
  v36 = 1584LL * (v35 & 0x3F);
  *(_QWORD *)(v36 + *((_QWORD *)this[1] + 5027) + 1568) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v36 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 232LL);
    v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v36) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v38 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v9 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v36);
  v39 = this[1];
  _InterlockedOr(v40, 0);
  ++*((_QWORD *)v39 + 5);
  return 0LL;
}
