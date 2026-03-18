/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029408
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0028A24 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006D9E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006F1F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C007D4D4 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C007D580 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00B1CDC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z @ 0x1C00C6190 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEA_K@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00C7F8C (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0011B20 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  void *v7; // rdi
  __int64 v8; // rdx
  VIDMM_SEGMENT *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v15; // [rsp+30h] [rbp-18h]
  __int16 v16; // [rsp+32h] [rbp-16h]
  int v17; // [rsp+34h] [rbp-14h]

  v2 = (_QWORD *)((char *)a2 + 448);
  v4 = *((_QWORD *)a2 + 56);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v4 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 448)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 57), (_QWORD *)*v6 != v2) )
  {
    __fastfail(3u);
  }
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *v2 = 0LL;
  *((_QWORD *)a2 + 57) = 0LL;
  v7 = (void *)*((_QWORD *)a2 + 55);
  v8 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 117));
  v17 = 0;
  v9 = (VIDMM_SEGMENT *)*((_QWORD *)this + 6);
  v14[0] = v8;
  v14[1] = v7;
  v15 = VIDMM_SEGMENT::DriverId(v9);
  v16 = *(_WORD *)(v10 + 380);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[51])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2704LL),
         v14) < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
    v13[7] = v14;
    v13[3] = 270LL;
    v13[4] = 46LL;
    v13[5] = this;
    v13[6] = a2;
    WdLogEvent5_WdCriticalError(v13);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)a2 + 55) = 0LL;
}
