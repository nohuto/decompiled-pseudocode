/*
 * XREFs of ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8
 * Callers:
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x180005234 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x180031018 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18003DAFC (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800F56A8 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18020BADC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18020BD90 (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18020CF3C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x18020D720 (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB2AC (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceManager::GetExistingDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  unsigned int v3; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v9 = &stru_1803D75A8;
  EnterCriticalSection(&stru_1803D75A8);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CDeviceManager::GetAvailableDevice)(v6, a2, a3) != 1 )
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E18D0, 2LL, -2003304307, 0xEBu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v3;
}
