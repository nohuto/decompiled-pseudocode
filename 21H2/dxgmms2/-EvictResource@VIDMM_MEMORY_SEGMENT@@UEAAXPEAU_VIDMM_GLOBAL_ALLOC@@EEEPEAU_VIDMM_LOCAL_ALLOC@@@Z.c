/*
 * XREFs of ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_KW4_VIDMM_OPERATION@@@Z @ 0x1C0002240 (-VidMmRecordEviction@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@PEAU_VIDMM_PROCESS_SEGMENT_STATISTICS@@_K.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C0002298 (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00039B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003A80 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00843BC (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0085748 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetPriorityClass@VIDMM_SEGMENT@@SA?AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z @ 0x1C00A5584 (-GetPriorityClass@VIDMM_SEGMENT@@SA-AW4_VIDMM_ALLOCATION_PRIORITY_CLASS@@K@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::EvictResource(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _VIDMM_LOCAL_ALLOC *a6)
{
  unsigned __int8 v6; // bp
  struct _KTHREAD **v9; // r14
  struct _VIDMM_LOCAL_ALLOC *v10; // rsi
  int v11; // r12d
  __int64 v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rdx
  unsigned int PriorityClass; // eax
  _QWORD **v18; // r15
  _QWORD **v19; // r10
  VIDMM_GLOBAL *v20; // r9
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r11
  __int64 v24; // rcx
  VIDMM_GLOBAL *v25; // rbp
  _QWORD *v26; // rdi
  _QWORD *i; // rsi

  v6 = a3;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = a2;
  if ( *((_DWORD *)a2 + 36) && g_IsInternalRelease )
    WdLogSingleEntry5(0LL, 270LL, 9LL, 0LL, 0LL, 0LL);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)a2 + 496, 0LL);
  v9 = (struct _KTHREAD **)((char *)a2 + 296);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  v10 = a6;
  if ( !a6 )
    v10 = (struct _VIDMM_LOCAL_ALLOC *)*((_QWORD *)a2 + 11);
  v11 = 0;
  if ( (unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this[1], a2) )
  {
    v11 = 1;
    if ( *((_BYTE *)a2 + 83) )
      *((_BYTE *)a2 + 82) = 0;
    v6 = 0;
  }
  VIDMM_MEMORY_SEGMENT::TransferToSystem((VIDMM_MEMORY_SEGMENT *)this, a2, v6, v10, 0);
  if ( *((_QWORD *)a2 + 58) )
  {
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[63], a2);
    VIDMM_CPU_HOST_APERTURE::ReleaseRange(this[63], a2);
  }
  v12 = *((_QWORD *)a2 + 17);
  if ( v12 )
  {
    (*((void (__fastcall **)(VIDMM_GLOBAL **, struct _VIDMM_GLOBAL_ALLOC *, __int64, _QWORD))*this + 3))(
      this,
      a2,
      v12,
      *((_QWORD *)a2 + 2));
    *((_QWORD *)a2 + 17) = 0LL;
  }
  v13 = (_QWORD *)((char *)a2 + 400);
  v14 = *((_QWORD *)a2 + 50);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v14 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 400)
    || (v15 = (_QWORD *)*((_QWORD *)a2 + 51), (_QWORD *)*v15 != v13) )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  *((_QWORD *)a2 + 51) = 0LL;
  if ( v10 && *((_QWORD *)v10 + 1) )
    VidMmRecordAlloc(this[1], (__int64)a2, (__int64)v10, (__int64)this, *((_QWORD *)a2 + 2), 1);
  *((_QWORD *)this[1] + 5591) -= *((_QWORD *)a2 + 2);
  v16 = 1584LL * (*((_DWORD *)a2 + 17) & 0x3F);
  *(_QWORD *)(v16 + *((_QWORD *)this[1] + 5028) + 1560) -= *((_QWORD *)a2 + 2);
  this[39] = (VIDMM_GLOBAL *)((char *)this[39] + *((_QWORD *)a2 + 2));
  PriorityClass = VIDMM_SEGMENT::GetPriorityClass(*((unsigned int *)a2 + 98));
  v18 = (_QWORD **)((char *)a2 + 272);
  this[PriorityClass + 41] = (VIDMM_GLOBAL *)((char *)this[PriorityClass + 41] + *((_QWORD *)a2 + 2));
  v19 = (_QWORD **)*((_QWORD *)a2 + 34);
  while ( v19 != v18 )
  {
    v20 = this[1];
    v21 = *(_QWORD *)((*(v19 - 6))[2] + 8LL * *(unsigned int *)(*((_QWORD *)v20 + 3) + 240LL));
    if ( v21 )
      v22 = *(_QWORD *)(v21 + 16) + 184LL * *((unsigned int *)this + 5);
    else
      v22 = 0LL;
    VidMmRecordEviction((__int64)v20 + 7184, v22 + 56, *((_QWORD *)a2 + 2), *((_DWORD *)v20 + 2));
    v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 - 48) + 16LL)
                                + 8LL * *(unsigned int *)(*((_QWORD *)this[1] + 3) + 240LL))
                    + 48LL)
        + 296LL * (*((_DWORD *)a2 + 17) & 0x3F);
    *(_QWORD *)(v24 + 232) -= *((_QWORD *)a2 + 2);
  }
  *((_QWORD *)this[1] + 5027) -= *((_QWORD *)a2 + 2) >> 12;
  *((_DWORD *)a2 + 28) = 0;
  *((_DWORD *)a2 + 17) &= ~0x1000000u;
  v25 = this[1];
  if ( (*((_BYTE *)v25 + 40936) & 2) != 0 )
  {
    v26 = *v18;
    if ( *v18 != v18 )
    {
      do
      {
        for ( i = (_QWORD *)*(v26 - 2); i != v26 - 2; i = (_QWORD *)*i )
          VIDMM_GLOBAL::MakeOneVirtualAddressRangeNotResident(v25, (struct VIDMM_ALLOC *)(i - 5));
        v26 = (_QWORD *)*v26;
      }
      while ( v26 != v18 );
      v9 = (struct _KTHREAD **)((char *)a2 + 296);
    }
  }
  if ( !v11 )
  {
    *((_DWORD *)a2 + 19) &= ~8u;
    *((_BYTE *)a2 + 83) = 0;
  }
  ExReleasePushLockExclusiveEx((char *)a2 + 496, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v9);
}
