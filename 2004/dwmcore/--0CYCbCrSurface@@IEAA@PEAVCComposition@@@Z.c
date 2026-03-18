/*
 * XREFs of ??0CYCbCrSurface@@IEAA@PEAVCComposition@@@Z @ 0x18016D0D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A2234 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CYCbCrSurface *__fastcall CYCbCrSurface::CYCbCrSurface(CYCbCrSurface *this, struct CComposition *a2)
{
  CYCbCrSurface *v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CYCbCrSurface *result; // rax

  *((_QWORD *)this + 7) = &CYCbCrSurface::`vbtable'{for `CContent'};
  *((_QWORD *)this + 16) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 15) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 16) + 4LL) + 128) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *((_QWORD *)v2 + 7);
  *(_QWORD *)v2 = &CYCbCrSurface::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v3 + 4) + 56) = &CYCbCrSurface::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(*((_QWORD *)v2 + 7) + 8LL) + 56) = &CYCbCrSurface::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)v2 + 7) + 4LL);
  *(_DWORD *)((char *)v2 + v4 + 52) = v4 - 48;
  v5 = *(int *)(*((_QWORD *)v2 + 7) + 8LL);
  result = v2;
  *(_DWORD *)((char *)v2 + v5 + 52) = v5 - 64;
  return result;
}
