/*
 * XREFs of ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x18008BC30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CRedirectedVisualContent@@MEAA@XZ @ 0x18008C044 (--1CRedirectedVisualContent@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::`vector deleting destructor'(
        CRedirectedVisualContent *this,
        char a2)
{
  unsigned int v4; // r8d

  CRedirectedVisualContent::~CRedirectedVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x90, v4);
    else
      operator delete(this);
  }
  return this;
}
