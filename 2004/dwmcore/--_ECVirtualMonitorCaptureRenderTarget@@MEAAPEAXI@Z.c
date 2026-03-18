/*
 * XREFs of ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18016FA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x18018990C (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::`vector deleting destructor'(
        CVirtualMonitorCaptureRenderTarget *this,
        char a2)
{
  CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x8B0);
    else
      operator delete(this);
  }
  return this;
}
