/*
 * XREFs of ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x18016E820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800249C8 (--1COverlayContext@@QEAA@XZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180026424 (--1CRenderTarget@@MEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18003CAF0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

COverlayContext **__fastcall CDDisplayRenderTarget::`scalar deleting destructor'(COverlayContext **this, char a2)
{
  CRenderTargetBitmap *v4; // rcx
  CRenderTargetBitmap *v5; // rcx
  COverlayContext *v6; // rcx

  COverlayContext::~COverlayContext(this + 22);
  v4 = this[21];
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  v5 = this[20];
  if ( v5 )
    CRenderTargetBitmap::Release(v5);
  v6 = this[19];
  if ( (unsigned __int64)v6 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v6);
  CRenderTarget::~CRenderTarget((CRenderTarget *)this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers((CDrawListPolygonBuilder *)this, (const struct D2D1_BEZIER_SEGMENT *)0x4908);
    else
      operator delete(this);
  }
  return this;
}
