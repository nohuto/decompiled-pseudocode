/*
 * XREFs of ??0COcclusionContext@@QEAA@XZ @ 0x18004B4A0
 * Callers:
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18003F318 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18004B760 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MAEBUWICRect@@W4DXGI_FORMAT@@_K@Z @ 0x1800507E0 (--0CaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@MA.c)
 *     ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x180051040 (--0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1800E9998 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180184B3C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 * Callees:
 *     ??0CLightStack@@QEAA@XZ @ 0x18004B674 (--0CLightStack@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18009F730 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

COcclusionContext *__fastcall COcclusionContext::COcclusionContext(COcclusionContext *this)
{
  COcclusionContext *result; // rax

  *(_QWORD *)this = &COcclusionContext::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 0;
  CLightStack::CLightStack((COcclusionContext *)((char *)this + 168));
  *((_DWORD *)this + 106) = 10;
  *((_QWORD *)this + 51) = (char *)this + 440;
  *((_QWORD *)this + 52) = (char *)this + 440;
  *(_QWORD *)((char *)this + 428) = 10LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_DWORD *)this + 206) = 0;
  *((_DWORD *)this + 212) = 10;
  *(_QWORD *)((char *)this + 852) = 10LL;
  *((_QWORD *)this + 104) = (char *)this + 864;
  *((_QWORD *)this + 105) = (char *)this + 864;
  *((_QWORD *)this + 133) = 0LL;
  `vector constructor iterator'(
    (char *)this + 1072,
    0x10uLL,
    8uLL,
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>);
  *((_DWORD *)this + 328) = 0;
  *((_DWORD *)this + 345) = 0;
  *((_QWORD *)this + 154) = 0LL;
  *((_DWORD *)this + 310) = 0x7FFFFFFF;
  *((_WORD *)this + 622) = 0;
  *((_QWORD *)this + 173) = (char *)this + 1392;
  *((_DWORD *)this + 348) = 0;
  *((_QWORD *)this + 182) = 0LL;
  *((_DWORD *)this + 366) = 0;
  *((_QWORD *)this + 184) = 0LL;
  *((_QWORD *)this + 186) = 0LL;
  *((_DWORD *)this + 370) = 0;
  *((_DWORD *)this + 374) = 0;
  *((_QWORD *)this + 188) = 0LL;
  *((_QWORD *)this + 190) = 0LL;
  *((_DWORD *)this + 378) = 0;
  *((_DWORD *)this + 382) = 0;
  *((_QWORD *)this + 192) = 0LL;
  *((_QWORD *)this + 194) = 0LL;
  *((_DWORD *)this + 386) = 0;
  *((_DWORD *)this + 390) = 0;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 197) = 0LL;
  memset_0((char *)this + 1072, 0, 0x80uLL);
  result = this;
  *((_OWORD *)this + 75) = 0LL;
  *((_OWORD *)this + 76) = 0LL;
  return result;
}
