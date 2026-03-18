/*
 * XREFs of ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C7FB0
 * Callers:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18001FE24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z @ 0x18003C150 (-GetD2DBitmapTarget@CRenderTargetBitmap@@UEAAJPEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18003DED0 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18003E0A0 (-GetCachedTexture@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z @ 0x1800941DC (-CreateDeviceBitmap@CGdiSpriteBitmap@@AEAAJPEAXU_LUID@@II@Z.c)
 *     ?UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ @ 0x1800947A4 (-UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ.c)
 *     ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x180094858 (-ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z @ 0x1800CDF8C (-CreateSectionBitmap@CGdiSpriteBitmap@@AEAAJPEAXII@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x1801C3064 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180260A50 (-HrFindInterface@CColorKeyBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z @ 0x180260D00 (-SetMargins@CColorKeyBitmapRealization@@UEAAXAEBU_MARGINS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
