/*
 * XREFs of ?UpdateMargins@CGdiSpriteBitmap@@AEBAXXZ @ 0x18008FE24
 * Callers:
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18008D668 (-ProcessUpdateMargins@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP_U.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18008FCA4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C14BC (-reset@-$com_ptr_t@VIGDIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGdiSpriteBitmap::UpdateMargins(CGdiSpriteBitmap *this)
{
  void (__fastcall ***v2)(_QWORD, char *); // rcx
  char *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)this + 60);
  if ( v2 )
  {
    v3 = (char *)this + 108;
    (**v2)(v2, (char *)this + 108);
    v4 = *((_QWORD *)this + 61);
    v5 = *((_QWORD *)this + 62);
    while ( v4 != v5 )
    {
      v10 = 0LL;
      v9 = 0LL;
      v6 = *(_QWORD *)v4 + 56LL + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 56LL) + 8LL);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v10) >= 0 )
      {
        wil::com_ptr_t<IGDIBitmapRealization,wil::err_returncode_policy>::reset(&v9);
        v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(int *)(*(_QWORD *)(v10 + 8) + 4LL) + v10 + 8);
        if ( (**v7)(v7, &GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309, &v9) >= 0 )
          (**(void (__fastcall ***)(__int64, char *))v9)(v9, v3);
      }
      if ( v9 )
      {
        v8 = *(int *)(*(_QWORD *)(v9 + 8) + 4LL) + v9 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
      v4 += 8LL;
    }
  }
}
