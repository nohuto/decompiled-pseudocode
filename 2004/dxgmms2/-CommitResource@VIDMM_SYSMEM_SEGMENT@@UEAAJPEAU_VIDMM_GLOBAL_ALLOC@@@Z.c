/*
 * XREFs of ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064000
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Feature_Servicing_2103c_30527880__private_IsEnabled@@YAHXZ @ 0x1C0016870 (-Feature_Servicing_2103c_30527880__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C0024598 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063AD4 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C006442C (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064454 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0087490 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B1C2C (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // r14
  bool v10; // bp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  VIDMM_GLOBAL *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  VIDMM_GLOBAL *v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  VIDMM_SYSMEM_SEGMENT *v26; // rax
  VIDMM_SYSMEM_SEGMENT **v27; // rdx
  unsigned int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  __int64 v32; // r8
  unsigned int v33; // eax
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v35; // rcx
  __int64 v36; // rdx
  VIDMM_GLOBAL *v37; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+28h] [rbp-20h]

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
    if ( (unsigned int)Feature_Servicing_2103c_30527880__private_IsEnabled() )
      v9 = 1;
    else
      VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    LODWORD(v11) = 0;
  }
  else
  {
    LODWORD(v11) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
    v10 = (int)v11 >= 0;
  }
  if ( !(unsigned int)Feature_Servicing_2103c_30527880__private_IsEnabled() )
    *((_DWORD *)a2 + 21) &= ~2u;
  if ( (int)v11 < 0 )
    goto LABEL_18;
  if ( (**((_DWORD **)a2 + 62) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
    if ( !v13 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v14, v12, v15);
      *(_QWORD *)(v16 + 24) = a2;
      WdLogEvent5_WdAssertion(v16);
      LODWORD(v11) = -1073741801;
LABEL_18:
      if ( v10 )
        VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v12);
      return (unsigned int)v11;
    }
    *((_QWORD *)a2 + 45) = v13;
  }
  v17 = this[1];
  if ( *((_BYTE *)v17 + 40171) )
  {
    v11 = VIDMM_GLOBAL::IoMmuMapAllocation(v17, a2);
    if ( (unsigned int)Feature_Servicing_2103c_30527880__private_IsEnabled() )
    {
      if ( (int)v11 >= 0 )
        goto LABEL_27;
      _InterlockedAdd(&dword_1C00517D4, 1u);
      v19 = WdLogNewEntry5_WdLowResource(v18);
      *(_QWORD *)(v19 + 24) = a2;
      *(_QWORD *)(v19 + 32) = v11;
      WdLogEvent5_WdLowResource(v19);
    }
  }
  if ( (int)v11 < 0 )
    goto LABEL_18;
LABEL_27:
  (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v22 = this[1];
    LODWORD(v39) = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(v20, &EventPagingOpSysmemCommit, v21, *((_QWORD *)v22 + 3), a2, v39);
  }
  v23 = *((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 27) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_QWORD *)a2 + 16) = v23;
  v24 = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 17) = v24;
  v25 = *((_QWORD *)a2 + 25);
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a2 + 18) = v25;
  v26 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376);
  *((_DWORD *)a2 + 30) = 2;
  *((_BYTE *)a2 + 89) = 1;
  v27 = (VIDMM_SYSMEM_SEGMENT **)this[21];
  if ( *v27 != (VIDMM_SYSMEM_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v26 = this + 20;
  *((_QWORD *)a2 + 48) = v27;
  *v27 = v26;
  this[21] = v26;
  v28 = *((_DWORD *)a2 + 18);
  if ( !v28
    || (((_DWORD)this[10] & 0x1000) == 0 ? (v29 = *((_DWORD *)this + 4) + 1) : (v29 = 0),
        (*((_DWORD *)a2 + 18) & 0x1F) == v29
     || (((_DWORD)this[10] & 0x1000) == 0 ? (v30 = *((_DWORD *)this + 4) + 1) : (v30 = 0), ((v28 >> 6) & 0x1F) == v30)) )
  {
    v31 = 0x800000;
  }
  else
  {
    v31 = 0;
  }
  v32 = *((_QWORD *)a2 + 12);
  v33 = v31 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  *((_DWORD *)a2 + 19) = v33;
  if ( v32 && *(_QWORD *)(v32 + 8) )
  {
    VidMmRecordAlloc(this[1], (__int64)a2, v32, (__int64)this, *((_QWORD *)a2 + 2), 0);
    v33 = *((_DWORD *)a2 + 19);
  }
  *(_QWORD *)(1584LL * (v33 & 0x3F) + *((_QWORD *)this[1] + 5027) + 1568) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 232LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v35 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( (unsigned int)Feature_Servicing_2103c_30527880__private_IsEnabled() && v9 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v36);
  v37 = this[1];
  _InterlockedOr(v38, 0);
  ++*((_QWORD *)v37 + 5);
  return 0LL;
}
