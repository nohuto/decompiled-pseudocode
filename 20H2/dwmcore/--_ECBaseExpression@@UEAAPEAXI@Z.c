/*
 * XREFs of ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801D9230
 * Callers:
 *     <none>
 * Callees:
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180070398 (--1CBaseExpression@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CBaseExpression *__fastcall CBaseExpression::`vector deleting destructor'(CBaseExpression *this, char a2)
{
  CBaseExpression::~CBaseExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x138);
    else
      operator delete(this);
  }
  return this;
}
