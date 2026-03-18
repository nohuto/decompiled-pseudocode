/*
 * XREFs of ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801897A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801896A8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 */

COffScreenRenderTarget *__fastcall COffScreenRenderTarget::`vector deleting destructor'(
        COffScreenRenderTarget *this,
        char a2)
{
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x798);
    else
      operator delete(this);
  }
  return this;
}
