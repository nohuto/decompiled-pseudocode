/*
 * XREFs of ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x1802A614C
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1802A50A8 (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A60F8 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032CF0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FFDD8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180199FD0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::ReleaseTexture(CDxHandleYUVBitmapRealization *this)
{
  CD3DResource *v2; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 48);
  *((_DWORD *)this + 98) = 0;
  v2 = (CD3DResource *)*((_QWORD *)this + 47);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(
      v2,
      (CDxHandleYUVBitmapRealization *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16));
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((volatile signed __int32 **)this + 47);
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 1);
}
