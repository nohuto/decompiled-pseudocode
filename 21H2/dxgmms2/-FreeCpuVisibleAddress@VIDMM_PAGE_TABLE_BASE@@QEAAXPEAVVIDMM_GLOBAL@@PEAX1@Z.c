/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00A1CA8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00A1C58 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A140 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001A5B0 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        void *a4)
{
  SIZE_T *v5; // rdx
  SIZE_T v9; // rbx
  int v10; // eax
  VIDMM_CPU_HOST_APERTURE *v11; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v5 = (SIZE_T *)*((_QWORD *)this + 2);
  if ( !v5[15] )
  {
    WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
    v5 = (SIZE_T *)*((_QWORD *)this + 2);
  }
  v9 = v5[15];
  v10 = *(_DWORD *)(v9 + 80);
  if ( (v10 & 0x1000) == 0 && (v10 & 1) == 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 436LL) & 8) == 0 )
        MmUnmapIoSpace(a3, v5[2]);
    }
    else
    {
      v11 = *(VIDMM_CPU_HOST_APERTURE **)(v9 + 504);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)v5);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v11, *((struct _VIDMM_GLOBAL_ALLOC **)this + 2));
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(void *, void *))VirtualMemoryInterface + 6))(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
