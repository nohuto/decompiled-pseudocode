/*
 * XREFs of VidMmEndDmaBufferCPUAccess @ 0x1C0014550
 * Callers:
 *     <none>
 * Callees:
 *     ?Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z @ 0x1C0075640 (-Defragment@VIDMM_SEGMENT@@UEAAX_K0@Z.c)
 */

void __fastcall VidMmEndDmaBufferCPUAccess(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  VIDMM_SEGMENT::Defragment(*(VIDMM_SEGMENT **)(a1 + 136), a1, a3);
}
