/*
 * XREFs of ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C0071EF0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C00602C0 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F5F8 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C006FA94 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00831EC (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0011F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 VIDMM_PROCESS::GetCurrentPartitionHandle(void)
{
  __int64 v0; // rax
  __int64 v1; // rax

  if ( DXGPROCESS::GetCurrent() && (v0 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v1 = *(_QWORD *)(v0 + 8);
  else
    v1 = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 296);
  else
    return -1LL;
}
