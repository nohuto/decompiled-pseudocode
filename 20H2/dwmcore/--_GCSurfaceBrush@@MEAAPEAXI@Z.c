/*
 * XREFs of ??_GCSurfaceBrush@@MEAAPEAXI@Z @ 0x18006CF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSurfaceBrush@@MEAA@XZ @ 0x18006CF84 (--1CSurfaceBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CSurfaceBrush *__fastcall CSurfaceBrush::`scalar deleting destructor'(CSurfaceBrush *this, char a2)
{
  unsigned int v4; // r8d

  CSurfaceBrush::~CSurfaceBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC8, v4);
    else
      operator delete(this);
  }
  return this;
}
