/*
 * XREFs of ??_GCRenderTarget@@MEAAPEAXI@Z @ 0x18016F4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180026424 (--1CRenderTarget@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

CRenderTarget *__fastcall CRenderTarget::`scalar deleting destructor'(CRenderTarget *this, char a2)
{
  CRenderTarget::~CRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0xC8);
    else
      operator delete(this);
  }
  return this;
}
