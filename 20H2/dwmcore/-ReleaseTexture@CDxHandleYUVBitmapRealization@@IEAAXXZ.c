/*
 * XREFs of ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802638EC
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x180262984 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180263898 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180054C20 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1B90 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180168860 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseTexture(CDxHandleYUVBitmapRealization *this)
{
  __int64 v2; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 44);
  *((_DWORD *)this + 90) = 0;
  v2 = *((_QWORD *)this + 43);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(
      (CD3DResource *)(v2 + 24),
      (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16));
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((CMILPoolResource **)this + 43);
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 1);
}
