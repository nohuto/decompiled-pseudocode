/*
 * XREFs of ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0078CB0
 * Callers:
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0077A58 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z @ 0x1C00798D0 (-Commit@VIDMM_RECYCLE_RANGE@@QEAAJEPEAE@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C0085D70 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00C3118 (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C006F778 (-GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ.c)
 *     VidMmAllocateVirtualMemoryFromPartition @ 0x1C00BD198 (VidMmAllocateVirtualMemoryFromPartition.c)
 */

NTSTATUS __fastcall VidMmAllocateVirtualMemory(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  __int64 CurrentPartitionHandle; // rax

  CurrentPartitionHandle = VIDMM_PROCESS::GetCurrentPartitionHandle();
  if ( CurrentPartitionHandle == -1 )
    return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, 0LL, RegionSize, AllocationType, Protect);
  else
    return VidMmAllocateVirtualMemoryFromPartition(
             CurrentPartitionHandle,
             (_DWORD)BaseAddress,
             (_DWORD)RegionSize,
             AllocationType,
             Protect);
}
