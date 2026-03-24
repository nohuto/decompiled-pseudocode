/*
 * XREFs of ??_ECInteractionTrackerPositionAnimation@@UEAAPEAXI@Z @ 0x1802055E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180203530 (--1CScrollAnimation@@UEAA@XZ.c)
 *     ??1CMotion@@QEAA@XZ @ 0x18020559C (--1CMotion@@QEAA@XZ.c)
 */

CInteractionTrackerPositionAnimation *__fastcall CInteractionTrackerPositionAnimation::`vector deleting destructor'(
        CInteractionTrackerPositionAnimation *this,
        char a2)
{
  CMotion::~CMotion((CInteractionTrackerPositionAnimation *)((char *)this + 432));
  CScrollAnimation::~CScrollAnimation(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x270);
    else
      operator delete(this);
  }
  return this;
}
