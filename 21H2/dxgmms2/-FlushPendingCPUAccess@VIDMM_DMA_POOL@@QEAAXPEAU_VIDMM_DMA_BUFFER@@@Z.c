/*
 * XREFs of ?FlushPendingCPUAccess@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C00BAB34
 * Callers:
 *     VidSchiSubmitRenderCommand @ 0x1C00D062C (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018BF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_DMA_POOL::FlushPendingCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2)
{
  if ( *((_DWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 128LL) + 56LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 128LL));
}
