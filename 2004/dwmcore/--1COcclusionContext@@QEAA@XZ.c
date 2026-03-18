/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18009955C
 * Callers:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180035244 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180035BA0 (--1CVisualTree@@UEAA@XZ.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18003623C (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180037108 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801868E8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??_ECDDARenderTarget@@UEAAPEAXI@Z @ 0x18019A2B0 (--_ECDDARenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009A650 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(void **this)
{
  operator delete(this[194]);
  operator delete(this[190]);
  operator delete(this[186]);
  FastRegion::CRegion::FreeMemory(this + 173);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 100);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 51);
  CLightStack::~CLightStack((CLightStack *)(this + 21));
  operator delete(this[19]);
  operator delete(this[13]);
  operator delete(this[5]);
}
