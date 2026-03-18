/*
 * XREFs of ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006FC68
 * Callers:
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006FE64 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0071F90 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C0079A20 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C0085D9C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 *     ?LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C008A190 (-LockAllocationRange@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z.c)
 *     ?LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@@Z @ 0x1C00C3FE0 (-LockAllocationRange@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1EPEAEPEAPEAU_MDL@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00182E0 (_guard_dispatch_icall_nop.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006CEDC (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ProbeAndLockAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        __int64 a4,
        SIZE_T a5,
        enum _LOCK_OPERATION a6,
        struct VIDMM_SEGMENT *a7,
        unsigned __int8 a8)
{
  struct _VIDMM_MDL *v10; // rax

  if ( *((_QWORD *)a2 + 3) )
    return (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64, SIZE_T, int, struct VIDMM_SEGMENT *, unsigned __int8))(**(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL) + 32LL))(
             *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL),
             a3,
             a4,
             a5,
             2,
             a7,
             a8);
  v10 = VidMmiProbeAndLockAllocation(a3, a4, a5, IoModifyAccess, a7, a2);
  if ( !v10 )
    return 3223191809LL;
  if ( a8 )
    *((_QWORD *)a2 + 11) = v10;
  else
    *((_QWORD *)a2 + 10) = v10;
  return 0LL;
}
