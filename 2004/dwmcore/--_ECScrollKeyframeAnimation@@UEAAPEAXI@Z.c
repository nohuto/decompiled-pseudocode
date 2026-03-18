/*
 * XREFs of ??_ECScrollKeyframeAnimation@@UEAAPEAXI@Z @ 0x18020DEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScrollKeyframeAnimation@@UEAA@XZ @ 0x18020DE44 (--1CScrollKeyframeAnimation@@UEAA@XZ.c)
 */

CScrollKeyframeAnimation *__fastcall CScrollKeyframeAnimation::`vector deleting destructor'(
        CScrollKeyframeAnimation *this,
        char a2)
{
  CScrollKeyframeAnimation::~CScrollKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x2D0);
    else
      operator delete(this);
  }
  return this;
}
