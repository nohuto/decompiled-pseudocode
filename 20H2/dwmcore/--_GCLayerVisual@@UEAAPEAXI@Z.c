/*
 * XREFs of ??_GCLayerVisual@@UEAAPEAXI@Z @ 0x1800D0E80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800D0EC4 (--1CLayerVisual@@UEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CLayerVisual *__fastcall CLayerVisual::`scalar deleting destructor'(CLayerVisual *this, char a2)
{
  unsigned int v4; // r8d

  CLayerVisual::~CLayerVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x280, v4);
    else
      operator delete(this);
  }
  return this;
}
