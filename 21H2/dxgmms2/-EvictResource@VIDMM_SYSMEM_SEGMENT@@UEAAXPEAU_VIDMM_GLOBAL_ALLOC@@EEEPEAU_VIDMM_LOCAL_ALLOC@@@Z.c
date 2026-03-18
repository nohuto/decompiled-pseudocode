/*
 * XREFs of ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0002240 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x1C002E6EC (McTemplateK0ppq_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00856F4 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0085A4C (-RecordVaPagingHistoryEvictCommitAlloc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0086108 (-ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00A5584 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 *     ?NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A633C (-NotifyContextAllocationEviction@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00A6554 (-ChargePinnedBackingStore@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 *     ?ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z @ 0x1C00A67B0 (-ReturnPinnedBackingStore@VIDMM_GLOBAL@@QEAAX_K@Z.c)
 *     ?IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00D7968 (-IoMmuUnmapAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  char v6; // bp
  char v7; // si
  struct _KTHREAD **v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r9
  struct _VIDMM_LOCAL_ALLOC *v13; // r15
  VIDMM_GLOBAL *v14; // rcx
  VIDMM_GLOBAL *v15; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v16; // rsi
  _QWORD *i; // r14
  unsigned int j; // esi
  VIDMM_GLOBAL *v19; // rcx
  __int64 v20; // rax
  bool v21; // si
  __int64 v22; // r8
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v27; // rsi
  _QWORD **v28; // r10
  VIDMM_GLOBAL *v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *k; // r9
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  VIDMM_GLOBAL *v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  VIDMM_GLOBAL *v40; // r9
  signed __int32 v41[8]; // [rsp+0h] [rbp-98h] BYREF
  char v42[8]; // [rsp+28h] [rbp-70h]
  __int128 v43; // [rsp+40h] [rbp-58h]
  __int128 v44; // [rsp+50h] [rbp-48h]
  __int128 v45; // [rsp+60h] [rbp-38h]

  v43 = 0LL;
  v6 = a4;
  v7 = a3;
  v44 = 0LL;
  v45 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v38 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v38 + 24) = a2;
    *(_QWORD *)(v38 + 32) = *((int *)a2 + 91);
  }
  if ( *((_DWORD *)a2 + 36) && (*((_DWORD *)a2 + 17) & 0x40000000) == 0 && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  VIDMM_GLOBAL::RecordVaPagingHistoryEvictCommitAlloc(this[1], a2, 0);
  v10 = (struct _KTHREAD **)((char *)a2 + 296);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v13 = a6;
  if ( !a6 )
    v13 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v14 = (VIDMM_GLOBAL *)*((unsigned int *)a2 + 17);
  if ( *((_DWORD *)this[1] + 10042) )
  {
    if ( ((unsigned int)v14 & 0x10000000) != 0 )
      VIDMM_GLOBAL::NotifyContextAllocationEviction(v14, a2);
    if ( v7 )
      (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *))*this + 8))(this, a2);
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    if ( v6 )
    {
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2 + 37);
      return;
    }
  }
  else
  {
    *((_DWORD *)a2 + 17) = (unsigned int)v14 | 0x200000;
  }
  v15 = this[1];
  if ( (*((_BYTE *)v15 + 40936) & 2) != 0 )
  {
    v16 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 34);
    if ( v16 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) )
    {
      do
      {
        for ( i = (_QWORD *)*((_QWORD *)v16 - 2); i != (_QWORD *)((char *)v16 - 16); i = (_QWORD *)*i )
          VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v15, (struct VIDMM_ALLOC *)(i - 5));
        v16 = *(struct _VIDMM_GLOBAL_ALLOC **)v16;
      }
      while ( v16 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 272) );
      v10 = (struct _KTHREAD **)((char *)a2 + 296);
    }
    for ( j = 0; j < *((_DWORD *)v15 + 1754); ++j )
      VIDMM_GLOBAL::FlushPagingBufferInternal(v15, j, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEngines(v15, a2);
  }
  v19 = this[1];
  if ( *((_BYTE *)v19 + 40179) )
    VIDMM_GLOBAL::IoMmuUnmapAllocation(v19, a2, v13);
  v20 = *((_QWORD *)a2 + 66);
  v21 = *(_WORD *)(v20 + 4) == 2;
  if ( (*(_DWORD *)v20 & 0x8000000) == 0 )
    goto LABEL_24;
  if ( (*((_DWORD *)a2 + 19) & 2) == 0 )
  {
    if ( (int)VIDMM_GLOBAL::ChargePinnedBackingStore(this[1], *((_QWORD *)a2 + 1)) < 0 )
    {
LABEL_24:
      if ( (**((_DWORD **)a2 + 66) & 0x4000) != 0 )
        *((_QWORD *)a2 + 48) = 0LL;
      VIDMM_SEGMENT::UnlockAllocationBackingStore(this[1], a2, v13);
      if ( (*((_DWORD *)a2 + 19) & 2) != 0 )
      {
        VIDMM_GLOBAL::ReturnPinnedBackingStore(this[1], *((_QWORD *)a2 + 1));
        *((_DWORD *)a2 + 19) &= ~2u;
      }
      goto LABEL_28;
    }
    *((_DWORD *)a2 + 19) |= 2u;
  }
  if ( v21 )
    goto LABEL_24;
LABEL_28:
  v22 = *((_QWORD *)a2 + 17);
  if ( v22 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v11, v22, v12);
      v39[3] = *((_QWORD *)a2 + 17);
      v39[4] = *((int *)a2 + 33);
      v39[5] = *((unsigned int *)a2 + 32);
      v22 = *((_QWORD *)a2 + 17);
    }
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v22,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  else if ( g_IsInternalReleaseOrDbg )
  {
    WdLogNewEntry5_WdTrace(v19, v11, 0LL, v12);
  }
  v23 = (_QWORD *)((char *)a2 + 400);
  v24 = *((_QWORD *)a2 + 50);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v24 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v25 = (_QWORD *)*((_QWORD *)a2 + 51), (_QWORD *)*v25 != v23) )
  {
    __fastfail(3u);
  }
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  *v23 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v13 && *((_QWORD *)v13 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v13, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 312LL) += *((_QWORD *)a2 + 2);
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 98));
  v27 = (_QWORD **)((char *)a2 + 272);
  *(_QWORD *)(*((_QWORD *)a2 + 15) + 8LL * PriorityClass + 328) += *((_QWORD *)a2 + 2);
  v28 = (_QWORD **)*((_QWORD *)a2 + 34);
  while ( v28 != v27 )
  {
    v29 = this[1];
    v30 = *(_QWORD *)((*(v28 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v29 + 3) + 240LL));
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v31 = 0LL;
    VidMmRecordEviction((__int64)v29 + 7184, v31 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v29 + 2));
  }
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  *((_QWORD *)a2 + 15) = 0LL;
  *((_DWORD *)a2 + 28) = 0;
  if ( !a5 && (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    VIDMM_GLOBAL::ResetBackingStore(this[1], a2);
    *((_DWORD *)a2 + 19) |= 0x10u;
    *((_QWORD *)a2 + 57) = *((_QWORD *)this[1] + 579);
  }
  v32 = 1584LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v32 + *((_QWORD *)this[1] + 5028) + 1568) -= *((_QWORD *)a2 + 2);
  for ( k = *v27; k != v27; k = (_QWORD *)*k )
  {
    v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(k - 6) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v34 + 240) -= *((_QWORD *)a2 + 2);
  }
  DXGFASTMUTEX::Release(v10);
  if ( (byte_1C006E941 & 8) != 0 )
  {
    v40 = this[1];
    *(_DWORD *)v42 = *((_DWORD *)this + 4) + 1;
    McTemplateK0ppq_EtwWriteTransfer(v35, &EventPagingOpSysmemUncommit, v36, *((_QWORD *)v40 + 3), a2, *(_QWORD *)v42);
  }
  v37 = this[1];
  _InterlockedOr(v41, 0);
  ++*((_QWORD *)v37 + 5);
}
