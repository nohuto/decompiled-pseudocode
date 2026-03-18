/*
 * XREFs of ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180236EC8
 * Callers:
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DEffect@@@Z @ 0x18000FFA0 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@@@QEAAJPEAVCD3DDe.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x18004B0A4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@@@Q.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD3DPixelShader@@@Z @ 0x18004C100 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@@@QEAAJPEAVC.c)
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18008FFF8 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x180169DD4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18018740C (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?GetDevice@CRemoteAppRenderTarget@@UEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801875F0 (-GetDevice@CRemoteAppRenderTarget@@UEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ @ 0x18018BBAC (-EnsureSwapChain@CLocalAppRenderTarget@@IEAAJXZ.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801C4174 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3D.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DInk@@@Z @ 0x1801C6518 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAAJPEAVCD3DDevice@@PEAPEA.c)
 * Callees:
 *     ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x1800343F0 (-GetPrimaryAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 */

__int64 __fastcall CDeviceManager::GetDefaultDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  CDeviceManager *v3; // rcx
  unsigned int v4; // ebx
  int Device; // eax
  __int64 v6; // rcx
  struct _LUID v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (struct _LUID)this;
  *a2 = 0LL;
  CDisplayManager::GetPrimaryAdapterLuid(this, &v8);
  if ( v8 == __PAIR64__(v8.LowPart, 0) )
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_1802EE920, 3u, -2003304442, 0x8Eu, 0LL);
  }
  else
  {
    Device = CDeviceManager::GetDevice(v3, v8, a2);
    v4 = Device;
    if ( Device < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EE920, 3u, Device, 0x8Au, 0LL);
  }
  return v4;
}
