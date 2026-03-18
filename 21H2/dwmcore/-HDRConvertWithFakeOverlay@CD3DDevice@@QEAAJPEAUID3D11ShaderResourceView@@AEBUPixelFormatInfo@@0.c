/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18027EA64
 * Callers:
 *     ?ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@012AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x180291DD4 (-ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@A.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1800102BC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18027CD28 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18027E284 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18028A11C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x18028A7E8 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDevice::HDRConvertWithFakeOverlay(
        CSurfaceShaderComposer **this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        __int64 *a6,
        unsigned int *a7,
        enum DXGI_MODE_ROTATION a8,
        __int64 a9,
        __int64 a10,
        int *a11,
        unsigned int a12,
        float a13,
        char a14,
        __int64 a15)
{
  int v15; // eax
  __int64 v17; // xmm0_8
  __int64 v18; // xmm0_8
  unsigned int i; // edi
  int v20; // ebx
  int CompositingPixelShaderNoRef; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  int v24; // eax
  CSurfaceShaderComposer *v25; // rcx
  float v26; // xmm0_4
  int v27; // eax
  int updated; // eax
  __int64 v29; // rcx
  int v30; // r8d
  CSurfaceShaderComposer *v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int16 v35; // [rsp+70h] [rbp-90h] BYREF
  char v36; // [rsp+72h] [rbp-8Eh]
  __int128 v37; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v40[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v41[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+100h] [rbp+0h] BYREF
  float v44; // [rsp+108h] [rbp+8h]
  float v45; // [rsp+10Ch] [rbp+Ch]
  int v46; // [rsp+110h] [rbp+10h]
  int v47; // [rsp+114h] [rbp+14h]
  __int64 v48; // [rsp+118h] [rbp+18h] BYREF
  int v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+124h] [rbp+24h]
  int v51; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v52[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v53; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+148h] [rbp+48h]
  int v55; // [rsp+14Ch] [rbp+4Ch]
  int v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+154h] [rbp+54h]
  int v58; // [rsp+158h] [rbp+58h]
  __m128i si128; // [rsp+15Ch] [rbp+5Ch]
  int v60; // [rsp+16Ch] [rbp+6Ch]
  __int128 v61; // [rsp+170h] [rbp+70h]
  __int128 v62; // [rsp+180h] [rbp+80h]
  __int128 v63; // [rsp+190h] [rbp+90h]
  __int128 v64; // [rsp+1A0h] [rbp+A0h]
  __int128 v65; // [rsp+1B0h] [rbp+B0h]

  v15 = *((_DWORD *)a3 + 2);
  v39 = 0LL;
  v43 = 0LL;
  v46 = 0;
  v42 = 0;
  v56 = 0;
  v58 = 0;
  v60 = 0;
  v53 = 0LL;
  v49 = v15;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v40[0] = a2;
  v62 = _xmm;
  v64 = _xmm;
  v17 = *a3;
  v61 = _xmm_bf800000bf800000000000003f800000;
  v48 = v17;
  v18 = *a6;
  v51 = *((_DWORD *)a6 + 2);
  v63 = _xmm;
  v40[1] = a4;
  v35 = 257;
  v36 = 1;
  v52[0] = -1082130432;
  v52[1] = 1065353216;
  v54 = -1082130432;
  v55 = -1082130432;
  v57 = 1065353216;
  v65 = _xmm;
  v50 = v18;
  CD3DDevice::CalcHDRConvertUVTransform(a11, a5, a7, a8, a9, (CMILMatrix *)v41);
  for ( i = 0; i < 6; ++i )
  {
    v20 = 6 * i;
    v38[0] = v52[6 * i + 2];
    v38[1] = v52[6 * i + 3];
    CMILMatrix::Transform((CMILMatrix *)v41, (const struct MilPoint2F *)v38, (struct MilPoint2F *)&v37, 1);
    v52[v20 + 4] = v37;
    v52[v20 + 5] = DWORD1(v37);
  }
  *((_QWORD *)&v37 + 1) = &v48;
  *(_QWORD *)&v37 = 2LL;
  CompositingPixelShaderNoRef = CD3DDevice::GetCompositingPixelShaderNoRef((struct CD3DDevice *)this, &v37, a12, &v39);
  v23 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, CompositingPixelShaderNoRef, 0x9A7u);
  }
  else
  {
    v24 = *a11;
    v25 = this[198];
    v47 = 1065353216;
    v26 = (float)v24;
    v27 = a11[1];
    v44 = v26;
    v45 = (float)v27;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v25, a13);
    v23 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0LL, updated, 0x9ADu);
    }
    else
    {
      v31 = this[198];
      *((_QWORD *)&v37 + 1) = &v35;
      *(_QWORD *)&v37 = 1LL;
      v32 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v31,
              (unsigned int)v52,
              v30,
              (unsigned int)v40,
              2,
              (__int64)&v43,
              5,
              (__int64)&v37,
              a14,
              a10,
              v39,
              a15,
              1);
      v23 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, v32, 0x9BAu);
    }
  }
  return v23;
}
