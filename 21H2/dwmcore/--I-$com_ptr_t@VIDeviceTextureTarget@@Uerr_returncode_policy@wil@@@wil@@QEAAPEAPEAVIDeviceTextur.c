/*
 * XREFs of ??I?$com_ptr_t@VIDeviceTextureTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVIDeviceTextureTarget@@XZ @ 0x180279F94
 * Callers:
 *     ?EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ @ 0x180292718 (-EnsureTargetBitmap@CConversionSwapChain@@IEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IDeviceTextureTarget,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
  {
    v3 = *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + v2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return a1;
}
