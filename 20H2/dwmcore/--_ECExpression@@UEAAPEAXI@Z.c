/*
 * XREFs of ??_ECExpression@@UEAAPEAXI@Z @ 0x18006DB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CExpression@@UEAA@XZ @ 0x18006DD70 (--1CExpression@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CExpression *__fastcall CExpression::`vector deleting destructor'(CExpression *this, char a2)
{
  unsigned int v4; // r8d

  CExpression::~CExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1B8, v4);
    else
      operator delete(this);
  }
  return this;
}
