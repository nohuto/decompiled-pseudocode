/*
 * XREFs of ?ReleaseBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x18008FED8
 * Callers:
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ @ 0x18008FE84 (-ReleaseBitmapResources@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x180090360 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 *     ?NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C5EA0 (-NotifyInvalidResource@CGdiSpriteBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C14BC (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CGdiSpriteBitmap::ReleaseBitmapRealization(CGdiSpriteBitmap *this)
{
  char *v1; // rbx
  __int64 v3; // rcx
  bool v4; // si
  __int64 *v5; // rbp
  __int64 *v6; // rbx
  bool result; // al
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this + 480;
  v3 = *((_QWORD *)this + 60);
  v4 = 0;
  if ( v3 )
  {
    v9 = 0LL;
    v8 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v3 + 8) + 4LL) + v3 + 8);
    if ( (**v8)(v8, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v9) >= 0 )
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v9 + 48LL))(v9, (char *)this + 72);
    wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(v1);
    *((_QWORD *)this + 50) = 0LL;
    v4 = 1;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v9);
  }
  v5 = (__int64 *)*((_QWORD *)this + 62);
  v6 = (__int64 *)*((_QWORD *)this + 61);
  if ( v6 != v5 )
  {
    do
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v6++);
    while ( v6 != v5 );
    v6 = (__int64 *)*((_QWORD *)this + 61);
  }
  result = v4;
  *((_QWORD *)this + 62) = v6;
  return result;
}
