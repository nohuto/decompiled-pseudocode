/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801DC790
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801DC5B0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DCCB0 (-RenderLayer@CGammaBlendLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801B21B8 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801C0B24 (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180289FAC (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x18028A11C (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x18028A7E8 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        CDrawingContext *a2,
        _QWORD *a3,
        int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  CSurfaceShaderComposer *v11; // r15
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, int *); // rcx
  __m128i v16; // xmm4
  float v17; // xmm2_4
  int v18; // eax
  float v19; // xmm1_4
  int SurfacePixelShaderNoRef; // eax
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  char v28; // al
  int v29; // r8d
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  __int16 v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+72h] [rbp-8Eh]
  int v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+7Ch] [rbp-84h]
  __int64 v36; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v37[2]; // [rsp+90h] [rbp-70h] BYREF
  float v38; // [rsp+98h] [rbp-68h]
  float v39; // [rsp+9Ch] [rbp-64h]
  float v40; // [rsp+A0h] [rbp-60h]
  float v41; // [rsp+A4h] [rbp-5Ch]
  int v42; // [rsp+A8h] [rbp-58h]
  int v43; // [rsp+ACh] [rbp-54h]
  float v44; // [rsp+B0h] [rbp-50h]
  float v45; // [rsp+B4h] [rbp-4Ch]
  float v46; // [rsp+B8h] [rbp-48h]
  float v47; // [rsp+BCh] [rbp-44h]
  int v48; // [rsp+C0h] [rbp-40h]
  int v49; // [rsp+C4h] [rbp-3Ch]
  float v50; // [rsp+C8h] [rbp-38h]
  float v51; // [rsp+CCh] [rbp-34h]
  float v52; // [rsp+D0h] [rbp-30h]
  float v53; // [rsp+D4h] [rbp-2Ch]
  int v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+DCh] [rbp-24h]
  float v56; // [rsp+E0h] [rbp-20h]
  float v57; // [rsp+E4h] [rbp-1Ch]
  float v58; // [rsp+E8h] [rbp-18h]
  float v59; // [rsp+ECh] [rbp-14h]
  int v60; // [rsp+F0h] [rbp-10h]
  int v61; // [rsp+F4h] [rbp-Ch]
  float v62; // [rsp+F8h] [rbp-8h]
  float v63; // [rsp+FCh] [rbp-4h]
  float v64; // [rsp+100h] [rbp+0h]
  float v65; // [rsp+104h] [rbp+4h]
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]
  float v68; // [rsp+110h] [rbp+10h]
  float v69; // [rsp+114h] [rbp+14h]
  float v70; // [rsp+118h] [rbp+18h]
  float v71; // [rsp+11Ch] [rbp+1Ch]
  __int64 v72; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v73[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v74; // [rsp+138h] [rbp+38h] BYREF
  __int64 v75; // [rsp+148h] [rbp+48h]

  v9 = (__int64)a3 + *(int *)(a3[1] + 8LL) + 8;
  v11 = *(CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 1584);
  v12 = 0LL;
  v75 = 0LL;
  v32 = 256;
  v33 = 1;
  v74 = 0LL;
  if ( !v11 )
  {
    v13 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, -2005270524, 0x8Eu);
    return v13;
  }
  do
  {
    *((float *)&v74 + v12) = (float)*(int *)(a5 + 4 * v12);
    ++v12;
  }
  while ( v12 < 4 );
  v14 = a3[1];
  HIDWORD(v75) = 1065353216;
  v15 = (void (__fastcall ***)(_QWORD, int *))((char *)a3 + *(int *)(v14 + 16) + 8);
  (**v15)(v15, &v34);
  v16 = _mm_cvtsi32_si128(a4[1]);
  v17 = (float)*a4;
  v37[0] = -1082130432;
  v37[1] = 1065353216;
  v42 = -1082130432;
  v43 = -1082130432;
  v48 = 1065353216;
  v49 = 1065353216;
  v54 = -1082130432;
  v18 = *a4 + a4[2];
  v55 = -1082130432;
  v60 = 1065353216;
  v61 = -1082130432;
  v66 = 1065353216;
  v67 = 1065353216;
  v19 = (float)(a4[1] + a4[3]);
  v38 = v17 / (float)v34;
  v39 = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)v35;
  v45 = v19 / (float)v35;
  v47 = v45;
  v57 = v45;
  v59 = v45;
  v63 = v45;
  v65 = v45;
  v40 = v38;
  v41 = v39;
  v44 = v38;
  v46 = v38;
  v50 = (float)v18 / (float)v34;
  v51 = v39;
  v52 = v50;
  v53 = v39;
  v56 = v38;
  v58 = v38;
  v62 = v50;
  v64 = v50;
  v68 = v50;
  v69 = v39;
  v70 = v50;
  v71 = v39;
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D(a2);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v31 = 178;
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
  {
    v22 = *(int *)(a3[1] + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)((char *)a3 + v22 + 8) + 24LL))(
      (__int64)a3 + v22 + 8,
      ((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  }
  v36 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v11, a6, &v36);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v31 = 187;
    goto LABEL_14;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a2 + 3) + 40LL))((_QWORD *)a2 + 3);
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v11, *(float *)(v23 + 16));
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v31 = 189;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, SurfacePixelShaderNoRef, v31);
    return v13;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3);
  v25 = *((_QWORD *)a2 + 4);
  v72 = v24;
  v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 56LL))(v25);
  v27 = *(int *)(a3[1] + 8LL);
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)((char *)a3 + v27 + 8) + 24LL))((__int64)a3 + v27 + 8);
  v73[1] = &v32;
  v73[0] = 1LL;
  CSurfaceShaderComposer::RunShader(
    (_DWORD)v11,
    (unsigned int)v37,
    v29,
    (unsigned int)&v72,
    1,
    (__int64)&v74,
    0,
    (__int64)v73,
    v28,
    v26,
    v36,
    0LL,
    0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  return v13;
}
