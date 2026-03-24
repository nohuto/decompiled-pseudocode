/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00259E8
 * Callers:
 *     DxgkCreateOverlay @ 0x1C027AC80 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C027B310 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C027B8B0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027BD70 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027C370 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 728), 0);
  return this;
}
