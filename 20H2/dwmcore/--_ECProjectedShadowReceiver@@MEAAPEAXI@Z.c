/*
 * XREFs of ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x18000FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x18000FF44 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
