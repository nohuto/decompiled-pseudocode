/*
 * XREFs of ??0CGenericInk@@QEAA@PEAVCComposition@@@Z @ 0x18016EDFC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18007C8D4 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CGenericInk *__fastcall CGenericInk::CGenericInk(CGenericInk *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rcx
  __int64 v4; // rcx
  _DWORD *v5; // rax

  *((_QWORD *)this + 7) = &CGenericInk::`vbtable'{for `CContent'};
  *((_QWORD *)this + 50) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 49) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 50) + 4LL) + 400) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)v2 = &CGenericInk::`vftable'{for `CContent'};
  *(_QWORD *)(v2 + 64) = &CGenericInk::`vftable'{for `IDirtyRectSource'};
  *(_QWORD *)(v2 + 72) = &CGenericInk::`vftable'{for `CSuperWetSource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 4LL) + v2 + 56) = &CGenericInk::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CGenericInk::`vftable'{for `IContent'};
  v3 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v3 + v2 + 52) = v3 - 320;
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 336;
  *(_QWORD *)(v2 + 128) = &CDeviceResourceTable<CD2DGenericInk,CGenericInk>::`vftable';
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 136) = v2;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_DWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_DWORD *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 248) = v2 + 256;
  *(_DWORD *)(v2 + 256) = 0;
  v5 = *(_DWORD **)(v2 + 248);
  *(_BYTE *)(v2 + 320) = 0;
  *v5 = 0;
  return (CGenericInk *)v2;
}
