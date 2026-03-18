/*
 * XREFs of ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1800107F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180010784 (--1CProjectedShadowReceiver@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
