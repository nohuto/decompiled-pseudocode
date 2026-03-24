/*
 * XREFs of ??_ECDynamicInlineStorage@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800D36B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

PrimitiveStorage::CDynamicInlineStorage *__fastcall PrimitiveStorage::CDynamicInlineStorage::`vector deleting destructor'(
        PrimitiveStorage::CDynamicInlineStorage *this,
        char a2,
        unsigned int a3)
{
  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x68, a3);
    else
      operator delete(this);
  }
  return this;
}
