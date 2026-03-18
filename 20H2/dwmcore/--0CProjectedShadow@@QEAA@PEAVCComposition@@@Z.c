/*
 * XREFs of ??0CProjectedShadow@@QEAA@PEAVCComposition@@@Z @ 0x18001DF08
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000BE38 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x1800A9D44 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CProjectedShadow *__fastcall CProjectedShadow::CProjectedShadow(CProjectedShadow *this, struct CComposition *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  CProjectedShadow *result; // rax

  *((_QWORD *)this + 7) = &CProjectedShadow::`vbtable'{for `CContent'};
  *((_QWORD *)this + 53) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 52) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 53) + 4LL) + 424) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2);
  v3 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)v2 = &CProjectedShadow::`vftable';
  *(_QWORD *)(*(int *)(v3 + 4) + v2 + 56) = &CProjectedShadow::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 56) + 8LL) + v2 + 56) = &CProjectedShadow::`vftable'{for `IContent'};
  v4 = *(int *)(*(_QWORD *)(v2 + 56) + 4LL);
  *(_DWORD *)(v4 + v2 + 52) = v4 - 344;
  v5 = *(int *)(*(_QWORD *)(v2 + 56) + 8LL);
  *(_DWORD *)(v5 + v2 + 52) = v5 - 360;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_DWORD *)(v2 + 88) = 0;
  *(_QWORD *)(v2 + 96) = 0LL;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 92) = 1065353216;
  *(_QWORD *)(v2 + 248) = v2 + 272;
  *(_QWORD *)(v2 + 256) = v2 + 272;
  *(_QWORD *)(v2 + 264) = v2 + 320;
  result = (CProjectedShadow *)v2;
  *(_QWORD *)(v2 + 360) = 0LL;
  *(_QWORD *)(v2 + 368) = 0LL;
  *(_QWORD *)(v2 + 376) = 0LL;
  return result;
}
