/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0081428
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C007CAC0 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C007F5A4 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0081848 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00E7398 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C001CDD4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C008F1E4 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x1C00E19A0 (VidMmAllocateVirtualMemoryFromPartition.c)
 */

__int64 __fastcall VidMmAllocateVirtualMemory(void **a1, unsigned __int64 *a2, int a3, int a4)
{
  void *CurrentPartitionHandle; // rax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle != (void *)-1LL )
    return VidMmAllocateVirtualMemoryFromPartition((_DWORD)CurrentPartitionHandle, (_DWORD)a1, (_DWORD)a2, a3, a4);
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  return (*(__int64 (__fastcall **)(__int64, void **, _QWORD, unsigned __int64 *, int, int))VirtualMemoryInterface)(
           -1LL,
           a1,
           0LL,
           a2,
           a3,
           a4);
}
