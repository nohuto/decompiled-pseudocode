/*
 * XREFs of ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800329A8
 * Callers:
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180032214 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18008CF18 (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800C7514 (-UpdateFeatureLevels@CDeviceManager@@SAXAEBV-$span@U_LUID@@$0-0@gsl@@@Z.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CF6C8 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801BCECC (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801BD14C (-GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResour.c)
 *     ?EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801BE24C (-EnsureMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ @ 0x1801BE9FC (-UpdateMipmapSurface@CCompositionMipmapSurface@@AEAAJXZ.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x1801FC754 (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAvailableDevice@CDeviceManager@@AEBA?AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180034868 (-GetAvailableDevice@CDeviceManager@@AEBA-AW4DeviceStatus@1@U_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetExistingDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  unsigned int v3; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v9 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CDeviceManager::GetAvailableDevice)(v6, a2, a3) != 1 )
  {
    v3 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802ADB18, 2u, -2003304307, 0xD4u, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v3;
}
