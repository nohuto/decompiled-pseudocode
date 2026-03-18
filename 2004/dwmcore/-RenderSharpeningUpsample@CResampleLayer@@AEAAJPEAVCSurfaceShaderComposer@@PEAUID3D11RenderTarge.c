/*
 * XREFs of ?RenderSharpeningUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x180194520
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180193ECC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x180193928 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1802467E8 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180246870 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 */

__int64 __fastcall CResampleLayer::RenderSharpeningUpsample(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  __int64 v7; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, __int64 *); // rbx
  __int64 v13; // rax
  int SurfacePixelShaderNoRef; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  int v19; // edx
  __int64 v21; // [rsp+60h] [rbp-1h] BYREF
  __int64 v22; // [rsp+68h] [rbp+7h] BYREF
  __int64 v23; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v24[3]; // [rsp+78h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  __int16 v26; // [rsp+C0h] [rbp+5Fh] BYREF
  char v27; // [rsp+C2h] [rbp+61h]

  v7 = *((_QWORD *)this + 1);
  v10 = v7 + *(int *)(*(_QWORD *)(v7 + 8) + 16LL);
  v11 = *(_QWORD *)(v10 + 8);
  v21 = 0LL;
  v12 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v11 + 48);
  v13 = (**(__int64 (__fastcall ***)(__int64, _QWORD *))v7)(v7, v24);
  SurfacePixelShaderNoRef = v12(v10 + 8, v13, &v21);
  v15 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    v18 = *((_DWORD *)this + 7);
    v19 = *((_DWORD *)this + 6);
    v23 = v17;
    SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, v19, v18);
    v15 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef >= 0 )
    {
      SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 8LL, &v22);
      v15 = SurfacePixelShaderNoRef;
      if ( SurfacePixelShaderNoRef >= 0 )
      {
        v24[1] = &v26;
        v27 = 1;
        v24[0] = 1LL;
        v26 = 257;
        SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                                    (_DWORD)a2,
                                    (unsigned int)&v23,
                                    1,
                                    (_DWORD)a5,
                                    0,
                                    (__int64)v24,
                                    a4,
                                    (__int64)a3,
                                    v22);
        v15 = SurfacePixelShaderNoRef;
        if ( SurfacePixelShaderNoRef >= 0 )
        {
          v15 = 0;
          goto LABEL_11;
        }
        v16 = 637LL;
      }
      else
      {
        v16 = 622LL;
      }
    }
    else
    {
      v16 = 618LL;
    }
  }
  else
  {
    v16 = 611LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)SurfacePixelShaderNoRef);
LABEL_11:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v21);
  return v15;
}
