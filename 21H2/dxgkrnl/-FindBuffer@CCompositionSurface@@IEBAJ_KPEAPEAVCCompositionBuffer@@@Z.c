/*
 * XREFs of ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00070D4
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z @ 0x1C0003964 (-ConfirmIndependentFlipEntry@CCompositionSurface@@QEAAJ_K00II0@Z.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z @ 0x1C0003CAC (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IIPEBIPEAH@Z.c)
 *     NtSetCompositionSurfaceBufferUsage @ 0x1C0003D20 (NtSetCompositionSurfaceBufferUsage.c)
 *     NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003EC0 (NtQueryCompositionSurfaceHDRMetaData.c)
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C00041B8 (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x1C0004F80 (-GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z @ 0x1C0005554 (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAPEAUHRGN__@@@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0005818 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C0005F00 (-GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C0006AB0 (-InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0015C60 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     NtSetCompositionSurfaceDirectFlipState @ 0x1C0021AB0 (NtSetCompositionSurfaceDirectFlipState.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C00760CC (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0076DF0 (-GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z.c)
 *     ?InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@@@Z @ 0x1C0077F18 (-InsertCompletedToken@CCompositionSurface@@IEAAJ_K0PEAUtagCloneableFlipTokenData@@PEAPEAVCToken@.c)
 *     ?NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z @ 0x1C0077FB4 (-NotifyTokenInFrame@CCompositionSurface@@IEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C0078040 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00783EC (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
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
  if ( *((_DWORD *)this + 22) )
  {
    v4 = (_QWORD **)((char *)this + 72);
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
