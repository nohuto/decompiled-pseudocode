/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C006FA94
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00602C0 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C0062810 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006C5E8 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00C2B68 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C0071EF0 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x1C00BCBF4 (VidMmAllocateVirtualMemoryFromPartition.c)
 */

NTSTATUS __fastcall VidMmAllocateVirtualMemory(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  void *CurrentPartitionHandle; // rax

  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle == (void *)-1LL )
    return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, RegionSize, AllocationType, Protect);
  else
    return VidMmAllocateVirtualMemoryFromPartition(
             (_DWORD)CurrentPartitionHandle,
             (_DWORD)BaseAddress,
             (_DWORD)RegionSize,
             AllocationType,
             Protect);
}
