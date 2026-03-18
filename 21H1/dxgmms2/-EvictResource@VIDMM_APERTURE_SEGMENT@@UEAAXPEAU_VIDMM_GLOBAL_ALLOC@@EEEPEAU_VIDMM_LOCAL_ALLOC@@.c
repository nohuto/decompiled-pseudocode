/*
 * XREFs of ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C4050
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00011B0 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0061A44 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0061EBC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006322C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C00643EC (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064454 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00644A8 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00868A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0086EF8 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00874B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A2B8 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008AD10 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B1CE4 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  VIDMM_GLOBAL **v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // r8
  struct _VIDMM_LOCAL_ALLOC *v13; // rbp
  VIDMM_GLOBAL *v14; // rcx
  VIDMM_GLOBAL *v15; // r9
  VIDMM_GLOBAL *v16; // rdi
  __int64 v17; // rbx
  struct _MDL *FullMDL; // rax
  __int64 v19; // rdx
  VIDMM_GLOBAL *v20; // rcx
  _DWORD *v21; // rax
  _DWORD *v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v30; // rdi
  _QWORD **v31; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  _QWORD *i; // r9
  __int64 v36; // rcx
  VIDMM_GLOBAL *v37; // rcx
  signed __int32 v38[8]; // [rsp+0h] [rbp-88h] BYREF
  __int128 v39; // [rsp+40h] [rbp-48h]
  __int128 v40; // [rsp+50h] [rbp-38h]
  __int128 v41; // [rsp+60h] [rbp-28h]

  v39 = 0LL;
  v40 = 0LL;
  v9 = this;
  v41 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v10 + 24) = a2;
    this = (VIDMM_GLOBAL **)*((int *)a2 + 85);
    *(_QWORD *)(v10 + 32) = this;
  }
  if ( *((_DWORD *)a2 + 38) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v11[3] = 270LL;
    v11[4] = 9LL;
    v11[5] = 0LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    WdLogEvent5_WdCriticalError(v11);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v9[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  v13 = a6;
  if ( !a6 )
    v13 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 12);
  v14 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( ((unsigned int)v14 & 0x100000) != 0 || (*((_DWORD *)a2 + 20) & 0x400) != 0 )
    a3 = 0;
  v15 = v9[1];
  if ( *((_DWORD *)v15 + 10040) )
  {
    if ( ((unsigned int)v14 & 0x8000000) != 0 )
    {
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v14, a2);
      v15 = v9[1];
    }
    if ( (**((_DWORD **)a2 + 62) & 0x10000) != 0 )
      VIDMM_GLOBAL::NotifyResidency((ADAPTER_RENDER **)v15, a2, 0);
    if ( a3 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, VIDMM_GLOBAL *))*v9 + 8))(
        v9,
        a2,
        v12,
        v15);
    if ( (*((_DWORD *)a2 + 19) & 0x400000) == 0 )
    {
      v16 = *v9;
      v17 = *((_QWORD *)a2 + 17) / 4096LL;
      FullMDL = VidMmGetFullMDL(a2, v13);
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, __int64, struct _MDL *, _DWORD))v16
       + 29))(
        v9,
        a2,
        *((_QWORD *)a2 + 1) >> 12,
        v17,
        v17,
        FullMDL,
        0);
    }
    VIDMM_GLOBAL::WaitForAllPagingEngines(v9[1], a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v19);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v14 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(v9[1], a2, 1);
  v20 = v9[1];
  if ( *((_BYTE *)v20 + 40171) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v20, a2, v13);
  v21 = (_DWORD *)*((_QWORD *)a2 + 62);
  v22 = (_DWORD *)((char *)a2 + 84);
  v23 = *v21 & 0x8000000;
  if ( (*v21 & 0x8000000) == 0 || (*v22 & 2) == 0 )
  {
    if ( (_DWORD)v23 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(v9[1], *((_QWORD *)a2 + 1)) >= 0 )
    {
      *v22 |= 2u;
    }
    else
    {
      if ( (**((_DWORD **)a2 + 62) & 0x4000) != 0 )
        *((_QWORD *)a2 + 45) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(v9[1], a2, v13);
      v22 = (_DWORD *)((char *)a2 + 84);
      if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(v9[1], *((_QWORD *)a2 + 1));
        *v22 &= ~2u;
      }
    }
  }
  v24 = *((_QWORD *)a2 + 18);
  if ( v24 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v23);
      v25[3] = *((_QWORD *)a2 + 18);
      v25[4] = *((int *)a2 + 35);
      v25[5] = *((unsigned int *)a2 + 34);
      v24 = *((_QWORD *)a2 + 18);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*v9 + 3))(
      v9,
      a2,
      v24,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 18) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v23);
  }
  v26 = (_QWORD *)((char *)a2 + 376);
  v27 = *((_QWORD *)a2 + 47);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v27 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376)
    || (v28 = (_QWORD *)*((_QWORD *)a2 + 48), (_QWORD *)*v28 != v26) )
  {
    __fastfail(3u);
  }
  *v28 = v27;
  *(_QWORD *)(v27 + 8) = v28;
  *v26 = 0LL;
  *((_QWORD *)a2 + 48) = 0LL;
  if ( v13 && *((_QWORD *)v13 + 1) && (*v22 & 4) == 0 )
    VidMmRecordAlloc(v9[1], (__int64)a2, (__int64)v13, (__int64)v9, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((_DWORD *)a2 + 92));
  v30 = (_QWORD **)((char *)a2 + 288);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v31 = (_QWORD **)*((_QWORD *)a2 + 36);
  while ( v31 != v30 )
  {
    CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                              (VIDMM_PROCESS *)*(v31 - 6),
                              *(_DWORD *)(*((_QWORD *)v9[1] + 3) + 232LL),
                              *((_DWORD *)v9 + 5));
    VidMmRecordEviction(v33 + 7176, (__int64)CommitmentInformation + 56, *((_QWORD *)a2 + 2), *(_DWORD *)(v33 + 8));
  }
  *(_WORD *)(*((_QWORD *)a2 + 62) + 6LL) = 0;
  *(_QWORD *)(*((_QWORD *)a2 + 62) + 32LL) = 0LL;
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 16) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(v9[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(v9[1], a2);
    *v22 |= 0x10u;
    *((_QWORD *)a2 + 54) = *((_QWORD *)v9[1] + 577);
  }
  v34 = 1584LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v34 + *((_QWORD *)v9[1] + 5027) + 1568) -= *((_QWORD *)a2 + 2);
  for ( i = *v30; i != v30; i = (_QWORD *)*i )
  {
    v34 = *(unsigned int *)(*((_QWORD *)v9[1] + 3) + 232LL);
    v36 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL) + 8 * v34) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v36 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v34);
  v37 = v9[1];
  _InterlockedOr(v38, 0);
  ++*((_QWORD *)v37 + 5);
}
