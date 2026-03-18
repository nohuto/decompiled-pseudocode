/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180094030
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18007C8D4 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRenderData *result; // rax

  *((_QWORD *)this + 7) = &CDropShadow::`vbtable'{for `CContent'};
  *((_QWORD *)this + 38) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 37) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 38) + 4LL) + 304) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)v2 = &CRenderData::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CSystemMemoryBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CRenderData::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 224;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 240;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_DWORD *)(v2 + 120) = 0;
  *(_QWORD *)(v2 + 72) = v2 + 64;
  *(_QWORD *)(v2 + 64) = v2 + 64;
  *(_QWORD *)(v2 + 88) = v2 + 80;
  *(_QWORD *)(v2 + 80) = v2 + 80;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_DWORD *)(v2 + 152) = 0;
  *(_QWORD *)(v2 + 160) = &CRenderDataBounds::`vftable';
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 1065353216LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 204) = 1065353216LL;
  *(_QWORD *)(v2 + 212) = 0LL;
  *(_DWORD *)(v2 + 220) = 0;
  *(_QWORD *)(v2 + 224) = 1065353216LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 244) = 1065353216;
  result = (CRenderData *)v2;
  *(_WORD *)(v2 + 248) = 32085;
  *(_DWORD *)(v2 + 252) = 0;
  *(_BYTE *)(v2 + 256) = 0;
  *(_WORD *)(v2 + 264) = 257;
  *(_BYTE *)(v2 + 266) = 0;
  return result;
}
