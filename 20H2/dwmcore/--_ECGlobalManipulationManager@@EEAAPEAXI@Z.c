/*
 * XREFs of ??_ECGlobalManipulationManager@@EEAAPEAXI@Z @ 0x18021EAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGlobalManipulationManager@@EEAA@XZ @ 0x18021E860 (--1CGlobalManipulationManager@@EEAA@XZ.c)
 */

CGlobalManipulationManager *__fastcall CGlobalManipulationManager::`vector deleting destructor'(
        CGlobalManipulationManager *this,
        char a2)
{
  CGlobalManipulationManager::~CGlobalManipulationManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1A8);
    else
      operator delete(this);
  }
  return this;
}
