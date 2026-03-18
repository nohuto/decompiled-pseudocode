/*
 * XREFs of ?GetBrushGraph@CBrush@@QEAAPEAVCBrushRenderingGraph@@XZ @ 0x1800B3498
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x18000F0B8 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18007B4B8 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800B3448 (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

struct CBrushRenderingGraph *__fastcall CBrush::GetBrushGraph(CBrush *this, __int64 a2)
{
  if ( *((_BYTE *)this + 72) && !*((_QWORD *)this + 8) )
  {
    LOBYTE(a2) = 1;
    (*(void (__fastcall **)(CBrush *, __int64))(*(_QWORD *)this + 328LL))(this, a2);
  }
  return (struct CBrushRenderingGraph *)*((_QWORD *)this + 8);
}
