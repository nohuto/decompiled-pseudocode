/*
 * XREFs of ??_ECHolographicExclusiveMode@@MEAAPEAXI@Z @ 0x1802575C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicExclusiveMode@@MEAA@XZ @ 0x180257570 (--1CHolographicExclusiveMode@@MEAA@XZ.c)
 */

CHolographicExclusiveMode *__fastcall CHolographicExclusiveMode::`vector deleting destructor'(
        CHolographicExclusiveMode *this,
        char a2)
{
  CHolographicExclusiveMode::~CHolographicExclusiveMode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x60);
    else
      operator delete(this);
  }
  return this;
}
