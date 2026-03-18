/*
 * XREFs of ??_ECCombinedGeometry@@MEAAPEAXI@Z @ 0x180171270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCombinedGeometry@@MEAA@XZ @ 0x1801BC680 (--1CCombinedGeometry@@MEAA@XZ.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::`vector deleting destructor'(CCombinedGeometry *this, char a2)
{
  CCombinedGeometry::~CCombinedGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xB8);
    else
      operator delete(this);
  }
  return this;
}
