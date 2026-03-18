/*
 * XREFs of ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x1801F4DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x180170090 (--1CFilterEffect@@MEAA@XZ.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::`vector deleting destructor'(CTurbulenceEffect *this, char a2)
{
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC0);
    else
      operator delete(this);
  }
  return this;
}
