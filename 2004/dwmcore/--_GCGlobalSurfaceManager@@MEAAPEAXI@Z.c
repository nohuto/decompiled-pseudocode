/*
 * XREFs of ??_GCGlobalSurfaceManager@@MEAAPEAXI@Z @ 0x180165E00
 * Callers:
 *     ??_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z @ 0x1800EEE10 (--_ECGlobalSurfaceManager@@OBA@EAAPEAXI@Z.c)
 *     ??_ECGlobalSurfaceManager@@OGA@EAAPEAXI@Z @ 0x1800EEE20 (--_ECGlobalSurfaceManager@@OGA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180165A2C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::`scalar deleting destructor'(
        CGlobalSurfaceManager *this,
        char a2)
{
  CGlobalSurfaceManager::~CGlobalSurfaceManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x1F8);
    else
      operator delete(this);
  }
  return this;
}
