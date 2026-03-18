/*
 * XREFs of ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C009E81C
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C009DD78 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C00A9690 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00A9738 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00A9964 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00E1224 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::LockAllPoolForAddRemove(char a1)
{
  if ( a1 )
    ExAcquireResourceExclusiveLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
  else
    ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
}
