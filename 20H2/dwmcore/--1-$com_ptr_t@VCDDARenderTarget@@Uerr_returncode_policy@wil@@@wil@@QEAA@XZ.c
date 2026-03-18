/*
 * XREFs of ??1?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18016B6C0
 * Callers:
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E9B88 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::~com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>(
        CRenderTargetBitmap **a1)
{
  CRenderTargetBitmap *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CRenderTargetBitmap::Release(v1);
  return result;
}
