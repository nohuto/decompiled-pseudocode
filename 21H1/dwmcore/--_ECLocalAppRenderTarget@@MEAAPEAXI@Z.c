/*
 * XREFs of ??_ECLocalAppRenderTarget@@MEAAPEAXI@Z @ 0x18018E8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18018E7CC (--1CLocalAppRenderTarget@@MEAA@XZ.c)
 */

CLocalAppRenderTarget *__fastcall CLocalAppRenderTarget::`vector deleting destructor'(
        CLocalAppRenderTarget *this,
        char a2)
{
  CLocalAppRenderTarget::~CLocalAppRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xE8);
    else
      operator delete(this);
  }
  return this;
}
