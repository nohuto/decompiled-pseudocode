/*
 * XREFs of ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x18016CF50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderTarget@@MEAA@XZ @ 0x180026450 (--1CRenderTarget@@MEAA@XZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18002E7C4 (--1COverlayContext@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1C00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
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
