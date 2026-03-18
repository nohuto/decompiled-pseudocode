/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x18025358C
 * Callers:
 *     ??_ECHolographicManager@@G7EAAPEAXI@Z @ 0x1800EFAD0 (--_ECHolographicManager@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x180253474 (--1CHolographicManager@@EEAA@XZ.c)
 */

CHolographicManager *__fastcall CHolographicManager::`vector deleting destructor'(CHolographicManager *this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xF8);
    else
      operator delete(this);
  }
  return this;
}
