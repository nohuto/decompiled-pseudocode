/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x180093A80
 * Callers:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x18008C504 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008E170 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18008E8AC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801896A8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x18019CE90 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x180094E14 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  operator delete(this[194]);
  operator delete(this[190]);
  operator delete(this[186]);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 173));
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 100);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 51);
  CLightStack::~CLightStack((CLightStack *)(this + 21));
  operator delete(this[19]);
  operator delete(this[13]);
  operator delete(this[5]);
}
