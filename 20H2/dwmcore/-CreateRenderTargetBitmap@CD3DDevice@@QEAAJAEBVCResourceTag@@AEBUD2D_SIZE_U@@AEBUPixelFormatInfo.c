/*
 * XREFs of ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BC74
 * Callers:
 *     ?EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ @ 0x18000632C (-EnsureBlackBitmapTargets@CD3DDevice@@AEAAJXZ.c)
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18003D42C (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18004C300 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006AD90 (-CreateBitmap@CExternalLayer@@KAJAEBVCResourceTag@@AEBUMilPointAndSizeL@@AEBUPixelFormatInfo@@AE.c)
 *     ?CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTarget@1@@Z @ 0x1800C87F8 (-CreateCachedTarget@CCachedVisualImage@@AEAAJUD2D_SIZE_U@@AEBVRenderTargetInfo@@PEAPEAVCCachedTa.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DFDF4 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180175CA8 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180184E40 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x180249A60 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x18024C948 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18004FA2C (-Create@CRenderTargetBitmap@@SAJPEAVIDeviceTarget@@PEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BD68 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D2964 (-CreateDeviceTextureTarget@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInf.c)
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
  v9 = *((_DWORD *)a1 + 282);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, &dword_1802AA538, 2u, v9, 0x5D7u, 0LL);
  }
  else if ( a6 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CRenderTargetBitmapCache::GetCachedTargetBitmap)(
            (char *)a1 + 512,
            a2,
            *a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802AA538, 2u, v10, 0x5E0u, 0LL);
  }
  else
  {
    a7 = 0LL;
    DeviceTextureTarget = CD3DDevice::CreateDeviceTextureTarget(a1, a2, a3, a4, a5, (struct IDeviceTextureTarget **)&a7);
    v9 = DeviceTextureTarget;
    if ( DeviceTextureTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802AA538, 2u, DeviceTextureTarget, 0x5E9u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802AA538, 2u, v16, 0x5ECu, 0LL);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&a7);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(a1, (unsigned int)v9, 0LL);
}
