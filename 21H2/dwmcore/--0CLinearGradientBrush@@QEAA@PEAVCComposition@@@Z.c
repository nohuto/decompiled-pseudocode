/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1801D27CC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ @ 0x1801B58F8 (-EnsureDrawlistBrush@CLinearGradientLegacyMilBrush@@QEAAJXZ.c)
 * Callees:
 *     ??0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z @ 0x1801E69D8 (--0CGradientBrush@@IEAA@PEAVCComposition@@_N@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 29) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 28) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 29) + 4LL) + 232) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CGradientBrush::CGradientBrush(this, a2, 1);
  *(_QWORD *)this = &CLinearGradientBrush::`vftable'{for `CBrush'};
  *((_QWORD *)this + 10) = &CLinearGradientBrush::`vftable'{for `CGradientSource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CLinearGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CLinearGradientBrush::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 152;
  v4 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 168;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 1065353216LL;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 49) = 0;
  return this;
}
