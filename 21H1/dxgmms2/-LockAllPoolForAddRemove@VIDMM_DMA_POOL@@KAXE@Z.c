/*
 * XREFs of ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C008B4E0
 * Callers:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C0089898 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0089940 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C008AD58 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00BCBC0 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
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
