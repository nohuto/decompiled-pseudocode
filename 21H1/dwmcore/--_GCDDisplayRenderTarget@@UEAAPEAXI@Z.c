/*
 * XREFs of ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x1801713B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800D47F4 (--1COverlayContext@@QEAA@XZ.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800D784C (--1CRenderTarget@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 */

void **__fastcall CDDisplayRenderTarget::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetBitmap *v4; // rcx
  CRenderTargetBitmap *v5; // rcx
  char *v6; // rcx

  COverlayContext::~COverlayContext(this + 22);
  v4 = (CRenderTargetBitmap *)this[21];
  if ( v4 )
    CRenderTargetBitmap::Release(v4);
  v5 = (CRenderTargetBitmap *)this[20];
  if ( v5 )
    CRenderTargetBitmap::Release(v5);
  v6 = (char *)this[19];
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
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
