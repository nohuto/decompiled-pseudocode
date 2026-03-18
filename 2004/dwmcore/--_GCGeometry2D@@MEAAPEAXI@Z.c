/*
 * XREFs of ??_GCGeometry2D@@MEAAPEAXI@Z @ 0x18016EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGeometry2D@@MEAA@XZ @ 0x18016D540 (--1CGeometry2D@@MEAA@XZ.c)
 */

CGeometry2D *__fastcall CGeometry2D::`scalar deleting destructor'(CGeometry2D *this, char a2)
{
  CGeometry2D::~CGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x48);
    else
      operator delete(this);
  }
  return this;
}
