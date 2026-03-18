/*
 * XREFs of ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x18005FFBC
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18005F170 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1801A1D30 (-SetStateOnDevice@CWARPDrawListEntry@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180266060 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800319E8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z @ 0x180060D78 (-GetCurrentRealization@CDrawListBitmap@@IEBAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11ShaderResourceView *__fastcall CDrawListBitmap::GetShaderResourceView(
        CDrawListBitmap *this,
        struct PixelFormatInfo *a2)
{
  __int64 v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, _BYTE *); // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  char *v9; // rcx
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF
  struct IBitmapRealization *v12; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+30h] [rbp-28h] BYREF

  v12 = 0LL;
  if ( (int)CDrawListBitmap::GetCurrentRealization(this, &v12) < 0 )
    goto LABEL_10;
  v4 = *(_QWORD *)v12;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(struct IBitmapRealization *, char *, _QWORD **))(v4 + 48))(v12, (char *)this + 16, &v11) < 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
LABEL_10:
    v7 = 0LL;
    goto LABEL_7;
  }
  if ( a2 )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)v11 + *(int *)(v11[1] + 12LL) + 8);
    v6 = (**v5)(v5, v13);
    *(_QWORD *)a2 = *(_QWORD *)v6;
    *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 8);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
  if ( v11 )
  {
    v8 = (__int64)v11 + *(int *)(v11[1] + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_7:
  if ( v12 )
  {
    v9 = (char *)v12 + *(int *)(*((_QWORD *)v12 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (struct ID3D11ShaderResourceView *)v7;
}
