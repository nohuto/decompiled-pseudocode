/*
 * XREFs of ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C0085F74
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C0084964 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0085EBC (-UnlockAllocationBackingStore@VIDMM_SEGMENT@@SAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00927A8 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C00A5300 (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00A89E0 (-UnlockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00E8520 (-UnlockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     UnmapGpadl @ 0x1C002D23C (UnmapGpadl.c)
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C00A672C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z @ 0x1C00D6598 (-EnsureLockedPages@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UnlockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5,
        char a6)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rdx
  LARGE_INTEGER v18; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)this;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL);
  if ( CurrentThread == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    ++*(_DWORD *)(v6 + 360);
    v14 = PerformanceCounter;
  }
  else
  {
    v14 = v18;
  }
  v15 = *(_QWORD *)a2;
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 72LL);
  if ( (v16 & 0x2000) == 0 )
  {
    if ( (v16 & 0x8000) != 0 )
    {
      if ( *(_QWORD *)(v15 + 544) )
      {
        UnmapGpadl();
        *(_QWORD *)(v15 + 544) = 0LL;
      }
    }
    else
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2743LL) && a6 )
        VIDMM_GLOBAL::EnsureLockedPages(this, a2, a3, a4);
      v17 = *((_QWORD *)a2 + 3);
      if ( v17 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64, unsigned __int64, char))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL)
                                                                                          + 40LL))(
          *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
          v17,
          a3,
          a4,
          a5);
      }
      else if ( a5 )
      {
        VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 11));
        *((_QWORD *)a2 + 11) = 0LL;
      }
      else
      {
        VidMmiUnlockAllocation(*((struct _VIDMM_MDL **)a2 + 10));
        *((_QWORD *)a2 + 10) = 0LL;
      }
    }
  }
  if ( v12 )
    *(_QWORD *)(v6 + 312) += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v14.QuadPart;
}
