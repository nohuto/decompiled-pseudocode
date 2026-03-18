/*
 * XREFs of ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180168FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180168EB8 (--1DataProviderManager@@EEAA@XZ.c)
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
