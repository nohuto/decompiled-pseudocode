/*
 * XREFs of ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1802409AC
 * Callers:
 *     ?ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@012AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18024FA8C (-ConvertMultiResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1802137C0 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023E70C (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1802403E8 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180249334 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180249928 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDevice::HDRConvertWithFakeOverlay(
        CSurfaceShaderComposer **this,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int *a5,
        __int64 *a6,
        unsigned int *a7,
        unsigned int a8,
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
  unsigned int v19; // r11d
  int v20; // r10d
  int v21; // r11d
  int CompositingPixelShaderNoRef; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  int v25; // eax
  CSurfaceShaderComposer *v26; // rcx
  float v27; // xmm0_4
  int v28; // eax
  int updated; // eax
  __int64 v30; // rcx
  int v31; // r8d
  CSurfaceShaderComposer *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int16 v36; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+72h] [rbp-8Eh]
  __int128 v38; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v39[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v42[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp+0h] BYREF
  float v45; // [rsp+108h] [rbp+8h]
  float v46; // [rsp+10Ch] [rbp+Ch]
  int v47; // [rsp+110h] [rbp+10h]
  int v48; // [rsp+114h] [rbp+14h]
  __int64 v49; // [rsp+118h] [rbp+18h] BYREF
  int v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+124h] [rbp+24h]
  int v52; // [rsp+12Ch] [rbp+2Ch]
  _DWORD v53[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v54; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+14Ch] [rbp+4Ch]
  int v57; // [rsp+150h] [rbp+50h]
  int v58; // [rsp+154h] [rbp+54h]
  int v59; // [rsp+158h] [rbp+58h]
  __m128i si128; // [rsp+15Ch] [rbp+5Ch]
  int v61; // [rsp+16Ch] [rbp+6Ch]
  __int128 v62; // [rsp+170h] [rbp+70h]
  __int128 v63; // [rsp+180h] [rbp+80h]
  __int128 v64; // [rsp+190h] [rbp+90h]
  __int128 v65; // [rsp+1A0h] [rbp+A0h]
  __int128 v66; // [rsp+1B0h] [rbp+B0h]

  v15 = *((_DWORD *)a3 + 2);
  v40 = 0LL;
  v44 = 0LL;
  v47 = 0;
  v43 = 0;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v54 = 0LL;
  v50 = v15;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v41[0] = a2;
  v63 = _xmm;
  v65 = _xmm;
  v17 = *a3;
  v62 = _xmm_bf800000bf800000000000003f800000;
  v49 = v17;
  v18 = *a6;
  v52 = *((_DWORD *)a6 + 2);
  v64 = _xmm;
  v41[1] = a4;
  v36 = 257;
  v37 = 1;
  v53[0] = -1082130432;
  v53[1] = 1065353216;
  v55 = -1082130432;
  v56 = -1082130432;
  v58 = 1065353216;
  v66 = _xmm;
  v51 = v18;
  CD3DDevice::CalcHDRConvertUVTransform(a11, a5, a7, a8, a9, (CMILMatrix *)v42);
  v19 = 0;
  do
  {
    v39[0] = v53[6 * v19 + 2];
    v39[1] = v53[6 * v19 + 3];
    CMILMatrix::Transform((CMILMatrix *)v42, (const struct MilPoint2F *)v39, (struct MilPoint2F *)&v38, 1);
    v53[v20 + 4] = v38;
    v19 = v21 + 1;
    v53[v20 + 5] = DWORD1(v38);
  }
  while ( v19 < 6 );
  *((_QWORD *)&v38 + 1) = &v49;
  *(_QWORD *)&v38 = 2LL;
  CompositingPixelShaderNoRef = CD3DDevice::GetCompositingPixelShaderNoRef((struct CD3DDevice *)this, &v38, a12, &v40);
  v24 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, CompositingPixelShaderNoRef, 0xB70u, 0LL);
  }
  else
  {
    v25 = *a11;
    v26 = this[189];
    v48 = 1065353216;
    v27 = (float)v25;
    v28 = a11[1];
    v45 = v27;
    v46 = (float)v28;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v26, a13);
    v24 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, updated, 0xB76u, 0LL);
    }
    else
    {
      v32 = this[189];
      *((_QWORD *)&v38 + 1) = &v36;
      *(_QWORD *)&v38 = 1LL;
      v33 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v32,
              (unsigned int)v53,
              v31,
              (unsigned int)v41,
              2,
              (__int64)&v44,
              5,
              (__int64)&v38,
              a14,
              a10,
              v40,
              a15,
              1);
      v24 = v33;
      if ( v33 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xB83u, 0LL);
    }
  }
  return v24;
}
