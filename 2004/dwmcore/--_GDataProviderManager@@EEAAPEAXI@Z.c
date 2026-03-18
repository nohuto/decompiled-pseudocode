/*
 * XREFs of ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180166450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180166358 (--1DataProviderManager@@EEAA@XZ.c)
 */

DataProviderManager *__fastcall DataProviderManager::`scalar deleting destructor'(DataProviderManager *this, char a2)
{
  DataProviderManager::~DataProviderManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
