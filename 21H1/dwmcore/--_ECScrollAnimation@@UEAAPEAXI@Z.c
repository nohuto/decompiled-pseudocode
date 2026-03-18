/*
 * XREFs of ??_ECScrollAnimation@@UEAAPEAXI@Z @ 0x180205230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1802051E0 (--1CScrollAnimation@@UEAA@XZ.c)
 */

CScrollAnimation *__fastcall CScrollAnimation::`vector deleting destructor'(CScrollAnimation *this, char a2)
{
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1B0);
    else
      operator delete(this);
  }
  return this;
}
