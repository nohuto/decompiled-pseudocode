/*
 * XREFs of ??_ECGlobalInputManager@@UEAAPEAXI@Z @ 0x1802205C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x180220AB8 (--1CInputManager@@MEAA@XZ.c)
 */

CGlobalInputManager *__fastcall CGlobalInputManager::`vector deleting destructor'(CGlobalInputManager *this, char a2)
{
  CInputManager::~CInputManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x128);
    else
      operator delete(this);
  }
  return this;
}
