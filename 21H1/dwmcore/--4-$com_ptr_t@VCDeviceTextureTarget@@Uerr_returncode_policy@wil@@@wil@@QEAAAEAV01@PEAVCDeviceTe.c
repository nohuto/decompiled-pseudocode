/*
 * XREFs of ??4?$com_ptr_t@VCDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTextureTarget@@@Z @ 0x18002B6A8
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAV1@@Z @ 0x18002B4D4 (-Create@CSecondaryD2DBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD.c)
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x1800D6D94 (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800D7A08 (-ProcessSetDesktopTree@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERT.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800DEFD8 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE@@@Z @ 0x1800E0328 (-ProcessSetDesktopTree@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERT.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E8730 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18015968C (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetDesktopTree@CDDisplayRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z @ 0x180172C00 (-GetDesktopTree@CDDisplayRenderTarget@@UEBAJPEAPEAVCDesktopTree@@@Z.c)
 *     ?ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETFILTERLIST@@@Z @ 0x18018FA5C (-ProcessSetFilterList@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRE.c)
 *     ?ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE@@@Z @ 0x18019085C (-ProcessSetDesktopTree@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYREN.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x180252AF0 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

CRenderTargetBitmap **__fastcall wil::com_ptr_t<CDeviceTextureTarget,wil::err_returncode_policy>::operator=(
        CRenderTargetBitmap **a1,
        CMILCOMBase *a2)
{
  CRenderTargetBitmap *v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILCOMBase::InternalAddRef(a2);
  if ( v2 )
    CRenderTargetBitmap::Release(v2);
  return a1;
}
