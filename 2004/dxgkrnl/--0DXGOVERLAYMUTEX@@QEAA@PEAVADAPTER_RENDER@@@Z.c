/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C00245F4
 * Callers:
 *     DxgkCreateOverlay @ 0x1C027AA00 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C027B090 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C027B630 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C027BAF0 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C027C0F0 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 728), 0);
  return this;
}
