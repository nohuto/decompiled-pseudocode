/*
 * XREFs of ??_ECShapeTree@@UEAAPEAXI@Z @ 0x180171360
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1801C2404 (--1CContainerVectorShape@@MEAA@XZ.c)
 */

CShapeTree *__fastcall CShapeTree::`vector deleting destructor'(CShapeTree *this, char a2)
{
  CContainerVectorShape::~CContainerVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA0);
    else
      operator delete(this);
  }
  return this;
}
