/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0010E70
 * Callers:
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C000DC10 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C000E0D0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C000E3C8 (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C000E95C (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000EE20 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C000F640 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C000FE48 (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0010014 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0010760 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4BufferFlipMode@@@Z @ 0x1C001BEBC (-UpdateStatsAndCustomPresentDuration@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@IW4B.c)
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C218 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C2E0 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C001C528 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C001C62C (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x1C001D7DC (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C001D890 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C001DD68 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C006315C (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0065380 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C0065448 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C00654E4 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C006579C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0065878 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::FindBuffer(
        CCompositionSurface *this,
        __int64 a2,
        struct CCompositionBuffer **a3)
{
  unsigned int v3; // r9d
  _QWORD **v4; // rcx
  _QWORD *i; // rax

  *a3 = 0LL;
  v3 = -1073741275;
  if ( *((_DWORD *)this + 20) )
  {
    v4 = (_QWORD **)((char *)this + 64);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
    {
      if ( *(i - 1) == a2 )
      {
        *a3 = (struct CCompositionBuffer *)(i - 3);
        return 0;
      }
    }
  }
  return v3;
}
