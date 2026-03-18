/*
 * XREFs of ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x180258680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x18025857C (--1CHolographicInteropTarget@@MEAA@XZ.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::`scalar deleting destructor'(
        CHolographicInteropTarget *this,
        char a2)
{
  CHolographicInteropTarget::~CHolographicInteropTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x118);
    else
      operator delete(this);
  }
  return this;
}
