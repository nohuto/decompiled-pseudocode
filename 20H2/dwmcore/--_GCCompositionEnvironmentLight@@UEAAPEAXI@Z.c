/*
 * XREFs of ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x18020CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180036584 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::`scalar deleting destructor'(
        CCompositionEnvironmentLight *this,
        char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x168);
    else
      operator delete(this);
  }
  return this;
}
