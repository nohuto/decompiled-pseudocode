/*
 * XREFs of VidMmEscape @ 0x1C0022480
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00B0494 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 */

int __fastcall VidMmEscape(VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2, struct _D3DKMT_VIDMM_ESCAPE *a3, int a4)
{
  return VIDMM_GLOBAL::Escape(a1, a2, a3, a4);
}
