/*
 * XREFs of ??_ECInteractionTrackerBindingManager@@UEAAPEAXI@Z @ 0x1801CF690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CInteractionTrackerBindingManager@@UEAA@XZ @ 0x1801CF56C (--1CInteractionTrackerBindingManager@@UEAA@XZ.c)
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
