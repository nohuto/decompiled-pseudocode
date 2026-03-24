/*
 * XREFs of ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x18018B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18018B2B8 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::`scalar deleting destructor'(
        CMagnifierRenderTarget *this,
        char a2)
{
  CMagnifierRenderTarget::~CMagnifierRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x898);
    else
      operator delete(this);
  }
  return this;
}
