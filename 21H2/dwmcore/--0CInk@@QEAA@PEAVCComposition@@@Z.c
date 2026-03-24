/*
 * XREFs of ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x18016ADC4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CInk *__fastcall CInk::CInk(CInk *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 7) = &CInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 28) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 27) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 28) + 4LL) + 224) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)v2 = &CInk::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CInk::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CInk::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 144;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 160;
  *(_QWORD *)(v2 + 64) = &CDeviceResourceTable<CD2DEffect,CFilterEffect>::`vftable';
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 72) = v2;
  *(_QWORD *)(v2 + 120) = 0LL;
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_DWORD *)(v2 + 144) = 0;
  return (CInk *)v2;
}
