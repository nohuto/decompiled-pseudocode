/*
 * XREFs of ??_ECGeometryGroup@@MEAAPEAXI@Z @ 0x18016CD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGeometryGroup@@MEAA@XZ @ 0x1801C3444 (--1CGeometryGroup@@MEAA@XZ.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::`vector deleting destructor'(CGeometryGroup *this, char a2)
{
  CGeometryGroup::~CGeometryGroup(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xB8);
    else
      operator delete(this);
  }
  return this;
}
