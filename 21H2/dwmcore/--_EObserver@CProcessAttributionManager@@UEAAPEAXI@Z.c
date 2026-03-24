/*
 * XREFs of ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x180151CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180151BA8 (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 */

CProcessAttributionManager **__fastcall CProcessAttributionManager::Observer::`vector deleting destructor'(
        CProcessAttributionManager **this,
        char a2)
{
  CProcessAttributionManager::Observer::~Observer(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x28);
    else
      operator delete(this);
  }
  return this;
}
