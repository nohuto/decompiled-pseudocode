/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C007D580
 * Callers:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C007AFB8 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C007BE90 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029360 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0029408 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        struct _MDL *a4)
{
  SIZE_T *v6; // rdx
  SIZE_T v9; // rbx
  int v10; // eax
  __int64 v11; // rax
  VIDMM_CPU_HOST_APERTURE *v12; // rbx

  v6 = (SIZE_T *)*((_QWORD *)this + 1);
  if ( !v6[16] )
  {
    v11 = WdLogNewEntry5_WdCriticalError(this, v6);
    *(_QWORD *)(v11 + 24) = 270LL;
    *(_QWORD *)(v11 + 32) = 48LL;
    *(_QWORD *)(v11 + 40) = this;
    *(_OWORD *)(v11 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v11);
    v6 = (SIZE_T *)*((_QWORD *)this + 1);
  }
  v9 = v6[16];
  v10 = *(_DWORD *)(v9 + 80);
  if ( (v10 & 0x1001) == 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 348LL) & 8) == 0 )
        MmUnmapIoSpace(a3, v6[2]);
    }
    else
    {
      v12 = *(VIDMM_CPU_HOST_APERTURE **)(v9 + 488);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v12, (struct _VIDMM_GLOBAL_ALLOC *)v6);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v12, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      MmUnmapLockedPages(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
