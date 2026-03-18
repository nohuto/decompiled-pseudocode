/*
 * XREFs of ??_GCRedirectVisual@@UEAAPEAXI@Z @ 0x1800CA050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x1800AB15C (--1CVisual@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRedirectVisual *__fastcall CRedirectVisual::`scalar deleting destructor'(CRedirectVisual *this, char a2)
{
  unsigned int v4; // r8d

  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x268, v4);
    else
      operator delete(this);
  }
  return this;
}
