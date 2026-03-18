/*
 * XREFs of ??_ECInteractionTrackerScaleAnimation@@UEAAPEAXI@Z @ 0x180207950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1802051E0 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x1802071DC (--1CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerScaleAnimation *__fastcall CInteractionTrackerScaleAnimation::`vector deleting destructor'(
        CInteractionTrackerScaleAnimation *this,
        char a2)
{
  CMotion::~CMotion((CInteractionTrackerScaleAnimation *)((char *)this + 432));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x268);
    else
      operator delete(this);
  }
  return this;
}
