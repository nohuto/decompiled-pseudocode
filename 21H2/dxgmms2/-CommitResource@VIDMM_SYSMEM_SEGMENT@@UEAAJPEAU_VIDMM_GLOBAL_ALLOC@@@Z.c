/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085000
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002E6EC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0085AA0 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085AC8 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D78C0 (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // bl
  char v7; // r14
  __int64 v8; // rbp
  VIDMM_GLOBAL *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  VIDMM_SYSMEM_SEGMENT *v13; // rax
  VIDMM_SYSMEM_SEGMENT **v14; // rdx
  unsigned int v15; // ecx
  int v16; // edx
  int v17; // eax
  bool v18; // zf
  int v19; // ecx
  __int64 v20; // r8
  unsigned int v21; // eax
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v23; // rcx
  VIDMM_GLOBAL *v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  VIDMM_GLOBAL *v31; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v33; // [rsp+20h] [rbp-48h]
  __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+30h] [rbp-38h]
  __int64 v36; // [rsp+38h] [rbp-30h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v26 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v26 + 24) = a2;
    *(_QWORD *)(v26 + 32) = *((int *)a2 + 91);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1u);
  if ( VIDMM_GLOBAL::IsTdrPending(this[1]) )
  {
    WdLogSingleEntry1(4LL, a2);
    return 3221226166LL;
  }
  v6 = 0;
  v7 = 0;
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
  {
    v6 = 1;
  }
  else
  {
    LODWORD(v8) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    if ( (int)v8 < 0 )
    {
LABEL_39:
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return (unsigned int)v8;
    }
    v7 = 1;
  }
  if ( (**((_DWORD **)a2 + 66) & 0x4000) != 0 && !*((_QWORD *)a2 + 48) )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL));
    if ( !v27 )
    {
      WdLogSingleEntry1(1LL, a2);
      v36 = 0LL;
      v35 = 0LL;
      v34 = 0LL;
      v33 = a2;
      DxgkLogInternalTriageEvent(v28, 0x40000LL);
      LODWORD(v8) = -1073741801;
      goto LABEL_37;
    }
    *((_QWORD *)a2 + 48) = v27;
  }
  v9 = this[1];
  if ( *((_BYTE *)v9 + 40179) )
  {
    v29 = VIDMM_GLOBAL::IoMmuMapAllocation(v9, a2);
    v8 = v29;
    if ( v29 < 0 )
    {
      _InterlockedIncrement(&dword_1C006E894);
      WdLogSingleEntry2(6LL, a2, v29);
      v36 = 0LL;
      v35 = 0LL;
      v34 = v8;
      v33 = a2;
      DxgkLogInternalTriageEvent(v30, 262145LL);
LABEL_37:
      if ( v7 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      goto LABEL_39;
    }
  }
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (byte_1C006E941 & 8) != 0 )
  {
    v31 = this[1];
    LODWORD(v34) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(v10, &EventPagingOpSysmemCommit, v11, *((_QWORD *)v31 + 3), a2, v34);
  }
  v12 = *((_QWORD *)a2 + 25);
  *((_DWORD *)a2 + 19) &= ~8u;
  *((_QWORD *)a2 + 15) = v12;
  *((_QWORD *)a2 + 16) = *((_QWORD *)a2 + 24);
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 23);
  v13 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400);
  *((_DWORD *)a2 + 28) = 2;
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 24) = 0LL;
  *((_QWORD *)a2 + 23) = 0LL;
  *((_BYTE *)a2 + 82) = 1;
  v14 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v14 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v13 = this + 20;
  *((_QWORD *)a2 + 51) = v14;
  *v14 = v13;
  this[21] = v13;
  v15 = *((_DWORD *)a2 + 16);
  if ( !v15
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v16 = *((_DWORD *)this + 4) + 1) : (v16 = 0),
        (*((_DWORD *)a2 + 16) & 0x1F) == v16
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v17 = *((_DWORD *)this + 4) + 1) : (v17 = 0),
         v18 = ((v15 >> 6) & 0x1F) == v17,
         v19 = 0,
         v18)) )
  {
    v19 = 0x1000000;
  }
  v20 = *((_QWORD *)a2 + 11);
  v21 = v19 | *((_DWORD *)a2 + 17) & 0xFEFFFFFF;
  *((_DWORD *)a2 + 17) = v21;
  if ( v20 && *(_QWORD *)(v20 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v20, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v21 = *((_DWORD *)a2 + 17);
  }
  *(_QWORD *)(1584LL * (v21 & 0x3F) + *((_QWORD *)this[1] + 5028) + 1568) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v23 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v6 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 19) &= ~2u;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
  v24 = this[1];
  _InterlockedOr(v32, 0);
  ++*((_QWORD *)v24 + 5);
  return 0LL;
}
