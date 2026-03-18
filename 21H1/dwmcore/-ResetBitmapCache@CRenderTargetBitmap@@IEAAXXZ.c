/*
 * XREFs of ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180033028
 * Callers:
 *     ?SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180030910 (-SetColorSpace@CRenderTargetBitmap@@UEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x180030980 (-SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 *     ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x1800309F0 (-SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z.c)
 *     ?SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z @ 0x180031E7C (-SetPurpose@CScratchRenderTargetBitmap@@QEAAXAEBVCResourceTag@@_N@Z.c)
 *     ?SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180032D80 (-SetAlphaMode@CRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     ?SetProtected@CRenderTargetBitmap@@UEAAX_N@Z @ 0x1800D1CF0 (-SetProtected@CRenderTargetBitmap@@UEAAX_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180033098 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ResetBitmapCache(CRenderTargetBitmap *this)
{
  struct ID2DBitmapCacheSource *v1; // rdx
  __int64 v3; // rcx
  void (__fastcall ***v4)(_QWORD, GUID *, struct ID2DBitmapCacheSource **); // rcx
  struct ID2DBitmapCacheSource *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = *((_QWORD *)this + 17);
  v5 = 0LL;
  if ( v3 && !*((_BYTE *)this + 144) )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))(*(int *)(*(_QWORD *)(v3 + 8) + 4LL)
                                                                                + v3
                                                                                + 8);
    (**v4)(v4, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v5);
    v1 = v5;
  }
  CD2DBitmapCache::InitializeCache(this, v1);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v5);
}
