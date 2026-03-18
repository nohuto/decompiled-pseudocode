/*
 * XREFs of ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00960F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004E40 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004EEC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0011B94 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006CEDC (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006FBAC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FE64 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070774 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C007079C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085A68 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C008754C (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A328 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B18EC (-IoMmuMapAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::CommitResource(VIDMM_GLOBAL **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  char v9; // r12
  char v10; // bp
  __int64 v11; // rdx
  __int64 v12; // rbx
  _DWORD *v13; // rax
  struct _VIDMM_MDL *v14; // rax
  unsigned int *v15; // rcx
  struct _VIDMM_MDL *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  VIDMM_GLOBAL *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebp
  int v27; // ecx
  BOOL v28; // r15d
  VIDMM_GLOBAL *v29; // rdi
  __int64 v30; // rbx
  struct _MDL *FullMDL; // rax
  VIDMM_SEGMENT *v32; // rcx
  VIDMM_APERTURE_SEGMENT *v33; // rax
  VIDMM_APERTURE_SEGMENT **v34; // rdx
  int v35; // eax
  unsigned int v36; // edx
  __int64 v37; // r8
  __int64 v38; // rdx
  struct _VIDMM_GLOBAL_ALLOC *i; // r9
  __int64 v40; // rcx
  VIDMM_GLOBAL *v41; // rcx
  signed __int32 v42[8]; // [rsp+0h] [rbp-B8h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v4 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v4 + 24) = a2;
    *(_QWORD *)(v4 + 32) = *((int *)a2 + 85);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 1);
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
LABEL_7:
    LODWORD(v12) = 0;
    goto LABEL_20;
  }
  if ( (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    goto LABEL_7;
  LODWORD(v12) = VIDMM_SEGMENT::LockAllocationBackingStore((VIDMM_SEGMENT *)this, a2);
  if ( (int)v12 < 0 )
    goto LABEL_31;
  v10 = 1;
  v11 = *((_QWORD *)this[1] + 3);
  if ( (*(_DWORD *)(v11 + 348) & 4) == 0 && (*((_DWORD *)a2 + 20) & 0x8000) == 0 )
  {
    v13 = (_DWORD *)*((_QWORD *)a2 + 62);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( (*v13 & 8) == 0 )
      KeStackAttachProcess(**(PRKPROCESS **)(*((_QWORD *)a2 + 12) + 8LL), &ApcState);
    v14 = VidMmiProbeAndLockAllocation(a2, 0LL, *((_QWORD *)a2 + 1), IoModifyAccess, (struct VIDMM_SEGMENT *)this, 0LL);
    v15 = (unsigned int *)*((_QWORD *)a2 + 62);
    v16 = v14;
    v11 = *v15;
    if ( (v11 & 8) == 0 )
      KeUnstackDetachProcess(&ApcState);
    if ( v16 )
    {
      *((_QWORD *)a2 + 13) = v16;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v11);
      *(_QWORD *)(v17 + 24) = a2;
      WdLogEvent5_WdWarning(v17);
      LODWORD(v12) = -1073741801;
    }
  }
  if ( (int)v12 < 0 )
    goto LABEL_30;
LABEL_20:
  if ( (**((_DWORD **)a2 + 62) & 0x4000) != 0 && !*((_QWORD *)a2 + 45) )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                    + 112LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
            *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL));
    if ( !v18 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v19, v11, v20);
      *(_QWORD *)(v21 + 24) = a2;
      WdLogEvent5_WdAssertion(v21);
      LODWORD(v12) = -1073741801;
      goto LABEL_29;
    }
    *((_QWORD *)a2 + 45) = v18;
  }
  v22 = this[1];
  if ( *((_BYTE *)v22 + 40171) )
  {
    v23 = VIDMM_GLOBAL::IoMmuMapAllocation(v22, a2);
    v12 = v23;
    if ( v23 >= 0 )
      goto LABEL_32;
    _InterlockedIncrement(&dword_1C00517B4);
    v25 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = v12;
    WdLogEvent5_WdLowResource(v25);
  }
  if ( (int)v12 < 0 )
  {
LABEL_29:
    if ( v10 )
LABEL_30:
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, 0LL);
LABEL_31:
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v11);
    return (unsigned int)v12;
  }
LABEL_32:
  v26 = 0x800000;
  if ( (*((_DWORD *)a2 + 20) & 0x400) == 0 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 7))(this, a2);
    v27 = **((_DWORD **)a2 + 62);
    v28 = (v27 & 4) != 0 && (v27 & 0x800000) == 0;
    v29 = *this;
    v30 = *((_QWORD *)a2 + 26) / 4096LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD, BOOL))v29
     + 28))(
      this,
      a2,
      *((_QWORD *)a2 + 1) >> 12,
      v30,
      v30,
      FullMDL,
      0,
      v28);
  }
  v32 = (VIDMM_SEGMENT *)*((_QWORD *)a2 + 27);
  *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 26);
  *((_QWORD *)a2 + 18) = *((_QWORD *)a2 + 25);
  *((_DWORD *)a2 + 30) = 2;
  *((_QWORD *)a2 + 16) = v32;
  *(_WORD *)(*((_QWORD *)a2 + 62) + 6LL) = VIDMM_SEGMENT::DriverId(v32);
  *(_QWORD *)(*((_QWORD *)a2 + 62) + 32LL) = *((_QWORD *)a2 + 17) + *(_QWORD *)(*((_QWORD *)a2 + 16) + 24LL);
  *((_QWORD *)a2 + 27) = 0LL;
  v33 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376);
  *((_QWORD *)a2 + 26) = 0LL;
  *((_QWORD *)a2 + 25) = 0LL;
  *((_DWORD *)a2 + 21) &= ~8u;
  *((_BYTE *)a2 + 89) = 1;
  v34 = (VIDMM_APERTURE_SEGMENT **)this[21];
  if ( *v34 != (VIDMM_APERTURE_SEGMENT *)(this + 20) )
    __fastfail(3u);
  *(_QWORD *)v33 = this + 20;
  *((_QWORD *)a2 + 48) = v34;
  *v34 = v33;
  this[21] = v33;
  if ( *((_DWORD *)a2 + 18) )
  {
    v35 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    if ( (v36 & 0x1F) != v35 && ((v36 >> 6) & 0x1F) != v35 )
      v26 = 0;
  }
  v37 = *((_QWORD *)a2 + 12);
  *((_DWORD *)a2 + 19) = v26 | *((_DWORD *)a2 + 19) & 0xFF7FFFFF;
  if ( v37 && *(_QWORD *)(v37 + 8) )
    VidMmRecordAlloc(this[1], (__int64)a2, v37, (__int64)this, *((_QWORD *)a2 + 2), 0);
  if ( (**((_DWORD **)a2 + 62) & 0x10000) != 0 )
    VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)this[1], a2, 1u);
  v38 = 1584LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v38 + *((_QWORD *)this[1] + 5027) + 1568) += *((_QWORD *)a2 + 2);
  for ( i = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 36);
        i != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 288);
        i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
  {
    v38 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 232LL);
    v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i - 6) + 16LL) + 8 * v38) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v40 + 240) += *((_QWORD *)a2 + 2);
  }
  if ( v9 )
  {
    VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
    *((_DWORD *)a2 + 21) &= ~2u;
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v38);
  v41 = this[1];
  _InterlockedOr(v42, 0);
  ++*((_QWORD *)v41 + 5);
  return 0LL;
}
