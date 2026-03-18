/*
 * XREFs of ??0CMaskBrush@@IEAA@PEAVCComposition@@@Z @ 0x18006CE84
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A9D44 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CMaskBrush *__fastcall CMaskBrush::CMaskBrush(CMaskBrush *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CMaskBrush *result; // rax

  *((_QWORD *)this + 7) = &CMaskBrush::`vbtable'{for `CContent'};
  *((_QWORD *)this + 16) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 15) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 16) + 4LL) + 128) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)v2 = &CMaskBrush::`vftable';
  v3 = *(_QWORD *)(v2 + 56);
  *(_BYTE *)(v2 + 72) = 0;
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CMaskBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CMaskBrush::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 48;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  result = (CMaskBrush *)v2;
  *(_DWORD *)(v5 + v2 + 52) = v5 - 64;
  return result;
}
