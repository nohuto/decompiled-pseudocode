/*
 * XREFs of ??_ECMeshGeometry2D@@MEAAPEAXI@Z @ 0x1801D7C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CMeshGeometry2D@@MEAA@XZ @ 0x1801D7BE0 (--1CMeshGeometry2D@@MEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2D::~CMeshGeometry2D(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xB0);
    else
      operator delete(this);
  }
  return this;
}
