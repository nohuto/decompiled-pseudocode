/*
 * XREFs of ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVISwapChainRealization@@@Z @ 0x18009D0B4
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18009C84C (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180038944 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ??4?$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResource@@@Z @ 0x1800410A8 (--4-$com_ptr_t@VIBitmapResource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVIBitmapResourc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x18009D16C (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureRealization(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct ISwapChainRealization **a3)
{
  __int64 v3; // rax
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rbp
  struct ISwapChainRealization *v5; // rbx
  unsigned int v6; // edi
  struct ISwapChainRealization *Realization; // rax
  int v11; // eax
  __int64 v12; // rcx
  struct ISwapChainRealization *v13; // rax
  struct ISwapChainRealization *v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 2);
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 112);
  v5 = 0LL;
  v6 = 0;
  v14 = 0LL;
  if ( *((_QWORD *)this + 17) == v3 )
  {
    Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                    (CGlobalCompositionSurfaceInfo *)((char *)this + 112),
                    *((_DWORD *)a2 + 6));
    wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((__int64 *)&v14, (__int64)Realization);
    v5 = v14;
  }
  if ( !v5 )
  {
    v11 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v4, *((_QWORD *)a2 + 2));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xEEu, 0LL);
    }
    else
    {
      v13 = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(v4, *((_DWORD *)a2 + 6));
      wil::com_ptr_t<IBitmapResource,wil::err_returncode_policy>::operator=((__int64 *)&v14, (__int64)v13);
      v5 = v14;
    }
  }
  v14 = 0LL;
  *a3 = v5;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v14);
  return v6;
}
