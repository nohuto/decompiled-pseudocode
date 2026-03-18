/*
 * XREFs of ??0CRadialGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x18016F544
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801EA460 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CRadialGradientBrush *__fastcall CRadialGradientBrush::CRadialGradientBrush(
        CRadialGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  CRadialGradientBrush *result; // rax

  *((_QWORD *)this + 7) = &CRadialGradientBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 31) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 30) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 31) + 4LL) + 248) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CGradientBrush::CGradientBrush(this, a2, 0);
  *(_QWORD *)this = &CRadialGradientBrush::`vftable'{for `CBrush'};
  *((_QWORD *)this + 10) = &CRadialGradientBrush::`vftable'{for `CGradientSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CRadialGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CRadialGradientBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 168;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 184;
  *((_DWORD *)this + 48) = 1056964608;
  *((_DWORD *)this + 49) = 1056964608;
  *((_DWORD *)this + 50) = 1056964608;
  *(_QWORD *)((char *)this + 204) = 1056964608LL;
  result = this;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 72) = 1;
  return result;
}
