/*
 * XREFs of ??_ECColorBrush@@MEAAPEAXI@Z @ 0x1800924D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CBrush@@MEAA@XZ @ 0x18009443C (--1CBrush@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CColorBrush *__fastcall CColorBrush::`vector deleting destructor'(CColorBrush *this, char a2)
{
  unsigned int v4; // r8d

  CBrush::~CBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88, v4);
    else
      operator delete(this);
  }
  return this;
}
