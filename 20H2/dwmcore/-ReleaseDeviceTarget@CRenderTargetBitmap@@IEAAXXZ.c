/*
 * XREFs of ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x18006C48C
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18001F3B8 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18006C4F8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ?InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z @ 0x1800C721C (-InvalidateDecodeBitmap@CBitmapRealization@@QEAAX_N@Z.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180263CAC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C19D4 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::ReleaseDeviceTarget(CRenderTargetBitmap *this)
{
  char *v1; // rdi
  __int64 v3; // r8
  __int64 v4; // rcx

  v1 = (char *)this + 136;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    v4 = *(int *)(*(_QWORD *)(v3 + 8) + 8LL) + v3 + 8;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 48LL))(
      v4,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
  CD2DBitmapCache::InitializeCache(this, 0LL);
}
