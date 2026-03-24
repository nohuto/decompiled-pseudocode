/*
 * XREFs of ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18016E160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x1801886BC (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
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
