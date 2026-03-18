/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x1C0022E70
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0023C78 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidMmUnreferenceDmaBuffer(VIDMM_GLOBAL ***a1, unsigned __int8 a2)
{
  VIDMM_GLOBAL::UnreferenceDmaBuffer(*a1[17], (struct _VIDMM_DMA_BUFFER *)a1, a2);
}
