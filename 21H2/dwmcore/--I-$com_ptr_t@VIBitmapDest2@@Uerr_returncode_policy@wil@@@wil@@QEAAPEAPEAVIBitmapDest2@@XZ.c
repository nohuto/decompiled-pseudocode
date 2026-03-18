/*
 * XREFs of ??I?$com_ptr_t@VIBitmapDest2@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIBitmapDest2@@XZ @ 0x180104FC4
 * Callers:
 *     ?SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802946B0 (-SetAlphaMode@CLegacyRemotingSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180294750 (-SetColorSpace@CLegacyRemotingSwapChain@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IBitmapDest2,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
