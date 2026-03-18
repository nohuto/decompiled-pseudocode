/*
 * XREFs of ?GetCurrentPartitionHandle@VIDMM_PROCESS@@SAPEAXXZ @ 0x1C008F1E4
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C007BCEC (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z @ 0x1C007CAC0 (-Allocate@VIDMM_RECYCLE_BLOCK@@QEAAJ_KE@Z.c)
 *     ?VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z @ 0x1C0081428 (-VidMmAllocateVirtualMemory@@YAJPEAPEAXPEA_KKK@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008E60C (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002DE0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 VIDMM_PROCESS::GetCurrentPartitionHandle(void)
{
  __int64 v0; // rax

  if ( !DXGPROCESS::GetCurrent() )
    return -1LL;
  v0 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
  if ( v0 )
    v0 = *(_QWORD *)(v0 + 8);
  if ( v0 )
    return *(_QWORD *)(v0 + 296);
  else
    return -1LL;
}
