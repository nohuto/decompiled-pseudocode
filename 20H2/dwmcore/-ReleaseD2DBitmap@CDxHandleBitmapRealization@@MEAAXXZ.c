/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180261D60
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180262500 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180073BD4 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1B90 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 44);
  v2 = *((_QWORD *)this + 43);
  *((_DWORD *)this + 90) = 0;
  if ( v2 )
  {
    v3 = *(int *)(*(_QWORD *)(v2 + 16) + 8LL) + v2 + 16;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48LL))(
      v3,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    v4 = *((_QWORD *)this + 43);
    *((_QWORD *)this + 43) = 0LL;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    CD2DBitmapCache::InitializeCache(this, 0LL);
  }
  CBitmapRealization::InvalidateDecodeBitmap(this, 1);
}
