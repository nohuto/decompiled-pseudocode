/*
 * XREFs of ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C00A55BC
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C00D53E0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

void *__fastcall VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        void **a3)
{
  _QWORD *v3; // r9
  __int64 v6; // rax
  VIDMM_GLOBAL *v7; // rcx
  void *result; // rax
  VIDMM_CPU_HOST_APERTURE *v9; // rdi
  struct VIDMM_ALLOC *v10; // rdx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  PVOID v12; // rsi
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 2);
  *a3 = 0LL;
  v6 = v3[15];
  if ( !v6 )
    return 0LL;
  v7 = (VIDMM_GLOBAL *)*(unsigned int *)(v6 + 80);
  if ( ((unsigned __int16)v7 & 0x1001) != 0 )
    return *(void **)(**((_QWORD **)this + 3) + 16LL);
  if ( ((unsigned __int16)v7 & 0x2000) != 0 )
  {
    v9 = *(VIDMM_CPU_HOST_APERTURE **)(v6 + 504);
    v10 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
    P = 0LL;
    if ( VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture(v7, v10, v9, (struct _MDL **)&P) >= 0 )
    {
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      v12 = P;
      result = (void *)(*((__int64 (__fastcall **)(PVOID, _QWORD, __int64))VirtualMemoryInterface + 5))(P, 0LL, 2LL);
      if ( result )
      {
        *a3 = v12;
        return result;
      }
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v9, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v9, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
      ExFreePoolWithTag(v12, 0);
      WdLogSingleEntry0(3LL);
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
    return 0LL;
  }
  if ( ((unsigned __int8)v7 & 4) == 0 )
  {
    WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
    return 0LL;
  }
  result = (void *)(v3[16] + *(_QWORD *)(v6 + 32));
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 436LL) & 8) == 0 )
    return (void *)MmMapIoSpaceEx(result, v3[2], 1028LL);
  return result;
}
