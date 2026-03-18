/*
 * XREFs of ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x180069980
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180068FF4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVISwapChainRealization@@@Z @ 0x180069AA4 (--4-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVISwapCha.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x180069B00 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureRealization(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2,
        struct ISwapChainRealization **a3)
{
  __int64 v3; // rax
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rbp
  struct ISwapChainRealization *v5; // rbx
  unsigned int v6; // edi
  struct ISwapChainRealization *Realization; // rax
  int v11; // eax
  unsigned int v12; // ecx
  struct ISwapChainRealization *v13; // rax
  struct ISwapChainRealization *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 88);
  v5 = 0LL;
  v6 = 0;
  v14 = 0LL;
  if ( *((_QWORD *)this + 14) == v3 )
  {
    Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                    (CGlobalCompositionSurfaceInfo *)((char *)this + 88),
                    *((_DWORD *)a2 + 6));
    wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v14, Realization);
    v5 = v14;
  }
  if ( !v5 )
  {
    v11 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v4, *((_QWORD *)a2 + 2));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xDBu, 0LL);
    }
    else
    {
      v13 = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(v4, *((_DWORD *)a2 + 6));
      wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v14, v13);
      v5 = v14;
    }
  }
  v14 = 0LL;
  *a3 = v5;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v6;
}
