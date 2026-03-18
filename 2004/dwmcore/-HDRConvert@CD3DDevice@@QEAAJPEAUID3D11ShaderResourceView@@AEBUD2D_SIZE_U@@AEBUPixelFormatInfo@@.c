/*
 * XREFs of ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18023DCAC
 * Callers:
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x18024D4CC (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180210E00 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023BCDC (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x18023D9B8 (-GetCompositingPixelShaderNoRef@CD3DDevice@@AEAAJV-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4DXGI_.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180246904 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180246EF8 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CD3DDevice::HDRConvert(
        CSurfaceShaderComposer **this,
        __int64 a2,
        int *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        unsigned int a10,
        float a11,
        char a12,
        __int64 a13)
{
  unsigned int v15; // esi
  int v16; // xmm1_4
  __int64 v17; // r11
  __int64 v18; // r10
  int CompositingPixelShaderNoRef; // eax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  int v22; // eax
  CSurfaceShaderComposer *v23; // rcx
  float v24; // xmm0_4
  int v25; // eax
  int updated; // eax
  __int64 v27; // rcx
  int v28; // r8d
  CSurfaceShaderComposer *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  __int16 v33; // [rsp+70h] [rbp-90h] BYREF
  char v34; // [rsp+72h] [rbp-8Eh]
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v39[64]; // [rsp+B0h] [rbp-50h] BYREF
  int v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp+0h] BYREF
  float v42; // [rsp+108h] [rbp+8h]
  float v43; // [rsp+10Ch] [rbp+Ch]
  int v44; // [rsp+110h] [rbp+10h]
  int v45; // [rsp+114h] [rbp+14h]
  _DWORD v46[2]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v47; // [rsp+128h] [rbp+28h]
  int v48; // [rsp+138h] [rbp+38h]
  int v49; // [rsp+13Ch] [rbp+3Ch]
  int v50; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+144h] [rbp+44h]
  int v52; // [rsp+148h] [rbp+48h]
  __m128i si128; // [rsp+14Ch] [rbp+4Ch]
  int v54; // [rsp+15Ch] [rbp+5Ch]
  __int128 v55; // [rsp+160h] [rbp+60h]
  __int128 v56; // [rsp+170h] [rbp+70h]
  __int128 v57; // [rsp+180h] [rbp+80h]
  __int128 v58; // [rsp+190h] [rbp+90h]
  __int128 v59; // [rsp+1A0h] [rbp+A0h]

  v37 = 0LL;
  v41 = 0LL;
  v44 = 0;
  v40 = 0;
  v50 = 0;
  v52 = 0;
  v54 = 0;
  v47 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v38 = a2;
  v55 = _xmm_bf800000bf800000000000003f800000;
  v56 = _xmm;
  v57 = _xmm;
  v58 = _xmm;
  v33 = 257;
  v34 = 1;
  v46[0] = -1082130432;
  v46[1] = 1065353216;
  v48 = -1082130432;
  v49 = -1082130432;
  v51 = 1065353216;
  v59 = _xmm;
  CD3DDevice::CalcHDRConvertUVTransform(a9, a3, a5, a6, a7, (CMILMatrix *)v39);
  v15 = 0;
  do
  {
    v36[0] = v46[6 * v15 + 2];
    v36[1] = v46[6 * v15 + 3];
    CMILMatrix::Transform((CMILMatrix *)v39, (const struct MilPoint2F *)v36, (struct MilPoint2F *)&v35);
    ++v15;
    v16 = DWORD1(v35);
    v46[v17] = v35;
    v46[v18] = v16;
  }
  while ( v15 < 6 );
  *((_QWORD *)&v35 + 1) = a4;
  *(_QWORD *)&v35 = 1LL;
  if ( !a4 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  CompositingPixelShaderNoRef = CD3DDevice::GetCompositingPixelShaderNoRef((struct CD3DDevice *)this, &v35, a10, &v37);
  v21 = CompositingPixelShaderNoRef;
  if ( CompositingPixelShaderNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, CompositingPixelShaderNoRef, 0xB0Cu, 0LL);
  }
  else
  {
    v22 = *a9;
    v23 = this[189];
    v45 = 1065353216;
    v24 = (float)v22;
    v25 = a9[1];
    v42 = v24;
    v43 = (float)v25;
    updated = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v23, a11);
    v21 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, updated, 0xB12u, 0LL);
    }
    else
    {
      v29 = this[189];
      *((_QWORD *)&v35 + 1) = &v33;
      *(_QWORD *)&v35 = 1LL;
      v30 = CSurfaceShaderComposer::RunShader(
              (_DWORD)v29,
              (unsigned int)v46,
              v28,
              (unsigned int)&v38,
              1,
              (__int64)&v41,
              5,
              (__int64)&v35,
              a12,
              a8,
              v37,
              a13,
              1);
      v21 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xB1Fu, 0LL);
    }
  }
  return v21;
}
