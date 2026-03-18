/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0063834
 * Callers:
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C005FE88 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0062280 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063778 (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C006B850 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C008A5D0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00C5100 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 *     UnmapGpadl @ 0x1C00228B0 (UnmapGpadl.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C0060FD4 (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00B05CC (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v6; // rsi
  int v10; // eax
  __int64 v11; // rdx

  v6 = *(_QWORD *)a2;
  v10 = *(_DWORD *)(*(_QWORD *)a2 + 80LL);
  if ( (v10 & 0x2000) == 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      if ( *(_QWORD *)(v6 + 512) )
      {
        UnmapGpadl();
        *(_QWORD *)(v6 + 512) = 0LL;
      }
    }
    else
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2623LL) && a6 )
        VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
      v11 = *((_QWORD *)a2 + 3);
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL)
                                                                                          + 40LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
          v11,
          a3,
          a4,
          a5);
      }
      else if ( a5 )
      {
        VidMmiUnlockAllocation(*((PMDL **)a2 + 11), 0LL, a3);
        *((_QWORD *)a2 + 11) = 0LL;
      }
      else
      {
        VidMmiUnlockAllocation(*((PMDL **)a2 + 10), 0LL, a3);
        *((_QWORD *)a2 + 10) = 0LL;
      }
    }
  }
}
