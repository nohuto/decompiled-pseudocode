/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063C30
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C00011B0 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0001208 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00058A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000594C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C0024598 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C0061A44 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0061EBC (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006322C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0064454 (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00644A8 (-MakeVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00661CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C0086ED8 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C0087490 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008ACF0 (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00B1CC4 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3,
        char a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  VIDMM_GLOBAL **v9; // rdi
  struct _VIDMM_LOCAL_ALLOC *v10; // rsi
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rdx
  VIDMM_GLOBAL *v13; // rcx
  __int64 v14; // rax
  bool v15; // bp
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v22; // rsi
  _QWORD **v23; // r10
  VIDMM_GLOBAL *v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  _QWORD *i; // r9
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  VIDMM_GLOBAL *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  VIDMM_GLOBAL *v36; // r9
  signed __int32 v37[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int128 v39; // [rsp+30h] [rbp-48h]
  _OWORD v40[2]; // [rsp+40h] [rbp-38h] BYREF

  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  v9 = this;
  if ( g_IsInternalReleaseOrDbg )
  {
    v33 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v33 + 24) = a2;
    this = (VIDMM_GLOBAL **)*((int *)a2 + 85);
    *(_QWORD *)(v33 + 32) = this;
  }
  if ( *((_DWORD *)a2 + 38) && (*((_DWORD *)a2 + 19) & 0x20000000) == 0 && g_IsInternalRelease )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v34[3] = 270LL;
    v34[4] = 9LL;
    v34[5] = 0LL;
    v34[6] = 0LL;
    v34[7] = 0LL;
    WdLogEvent5_WdCriticalError(v34);
  }
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(v9[1], a2, 0);
  DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)a2 + 39));
  v10 = a6;
  if ( !a6 )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 12);
  v11 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 19);
  if ( *((_DWORD *)v9[1] + 10040) )
  {
    if ( ((unsigned int)v11 & 0x8000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v11, a2);
    if ( a3 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*v9 + 8))(v9, a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(v9[1], a2);
    if ( a4 )
    {
      DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v12);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 19) = (unsigned int)v11 | 0x100000;
  }
  VIDMM_GLOBAL::MakeVirtualAddressRangeNotResident(v9[1], a2, 1u);
  v13 = v9[1];
  if ( *((_BYTE *)v13 + 40171) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v13, a2, v10);
  v14 = *((_QWORD *)a2 + 62);
  v15 = *(_WORD *)(v14 + 4) == 2;
  v16 = *(_DWORD *)v14 & 0x8000000;
  if ( (*(_DWORD *)v14 & 0x8000000) == 0 || (*((_DWORD *)a2 + 21) & 2) == 0 )
  {
    if ( (_DWORD)v16 && (int)VIDMM_GLOBAL::ChargePinnedBackingStore(v9[1], *((_QWORD *)a2 + 1)) >= 0 )
      *((_DWORD *)a2 + 21) |= 2u;
    else
      v15 = 1;
  }
  if ( v15 )
  {
    if ( (**((_DWORD **)a2 + 62) & 0x4000) != 0 )
      *((_QWORD *)a2 + 45) = 0LL;
    VIDMM_SEGMENT::UnlockAllocationBackingStore(v9[1], a2, v10);
    if ( (*((_DWORD *)a2 + 21) & 2) != 0 )
    {
      VIDMM_GLOBAL::ReturnPinnedBackingStore(v9[1], *((_QWORD *)a2 + 1));
      *((_DWORD *)a2 + 21) &= ~2u;
    }
  }
  v17 = *((_QWORD *)a2 + 18);
  if ( v17 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v35[3] = *((_QWORD *)a2 + 18);
      v35[4] = *((int *)a2 + 35);
      v35[5] = *((unsigned int *)a2 + 34);
      v17 = *((_QWORD *)a2 + 18);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*v9 + 3))(
      v9,
      a2,
      v17,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 18) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v16);
  }
  v18 = (_QWORD *)((char *)a2 + 376);
  v19 = *((_QWORD *)a2 + 47);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v19 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 376)
    || (v20 = (_QWORD *)*((_QWORD *)a2 + 48), (_QWORD *)*v20 != v18) )
  {
    __fastfail(3u);
  }
  *v20 = v19;
  *(_QWORD *)(v19 + 8) = v20;
  *v18 = 0LL;
  *((_QWORD *)a2 + 48) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(v9[1], (__int64)a2, (__int64)v10, (__int64)v9, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 92));
  v22 = (_QWORD **)((char *)a2 + 288);
  *(_QWORD *)(*((_QWORD *)a2 + 16) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v23 = (_QWORD **)*((_QWORD *)a2 + 36);
  while ( v23 != v22 )
  {
    v24 = v9[1];
    v25 = *(_QWORD *)((*(v23 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v24 + 3) + 232LL));
    if ( v25 )
      v26 = *(_QWORD *)(v25 + 16) + 184LL * *((unsigned int *)v9 + 5);
    else
      v26 = 0LL;
    VidMmRecordEviction((__int64)v24 + 7176, v26 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v24 + 2));
  }
  *((_DWORD *)a2 + 19) &= ~0x800000u;
  *((_QWORD *)a2 + 16) = 0LL;
  *((_DWORD *)a2 + 30) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(v9[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(v9[1], a2);
    *((_DWORD *)a2 + 21) |= 0x10u;
    *((_QWORD *)a2 + 54) = *((_QWORD *)v9[1] + 577);
  }
  v27 = 1584LL * (*((_DWORD *)a2 + 19) & 0x3F);
  *(_QWORD *)(v27 + *((_QWORD *)v9[1] + 5027) + 1568) -= *((_QWORD *)a2 + 2);
  for ( i = *v22; i != v22; i = (_QWORD *)*i )
  {
    v27 = *(unsigned int *)(*((_QWORD *)v9[1] + 3) + 232LL);
    v29 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(i - 6) + 16LL) + 8 * v27) + 48LL)
        + 296LL * (*((_DWORD *)a2 + 19) & 0x3F);
    *(_QWORD *)(v29 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)a2 + 39), v27);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    v36 = v9[1];
    LODWORD(v38) = *((_DWORD *)v9 + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(
      v30,
      &EventPagingOpSysmemUncommit,
      v31,
      *((_QWORD *)v36 + 3),
      a2,
      v38,
      v39,
      *(_QWORD *)&v40[0],
      *(_OWORD *)((char *)v40 + 8),
      *((_QWORD *)&v40[1] + 1));
  }
  v32 = v9[1];
  _InterlockedOr(v37, 0);
  ++*((_QWORD *)v32 + 5);
}
