/*
 * XREFs of ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x1801E54B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CProjectedShadowCaster@@MEAA@XZ @ 0x1801E53C0 (--1CProjectedShadowCaster@@MEAA@XZ.c)
 */

CProjectedShadowCaster *__fastcall CProjectedShadowCaster::`scalar deleting destructor'(
        CProjectedShadowCaster *this,
        char a2)
{
  CProjectedShadowCaster::~CProjectedShadowCaster(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x80);
    else
      operator delete(this);
  }
  return this;
}
