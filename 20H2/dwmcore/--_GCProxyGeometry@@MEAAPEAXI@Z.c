/*
 * XREFs of ??_GCProxyGeometry@@MEAAPEAXI@Z @ 0x18016D650
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CProxyGeometry@@MEAA@XZ @ 0x1801E5658 (--1CProxyGeometry@@MEAA@XZ.c)
 */

CProxyGeometry *__fastcall CProxyGeometry::`scalar deleting destructor'(CProxyGeometry *this, char a2)
{
  CProxyGeometry::~CProxyGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x98);
    else
      operator delete(this);
  }
  return this;
}
