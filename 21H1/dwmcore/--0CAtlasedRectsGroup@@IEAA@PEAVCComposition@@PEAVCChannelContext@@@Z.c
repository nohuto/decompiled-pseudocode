/*
 * XREFs of ??0CAtlasedRectsGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x180092514
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18007C8D4 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CAtlasedRectsGroup *__fastcall CAtlasedRectsGroup::CAtlasedRectsGroup(
        CAtlasedRectsGroup *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  CAtlasedRectsGroup *result; // rax

  *((_QWORD *)this + 7) = &CAtlasedRectsGroup::`vbtable'{for `CContent'};
  *((_QWORD *)this + 18) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 17) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 18) + 4LL) + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v4 = *(_QWORD *)(v3 + 56);
  *(_QWORD *)v3 = &CAtlasedRectsGroup::`vftable';
  *(_QWORD *)(*(int *)(v4 + 4) + v3 + 56) = &CAtlasedRectsGroup::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v3 + 56) + 8LL) + v3 + 56) = &CAtlasedRectsGroup::`vftable'{for `IContent'};
  v5 = *(int *)(*(_QWORD *)(v3 + 56) + 4LL);
  *(_DWORD *)(v5 + v3 + 52) = v5 - 64;
  v6 = *(int *)(*(_QWORD *)(v3 + 56) + 8LL);
  *(_DWORD *)(v6 + v3 + 52) = v6 - 80;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  result = (CAtlasedRectsGroup *)v3;
  *(_BYTE *)(v3 + 104) = 1;
  return result;
}
