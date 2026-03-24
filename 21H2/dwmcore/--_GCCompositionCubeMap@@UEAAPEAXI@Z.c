/*
 * XREFs of ??_GCCompositionCubeMap@@UEAAPEAXI@Z @ 0x1801B8FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x1801B8F70 (--1CCompositionCubeMap@@UEAA@XZ.c)
 */

CCompositionCubeMap *__fastcall CCompositionCubeMap::`scalar deleting destructor'(CCompositionCubeMap *this, char a2)
{
  CCompositionCubeMap::~CCompositionCubeMap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xA8);
    else
      operator delete(this);
  }
  return this;
}
