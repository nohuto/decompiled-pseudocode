/*
 * XREFs of ??_GCNineGridBrush@@MEAAPEAXI@Z @ 0x1800C8230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800C8274 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CNineGridBrush *__fastcall CNineGridBrush::`scalar deleting destructor'(CNineGridBrush *this, char a2)
{
  unsigned int v4; // r8d

  CNineGridBrush::~CNineGridBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC0, v4);
    else
      operator delete(this);
  }
  return this;
}
