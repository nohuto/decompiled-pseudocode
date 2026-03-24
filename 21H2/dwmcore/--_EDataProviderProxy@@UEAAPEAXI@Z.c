/*
 * XREFs of ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x1801816E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x180181600 (--1DataProviderProxy@@UEAA@XZ.c)
 */

DataProviderProxy *__fastcall DataProviderProxy::`vector deleting destructor'(DataProviderProxy *this, char a2)
{
  DataProviderProxy::~DataProviderProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x90);
    else
      operator delete(this);
  }
  return this;
}
