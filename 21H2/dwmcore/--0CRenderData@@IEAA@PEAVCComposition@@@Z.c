/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x180043CA0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x180049B98 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRenderData *result; // rax

  *((_QWORD *)this + 8) = &CRenderData::`vbtable'{for `CContent'};
  *((_QWORD *)this + 42) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 41) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 42) + 4LL) + 336) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 64);
  *(_QWORD *)v2 = &CRenderData::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 64) = &CRenderData::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 64) + 8LL) + v2 + 64) = &CRenderData::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 64) + 4LL);
  *(_DWORD *)(v4 + v2 + 60) = v4 - 248;
  v5 = *(int *)(*(_QWORD *)(v2 + 64) + 8LL);
  *(_DWORD *)(v5 + v2 + 60) = v5 - 264;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v2 + 112) = 0LL;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_DWORD *)(v2 + 128) = 0;
  *(_QWORD *)(v2 + 80) = v2 + 72;
  *(_QWORD *)(v2 + 72) = v2 + 72;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 96) = v2 + 88;
  *(_QWORD *)(v2 + 88) = v2 + 88;
  *(_DWORD *)(v2 + 160) = 0;
  *(_QWORD *)(v2 + 192) = &CRenderDataBounds::`vftable';
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 1065353216LL;
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  *(_QWORD *)(v2 + 236) = 1065353216LL;
  *(_QWORD *)(v2 + 244) = 0LL;
  *(_DWORD *)(v2 + 252) = 0;
  *(_QWORD *)(v2 + 256) = 1065353216LL;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = 1065353216;
  LOBYTE(v3) = *(_BYTE *)(v2 + 281);
  *(_BYTE *)(v2 + 280) = 85;
  *(_BYTE *)(v2 + 281) = v3 & 0xC0 | 0x17;
  result = (CRenderData *)v2;
  *(_DWORD *)(v2 + 284) = 0;
  *(_BYTE *)(v2 + 288) = 0;
  *(_WORD *)(v2 + 296) = 257;
  *(_BYTE *)(v2 + 298) = 0;
  return result;
}
