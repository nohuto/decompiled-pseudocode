/*
 * XREFs of ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802698B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x18001A34C (-GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAIPEAPEAUID3D11PixelShader@@@Z @ 0x180045280 (-GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDevice@@AEAAJAEBUCommonRenderingShaderDesc@.c)
 *     ?GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z @ 0x180045AF4 (-GetVertexShaderNoRef@CD3DDevice@@QEBAPEAUID3D11VertexShader@@I@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x1800471A8 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180047950 (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180047A54 (-GetD3DSamplerStateNoRef@CD3DDevice@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@Z @ 0x180047ACC (-GetShaderResourceView@CDrawListBitmap@@QEBAPEAUID3D11ShaderResourceView@@PEAUPixelFormatInfo@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801AB718 (-GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z.c)
 */

__int64 __fastcall CCubeMapRenderingEffect::SetStateOnDevice(
        CCubeMapRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        unsigned int *a3)
{
  CD3DDevice *v3; // r15
  __int64 v4; // r12
  __int64 v6; // rbx
  enum DXGI_COLOR_SPACE_TYPE v7; // esi
  const struct CLightsMask *LightsMask; // rax
  bool v11; // zf
  int v12; // ebx
  int v13; // ebx
  int ColorChannelDepth; // eax
  char v15; // dl
  int ConversionShader; // eax
  __int64 v17; // rcx
  unsigned int v18; // esi
  int CommonOrCubeMapRenderingShadersNoRefInternal; // eax
  __int64 v20; // rcx
  int D3DSamplerStateNoRef; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // edi
  void (__fastcall *v26)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD); // rbx
  struct ID3D11VertexShader *VertexShaderNoRef; // rax
  __int64 v29; // [rsp+30h] [rbp-39h] BYREF
  enum DXGI_FORMAT v30[4]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v31; // [rsp+48h] [rbp-21h] BYREF
  __int64 v32; // [rsp+58h] [rbp-11h] BYREF
  __int128 v33; // [rsp+60h] [rbp-9h]
  const char *v34; // [rsp+70h] [rbp+7h]
  int v35; // [rsp+78h] [rbp+Fh]
  int v36; // [rsp+80h] [rbp+17h]
  bool v37[60]; // [rsp+84h] [rbp+1Bh] BYREF
  __int16 v38; // [rsp+D0h] [rbp+67h] BYREF
  char v39; // [rsp+D2h] [rbp+69h]
  unsigned int v40; // [rsp+D8h] [rbp+6Fh] BYREF
  struct ID3D11PixelShader *v41; // [rsp+E8h] [rbp+7Fh] BYREF

  v3 = (CD3DDevice *)*((_QWORD *)a2 + 1);
  v4 = *((_QWORD *)a2 + 2);
  v6 = *((_QWORD *)a2 + 4);
  v7 = *((_DWORD *)a2 + 27);
  v32 = 0LL;
  v41 = 0LL;
  *(_QWORD *)&v33 = "NoOp";
  v34 = "NoOp";
  v29 = 0LL;
  DWORD2(v33) = 0;
  v35 = 0;
  *(_DWORD *)v37 = 0;
  LightsMask = CD3DBatchExecutionContext::GetLightsMask(a2);
  *(_WORD *)&v37[1] = v7 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
  v11 = *(_BYTE *)(v6 + 368) == 0;
  v12 = 0;
  v36 = *(_DWORD *)LightsMask;
  if ( !v11 )
    v12 = 16;
  if ( *((_DWORD *)a2 + 16) == 22 )
    v12 |= 8u;
  v13 = v12 | 1;
  LODWORD(v32) = v13;
  if ( CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16)) )
    LODWORD(v32) = v13 | 4;
  CDrawListBitmap::GetShaderResourceView((CCubeMapRenderingEffect *)((char *)this + 16), (struct PixelFormatInfo *)v30);
  *(_QWORD *)&v31 = "NoOp";
  DWORD2(v31) = 0;
  CDrawListBitmap::IsOpaque((CCubeMapRenderingEffect *)((char *)this + 16));
  ColorChannelDepth = GetColorChannelDepth(v30[0]);
  ConversionShader = ColorConversion::GetConversionShader(
                       (enum DXGI_COLOR_SPACE_TYPE)v30[2],
                       v15,
                       ColorChannelDepth,
                       v7,
                       (struct ColorConversion::Shader *)&v31,
                       v37);
  v18 = ConversionShader;
  if ( ConversionShader < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, ConversionShader, 0x5Fu, 0LL);
  }
  else
  {
    if ( DWORD2(v31) > 1 )
      v33 = v31;
    CommonOrCubeMapRenderingShadersNoRefInternal = CD3DDevice::GetCommonOrCubeMapRenderingShadersNoRefInternal(
                                                     v3,
                                                     (__int64)&v32,
                                                     1,
                                                     &v40,
                                                     &v41);
    v18 = CommonOrCubeMapRenderingShadersNoRefInternal;
    if ( CommonOrCubeMapRenderingShadersNoRefInternal < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CommonOrCubeMapRenderingShadersNoRefInternal, 0x68u, 0LL);
    }
    else
    {
      v38 = *((_WORD *)this + 32);
      v39 = *((_BYTE *)this + 66);
      D3DSamplerStateNoRef = CD3DDevice::GetD3DSamplerStateNoRef((__int64)v3, (unsigned __int8 *)&v38, &v29);
      v18 = D3DSamplerStateNoRef;
      if ( D3DSamplerStateNoRef < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, D3DSamplerStateNoRef, 0x6Au, 0LL);
      }
      else
      {
        v25 = v40;
        v26 = *(void (__fastcall **)(__int64, struct ID3D11VertexShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 88LL);
        VertexShaderNoRef = CD3DDevice::GetVertexShaderNoRef(v3, v40, v23, v24);
        v26(v4, VertexShaderNoRef, 0LL, 0LL);
        (*(void (__fastcall **)(__int64, struct ID3D11PixelShader *, _QWORD, _QWORD))(*(_QWORD *)v4 + 72LL))(
          v4,
          v41,
          0LL,
          0LL);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v4 + 64LL))(
          v4,
          0LL,
          1LL,
          (char *)this + 72);
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 80LL))(v4, 0LL, 1LL, &v29);
        *a3 = v25;
      }
    }
  }
  return v18;
}
