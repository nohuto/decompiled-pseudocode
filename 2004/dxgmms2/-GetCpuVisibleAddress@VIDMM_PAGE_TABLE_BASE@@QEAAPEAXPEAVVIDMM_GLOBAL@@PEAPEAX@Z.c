/*
 * XREFs of ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0073D94
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0073CBC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00295A0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029648 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00AF2C0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

PVOID __fastcall VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        PMDL *a3)
{
  _QWORD *v3; // r9
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  PVOID result; // rax
  __int64 v9; // rax
  VIDMM_CPU_HOST_APERTURE *v10; // rbp
  struct VIDMM_ALLOC *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  PMDL v14; // rdi
  __int64 v15; // rax
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 1);
  *a3 = 0LL;
  v6 = v3[16];
  if ( !v6 )
    return 0LL;
  v7 = (VIDMM_GLOBAL *)*(unsigned int *)(v6 + 80);
  if ( ((unsigned __int16)v7 & 0x1001) != 0 )
    return *(PVOID *)(**((_QWORD **)this + 2) + 16LL);
  if ( ((unsigned __int16)v7 & 0x2000) != 0 )
  {
    v10 = *(VIDMM_CPU_HOST_APERTURE **)(v6 + 488);
    v11 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 2);
    MemoryDescriptorList = 0LL;
    if ( VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(v7, v11, v10, &MemoryDescriptorList) >= 0 )
    {
      v14 = MemoryDescriptorList;
      result = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
      if ( result )
      {
        *a3 = v14;
        return result;
      }
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v10, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v10, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      ExFreePoolWithTag(v14, 0);
    }
    v15 = WdLogNewEntry5_WdWarning(v13, v12);
    WdLogEvent5_WdWarning(v15);
    return 0LL;
  }
  if ( ((unsigned __int8)v7 & 4) == 0 )
  {
    v9 = WdLogNewEntry5_WdCriticalError(v7, a2);
    *(_QWORD *)(v9 + 24) = 270LL;
    *(_QWORD *)(v9 + 32) = 48LL;
    *(_QWORD *)(v9 + 40) = this;
    *(_OWORD *)(v9 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v9);
    return 0LL;
  }
  result = (PVOID)(v3[17] + *(_QWORD *)(v6 + 32));
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 348LL) & 8) == 0 )
    return (PVOID)MmMapIoSpaceEx(result, v3[2], 1028LL);
  return result;
}
