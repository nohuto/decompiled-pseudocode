/*
 * XREFs of ??_GCKeyframeAnimation@@UEAAPEAXI@Z @ 0x180097A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800986C8 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CKeyframeAnimation *__fastcall CKeyframeAnimation::`scalar deleting destructor'(CKeyframeAnimation *this, char a2)
{
  unsigned int v4; // r8d

  CKeyframeAnimation::~CKeyframeAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x220, v4);
    else
      operator delete(this);
  }
  return this;
}
