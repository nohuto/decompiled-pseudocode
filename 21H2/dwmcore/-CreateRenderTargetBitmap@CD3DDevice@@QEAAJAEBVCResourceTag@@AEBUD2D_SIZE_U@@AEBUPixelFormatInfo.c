/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAB68
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003DF5C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x18005D0B4 (-CreateCachedTarget@CCachedVisualImage@@IEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BA950 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x1800F906C (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800FE0C4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801C1220 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180268E4C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18027DE10 (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x180292718 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006590C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x180067084 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800BAC5C (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetBitmap(
        CD3DDevice *a1,
        const struct CResourceTag *a2,
        const struct D2D_SIZE_U *a3,
        const struct PixelFormatInfo *a4,
        struct RenderTargetInfo *a5,
        int a6,
        struct IRenderTargetBitmap **a7)
{
  struct IRenderTargetBitmap **v7; // rsi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int DeviceTextureTarget; // eax
  __int64 v14; // rcx
  struct IDeviceTarget *v15; // rcx
  int v16; // eax
  __int64 v17; // rcx

  v7 = a7;
  *a7 = 0LL;
  v9 = *((_DWORD *)a1 + 272);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, &dword_1802E18D0, 2LL, v9, 0x408u);
  }
  else if ( a6 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CRenderTargetBitmapCache::GetCachedTargetBitmap)(
            (char *)a1 + 464,
            a2,
            *a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802E18D0, 2LL, v10, 0x411u);
  }
  else
  {
    a7 = 0LL;
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, (struct IDeviceTextureTarget **)&a7);
    v9 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802E18D0, 2LL, DeviceTextureTarget, 0x41Au);
    }
    else
    {
      if ( a7 )
        v15 = (struct IDeviceTarget *)((char *)a7 + *((int *)a7[1] + 6) + 8);
      else
        v15 = 0LL;
      v16 = CRenderTargetBitmap::Create(v15, v7);
      v9 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802E18D0, 2LL, v16, 0x41Du);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&a7);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)a1, v9, 0);
}
