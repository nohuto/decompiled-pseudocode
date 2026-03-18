/*
 * XREFs of ??_ECMaskBrush@@MEAAPEAXI@Z @ 0x18006C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMaskBrush@@MEAA@XZ @ 0x18006C914 (--1CMaskBrush@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::`vector deleting destructor'(CMaskBrush *this, char a2)
{
  unsigned int v4; // r8d

  CMaskBrush::~CMaskBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88, v4);
    else
      operator delete(this);
  }
  return this;
}
