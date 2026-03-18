/*
 * XREFs of ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801BEA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801BE934 (--1CConditionalExpression@@UEAA@XZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::`vector deleting destructor'(
        CConditionalExpression *this,
        char a2)
{
  CConditionalExpression::~CConditionalExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x168);
    else
      operator delete(this);
  }
  return this;
}
