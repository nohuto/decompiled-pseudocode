/*
 * XREFs of VidMmInitDmaPool @ 0x1C001AC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C00A9964 (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmInitDmaPool(VIDMM_DMA_POOL *a1)
{
  return VIDMM_DMA_POOL::Init(a1);
}
