/*
 * XREFs of ??_ECExpressionManager@@UEAAPEAXI@Z @ 0x1801AC800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801AC6EC (--1CExpressionManager@@UEAA@XZ.c)
 */

CExpressionManager *__fastcall CExpressionManager::`vector deleting destructor'(CExpressionManager *this, char a2)
{
  CExpressionManager::~CExpressionManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1F0);
    else
      operator delete(this);
  }
  return this;
}
