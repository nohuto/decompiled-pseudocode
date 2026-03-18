/*
 * XREFs of ??_EStepInterpolation@@UEAAPEAXI@Z @ 0x1800C5A70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

StepInterpolation *__fastcall StepInterpolation::`vector deleting destructor'(
        StepInterpolation *this,
        char a2,
        unsigned int a3)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x30, a3);
    else
      operator delete(this);
  }
  return this;
}
