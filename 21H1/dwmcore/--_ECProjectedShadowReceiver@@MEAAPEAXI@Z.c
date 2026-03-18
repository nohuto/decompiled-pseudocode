/*
 * XREFs of ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x18000CB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18000CAF4 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CVisual **__fastcall CProjectedShadowReceiver::`vector deleting destructor'(CVisual **this, char a2)
{
  unsigned int v4; // r8d

  CProjectedShadowReceiver::~CProjectedShadowReceiver(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x70, v4);
    else
      operator delete(this);
  }
  return this;
}
