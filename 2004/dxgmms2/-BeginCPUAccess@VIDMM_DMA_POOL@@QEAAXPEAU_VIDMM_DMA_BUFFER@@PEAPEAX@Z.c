/*
 * XREFs of ?BeginCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@PEAPEAX@Z @ 0x1C0075A48
 * Callers:
 *     VidMmBeginDmaBufferCPUAccess @ 0x1C0001F40 (VidMmBeginDmaBufferCPUAccess.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0075920 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z @ 0x1C00BC77C (-WriteDmaBufferToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_DMA_BUFFER@@PEAE_KHKH2_JKKKKKKK@Z.c)
 *     VidSchiDiscardQueuePacket @ 0x1C00D0EEC (VidSchiDiscardQueuePacket.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00D1A5C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::BeginCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2, void **a3)
{
  void *v3; // rcx

  if ( *((_DWORD *)this + 9) )
    v3 = *(void **)(*((_QWORD *)a2 + 7) + 360LL);
  else
    v3 = (void *)*((_QWORD *)a2 + 9);
  *a3 = v3;
}
