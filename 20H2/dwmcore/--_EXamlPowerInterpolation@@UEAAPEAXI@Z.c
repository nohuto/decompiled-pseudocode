/*
 * XREFs of ??_EXamlPowerInterpolation@@UEAAPEAXI@Z @ 0x180020A40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

XamlPowerInterpolation *__fastcall XamlPowerInterpolation::`vector deleting destructor'(
        XamlPowerInterpolation *this,
        char a2,
        unsigned int a3)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x28, a3);
    else
      operator delete(this);
  }
  return this;
}
