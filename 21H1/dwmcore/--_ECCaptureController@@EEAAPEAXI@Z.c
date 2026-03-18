/*
 * XREFs of ??_ECCaptureController@@EEAAPEAXI@Z @ 0x180171180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x1801BABEC (--1CCaptureController@@EEAA@XZ.c)
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
