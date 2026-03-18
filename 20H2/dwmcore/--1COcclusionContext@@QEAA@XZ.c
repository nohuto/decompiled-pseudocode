/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18004BAF8
 * Callers:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18003F1BC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x1800508F0 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180050E34 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180184C68 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x180198630 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x18006DC90 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
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
