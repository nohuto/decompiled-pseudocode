/*
 * XREFs of ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801D3BC0
 * Callers:
 *     ??_ECLinearGradientBrush@@WFA@EAAPEAXI@Z @ 0x1800F0D40 (--_ECLinearGradientBrush@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGradientBrush@@MEAA@XZ @ 0x1801E7B94 (--1CGradientBrush@@MEAA@XZ.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::`vector deleting destructor'(
        CLinearGradientBrush *this,
        char a2)
{
  CGradientBrush::~CGradientBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xF0);
    else
      operator delete(this);
  }
  return this;
}
