/*
 * XREFs of ??0CBackdropBrush@@IEAA@PEAVCComposition@@@Z @ 0x1800D4E18
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A2234 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CBackdropBrush *__fastcall CBackdropBrush::CBackdropBrush(CBackdropBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CBackdropBrush *result; // rax

  *((_QWORD *)this + 7) = &CWindowBackdropBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 14) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 13) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 14) + 4LL) + 112) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)v2 = &CBackdropBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CBackdropBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CBackdropBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 32;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CBackdropBrush *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 48;
  return result;
}
