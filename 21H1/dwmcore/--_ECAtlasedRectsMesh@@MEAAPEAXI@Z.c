/*
 * XREFs of ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800C4060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x1800C40A4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  unsigned int v4; // r8d

  CAtlasedRectsMesh::~CAtlasedRectsMesh(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88, v4);
    else
      operator delete(this);
  }
  return this;
}
