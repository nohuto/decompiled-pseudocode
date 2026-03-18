/*
 * XREFs of ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C002B57C
 * Callers:
 *     DxgkCreateOverlay @ 0x1C032A080 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C032A840 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C032AE90 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C032B480 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C032BB70 (DxgkUpdateOverlay.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

DXGOVERLAYMUTEX *__fastcall DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(DXGOVERLAYMUTEX *this, struct ADAPTER_RENDER *a2)
{
  DXGAUTOMUTEX::DXGAUTOMUTEX(this, (struct ADAPTER_RENDER *)((char *)a2 + 744), 0);
  return this;
}
