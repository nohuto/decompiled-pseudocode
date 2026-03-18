/*
 * XREFs of ?RenderSeparableUpsample@CResampleLayer@@AEAAJPEAVCSurfaceShaderComposer@@PEAUID3D11RenderTargetView@@_NAEBUD3D11_VIEWPORT@@@Z @ 0x1801941B4
 * Callers:
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180193ECC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     floor @ 0x1800E3A38 (floor.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0USamplerMode@@$01X@?$span@USamplerMode@@$0?0@gsl@@QEAA@AEBV?$span@USamplerMode@@$01@1@@Z @ 0x18019325C (--$-0USamplerMode@@$01X@-$span@USamplerMode@@$0-0@gsl@@QEAA@AEBV-$span@USamplerMode@@$01@1@@Z.c)
 *     ?FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z @ 0x180193928 (-FillXBRPass1Buffer@@YAJPEAVCSurfaceShaderComposer@@II@Z.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x1802467E8 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@4@Z @ 0x180246870 (-RunShader@CSurfaceShaderComposer@@QEAAJPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4.c)
 */

__int64 __fastcall CResampleLayer::RenderSeparableUpsample(
        CResampleLayer *this,
        struct CSurfaceShaderComposer *a2,
        struct ID3D11RenderTargetView *a3,
        char a4,
        const struct D3D11_VIEWPORT *a5)
{
  float v7; // xmm0_4
  double v10; // xmm0_8
  __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 (__fastcall *v15)(__int64, __int64, __int64 *); // rbx
  __int64 v16; // rax
  int SurfacePixelShaderNoRef; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64, __int64, __int64 *); // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // r8d
  __int16 v37; // [rsp+60h] [rbp-71h] BYREF
  char v38; // [rsp+62h] [rbp-6Fh]
  __int16 v39; // [rsp+64h] [rbp-6Dh] BYREF
  char v40; // [rsp+66h] [rbp-6Bh]
  __int16 v41; // [rsp+67h] [rbp-6Ah]
  char v42; // [rsp+69h] [rbp-68h]
  __int64 v43; // [rsp+70h] [rbp-61h] BYREF
  __int64 v44; // [rsp+78h] [rbp-59h] BYREF
  __int16 *v45; // [rsp+80h] [rbp-51h] BYREF
  __int64 v46[2]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v47; // [rsp+98h] [rbp-39h] BYREF
  const struct D3D11_VIEWPORT *v48; // [rsp+A0h] [rbp-31h]
  __int64 v49; // [rsp+A8h] [rbp-29h] BYREF
  _QWORD v50[3]; // [rsp+B0h] [rbp-21h] BYREF
  _DWORD v51[6]; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v7 = (float)*((int *)this + 6);
  v48 = a5;
  v10 = floor((float)(v7 * *((float *)this + 34)) + 0.5);
  v11 = *((_QWORD *)this + 1);
  v12 = (int)v10;
  v13 = v11 + *(int *)(*(_QWORD *)(v11 + 8) + 16LL);
  v14 = *(_QWORD *)(v13 + 8);
  v44 = 0LL;
  v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v14 + 48);
  v16 = (**(__int64 (__fastcall ***)(__int64, _QWORD *))v11)(v11, v50);
  SurfacePixelShaderNoRef = v15(v13 + 8, v16, &v44);
  v18 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef >= 0 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 8LL))(v44);
    v21 = *((_QWORD *)this + 16);
    v47 = v20;
    v37 = 256;
    v38 = 1;
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 64LL))(v21);
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 56LL))(v22);
    SurfacePixelShaderNoRef = FillXBRPass1Buffer(a2, *((_DWORD *)this + 6), *((_DWORD *)this + 7));
    v18 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v19 = 541LL;
      goto LABEL_9;
    }
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 6LL, &v45);
    v18 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v19 = 545LL;
      goto LABEL_9;
    }
    v51[4] = 0;
    v51[0] = 0;
    v51[1] = 0;
    v24 = *((_QWORD *)this + 16);
    *(float *)&v51[3] = (float)*((int *)this + 7);
    *(float *)&v51[2] = (float)v12;
    v51[5] = (_DWORD)FLOAT_1_0;
    v25 = v24 + 8 + *(int *)(*(_QWORD *)(v24 + 8) + 8LL);
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25);
    v46[1] = (__int64)&v37;
    v46[0] = 1LL;
    SurfacePixelShaderNoRef = CSurfaceShaderComposer::RunShader(
                                (_DWORD)a2,
                                (unsigned int)&v47,
                                1,
                                (unsigned int)v51,
                                5,
                                (__int64)v46,
                                v26,
                                v23,
                                (__int64)v45);
    v18 = SurfacePixelShaderNoRef;
    if ( SurfacePixelShaderNoRef < 0 )
    {
      v19 = 564LL;
      goto LABEL_9;
    }
    v27 = *((_QWORD *)this + 16);
    v28 = v27 + *(int *)(*(_QWORD *)(v27 + 8) + 16LL);
    v29 = *(_QWORD *)(v28 + 8);
    v43 = 0LL;
    v30 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v29 + 48);
    v31 = (**(__int64 (__fastcall ***)(__int64, _QWORD *))v27)(v27, v50);
    v32 = v30(v28 + 8, v31, &v43);
    v18 = v32;
    if ( v32 >= 0 )
    {
      v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
      v35 = *((_DWORD *)this + 7);
      v49 = v34;
      v32 = FillXBRPass1Buffer(a2, v12, v35);
      v18 = v32;
      if ( v32 >= 0 )
      {
        v32 = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(a2, 7LL, v46);
        v18 = v32;
        if ( v32 >= 0 )
        {
          v40 = v38;
          v42 = v38;
          v39 = v37;
          v41 = v37;
          v45 = &v39;
          gsl::span<SamplerMode,-1>::span<SamplerMode,-1>(v50, (__int64 *)&v45);
          v32 = CSurfaceShaderComposer::RunShader(
                  (_DWORD)a2,
                  (unsigned int)&v49,
                  1,
                  (_DWORD)v48,
                  0,
                  (__int64)v50,
                  a4,
                  (__int64)a3,
                  v46[0]);
          v18 = v32;
          if ( v32 >= 0 )
          {
            v18 = 0;
            goto LABEL_20;
          }
          v33 = 594LL;
        }
        else
        {
          v33 = 580LL;
        }
      }
      else
      {
        v33 = 576LL;
      }
    }
    else
    {
      v33 = 570LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v33,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
      (const char *)(unsigned int)v32);
LABEL_20:
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v43);
    goto LABEL_21;
  }
  v19 = 527LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\resamplelayer.cpp",
    (const char *)(unsigned int)SurfacePixelShaderNoRef);
LABEL_21:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v44);
  return v18;
}
