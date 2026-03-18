/*
 * XREFs of ?EnsureHDRMetaData@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180021164
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x180037BA4 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180044C44 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnsureHDRMetaData(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  _DWORD *v1; // rdi
  int v2; // ebx
  int CompositionSurfaceHDRMetaData; // eax
  unsigned int v4; // ecx

  v1 = (_DWORD *)((char *)this + 104);
  v2 = 0;
  CompositionSurfaceHDRMetaData = NtQueryCompositionSurfaceHDRMetaData(
                                    *(_QWORD *)(*(_QWORD *)this + 32LL),
                                    (char *)this + 24,
                                    (char *)this + 104,
                                    28LL,
                                    (char *)this + 108);
  if ( CompositionSurfaceHDRMetaData < 0 )
  {
    v2 = CompositionSurfaceHDRMetaData | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, CompositionSurfaceHDRMetaData | 0x10000000, 0x4E7u, 0LL);
    if ( v2 < 0 )
      *v1 = 0;
  }
  return (unsigned int)v2;
}
