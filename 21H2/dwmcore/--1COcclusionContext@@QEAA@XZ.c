/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18003EF58
 * Callers:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800325CC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003EBC0 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180043D50 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180044294 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180185698 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x180199050 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180062880 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
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
