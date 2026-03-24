/*
 * XREFs of ??_ECCaptureController@@EEAAPEAXI@Z @ 0x18016CD20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801B6D4C (--1CCaptureController@@EEAA@XZ.c)
 */

CCaptureController *__fastcall CCaptureController::`vector deleting destructor'(CCaptureController *this, char a2)
{
  CCaptureController::~CCaptureController(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
