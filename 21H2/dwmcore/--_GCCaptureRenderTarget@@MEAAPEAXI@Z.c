/*
 * XREFs of ??_GCCaptureRenderTarget@@MEAAPEAXI@Z @ 0x18016CD70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x180187624 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 */

CCaptureRenderTarget *__fastcall CCaptureRenderTarget::`scalar deleting destructor'(
        CCaptureRenderTarget *this,
        char a2)
{
  CCaptureRenderTarget::~CCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x868);
    else
      operator delete(this);
  }
  return this;
}
