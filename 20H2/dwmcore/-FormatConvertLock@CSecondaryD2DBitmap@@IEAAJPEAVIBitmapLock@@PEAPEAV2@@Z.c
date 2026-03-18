/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAVIBitmapLock@@PEAPEAV2@@Z @ 0x18019B570
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800464F8 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18003EE28 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CC168 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x18019B974 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180216B48 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(
        CSecondaryD2DBitmap *this,
        struct IBitmapLock *a2,
        struct IBitmapLock **a3)
{
  void (__fastcall **v3)(struct IBitmapLock *, _BYTE *); // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct WICRect *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-39h]
  struct IBitmapDest *v15; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-11h] BYREF
  unsigned int v17; // [rsp+4Ch] [rbp-Dh] BYREF
  unsigned int v18; // [rsp+50h] [rbp-9h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-5h] BYREF
  struct IBitmapSource *v20; // [rsp+58h] [rbp-1h] BYREF
  struct IBitmapSource *v21; // [rsp+60h] [rbp+7h] BYREF
  _DWORD v22[4]; // [rsp+68h] [rbp+Fh] BYREF
  unsigned __int8 *v23; // [rsp+78h] [rbp+1Fh] BYREF
  _BYTE v24[16]; // [rsp+80h] [rbp+27h] BYREF

  v3 = *(void (__fastcall ***)(struct IBitmapLock *, _BYTE *))a2;
  v21 = 0LL;
  v20 = 0LL;
  v15 = 0LL;
  (*v3)(a2, v24);
  v22[0] = *((_DWORD *)this + 42);
  v22[1] = *((_DWORD *)this + 51);
  v22[2] = *((_DWORD *)this + 58);
  v7 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned int *))(*(_QWORD *)a2 + 8LL))(
         a2,
         &v19,
         &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 211;
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *))(*(_QWORD *)a2 + 16LL))(a2, &v17);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 214;
    goto LABEL_15;
  }
  v7 = (*(__int64 (__fastcall **)(struct IBitmapLock *, unsigned int *, unsigned __int8 **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v16,
         &v23);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 218;
    goto LABEL_15;
  }
  v7 = HrCreateBitmapFromMemoryEx(v19, v18, (const struct PixelFormatInfo *)v24, v17, v16, v23, 0LL, &v21);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 227;
    goto LABEL_15;
  }
  v7 = CFormatConverter::HrConvertBitmap(v21, (const struct PixelFormatInfo *)v22, &v20);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = 232;
    goto LABEL_15;
  }
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v15);
  v11 = HrCreateDestBitmapCopy(v20, v10, &v15);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xEDu, 0LL);
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v15 + 24LL))(
           v15,
           0LL,
           1LL,
           a3);
    v9 = v7;
    if ( v7 < 0 )
    {
      v14 = 241;
LABEL_15:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v14, 0LL);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v15);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v20);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  return v9;
}
