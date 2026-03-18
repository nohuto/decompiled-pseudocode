/*
 * XREFs of ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x1801CD830
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x1801CD70C (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
 */

CInteractionTrackerBindingManager *__fastcall CInteractionTrackerBindingManager::`vector deleting destructor'(
        CInteractionTrackerBindingManager *this,
        char a2)
{
  CInteractionTrackerBindingManager::~CInteractionTrackerBindingManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
