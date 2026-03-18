/*
 * XREFs of VidMmReleaseDmaBuffer @ 0x1C002D460
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0018420 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidMmReleaseDmaBuffer(VIDMM_DMA_POOL **a1, __int64 a2, __int64 a3, __int64 a4)
{
  VIDMM_DMA_POOL::ReleaseBuffer(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, 0LL, a4);
}
