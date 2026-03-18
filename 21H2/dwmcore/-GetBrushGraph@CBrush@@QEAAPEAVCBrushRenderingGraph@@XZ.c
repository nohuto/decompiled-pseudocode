/*
 * XREFs of ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800D52C4
 * Callers:
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008C4FC (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D5278 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 *     ?UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ @ 0x1800F1960 (-UpdateBackdropBlurFlagForTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18023551C (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 80) && !*((_QWORD *)this + 9) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 328LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 9);
}
