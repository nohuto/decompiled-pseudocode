/*
 * XREFs of ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV1@@Z @ 0x1802A8600
 * Callers:
 *     ?Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z @ 0x1802A2078 (-Initialize@CColorKeyBitmapRealization@@IEAAJPEAVIBitmapRealization@@AEBVCColorKey@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CColorKeyBitmap@@IEAA@AEBVCColorKey@@@Z @ 0x1802A80EC (--0CColorKeyBitmap@@IEAA@AEBVCColorKey@@@Z.c)
 *     ?Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z @ 0x1802A9064 (-Initialize@CColorKeyBitmap@@IEAAJPEAVIBitmapRealization@@@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::Create(
        struct IBitmapRealization *a1,
        const struct CColorKey *a2,
        struct CColorKeyBitmap **a3)
{
  CColorKeyBitmap *v6; // rax
  __int64 v7; // rcx
  CColorKeyBitmap *v8; // rax
  CColorKeyBitmap *v9; // rbx
  struct CColorKeyBitmap *v10; // rsi
  char *v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  v6 = (CColorKeyBitmap *)operator new(0xC0uLL);
  if ( !v6 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  v8 = CColorKeyBitmap::CColorKeyBitmap(v6, a2);
  v9 = v8;
  v10 = v8;
  if ( !v8 )
  {
LABEL_6:
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x16u);
    goto LABEL_7;
  }
  v11 = (char *)v8 + *(int *)(*((_QWORD *)v8 + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = CColorKeyBitmap::Initialize(v9, a1);
  v14 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x18u);
LABEL_7:
  v17 = 0LL;
  *a3 = v10;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v16);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v17);
  return v14;
}
