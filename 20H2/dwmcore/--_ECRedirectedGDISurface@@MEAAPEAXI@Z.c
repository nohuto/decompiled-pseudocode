/*
 * XREFs of ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x1800CD400
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??1CRedirectedGDISurface@@MEAA@XZ @ 0x1800CD444 (--1CRedirectedGDISurface@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRedirectedGDISurface *__fastcall CRedirectedGDISurface::`vector deleting destructor'(
        CRedirectedGDISurface *this,
        char a2)
{
  unsigned int v4; // r8d

  CRedirectedGDISurface::~CRedirectedGDISurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x30, v4);
    else
      operator delete(this);
  }
  return this;
}
