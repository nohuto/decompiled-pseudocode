/*
 * XREFs of ??0CRedirectedVisualContent@@IEAA@PEAVCVisual@@@Z @ 0x18004386C
 * Callers:
 *     ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x1800436B4 (-ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISU.c)
 * Callees:
 *     ??0?$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCompositionSurfaceInfo@@@Z @ 0x180025B70 (--0-$com_ptr_t@VCCompositionSurfaceInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCComposition.c)
 *     ??0CContent@@IEAA@PEAVCComposition@@@Z @ 0x18009F004 (--0CContent@@IEAA@PEAVCComposition@@@Z.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::CRedirectedVisualContent(
        CRedirectedVisualContent *this,
        struct CComposition **a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9

  *((_QWORD *)this + 7) = &CRedirectedVisualContent::`vbtable'{for `CContent'};
  *((_QWORD *)this + 17) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 16) = &IContent::`vftable'{for `IContent'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 17) + 4LL) + 136) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CContent::CContent(this, a2[2]);
  v3 = *((_QWORD *)this + 7);
  *(_QWORD *)this = &CRedirectedVisualContent::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 56) = &CRedirectedVisualContent::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CRedirectedVisualContent::`vftable'{for `IContent'};
  v4 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v4 + 52) = v4 - 56;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 72;
  wil::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>::com_ptr_t<CCompositionSurfaceInfo,wil::err_returncode_policy>(
    (_QWORD *)this + 8,
    v5);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return this;
}
