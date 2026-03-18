/*
 * XREFs of ?CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180191004
 * Callers:
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180190E50 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801914B0 (-RestoreState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18004DDB4 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18018420C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11PixelShader@@@Z @ 0x180245858 (-GetSurfacePixelShaderNoRef@CSurfaceShaderComposer@@QEAAJW4SurfaceShaderType@@PEAPEAUID3D11Pixel.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBV?$span@USamplerMode@@$0?0@gsl@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x180245974 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z @ 0x180245F68 (-UpdateSDRBoostConstantBuffer@CSurfaceShaderComposer@@QEAAJM@Z.c)
 */

__int64 __fastcall CGammaBlendLayer::CopyAndTransform(
        __int64 a1,
        unsigned __int64 a2,
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
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // r8
  char v27; // al
  int v28; // r8d
  unsigned int v30; // [rsp+20h] [rbp-E0h]
  __int16 v31; // [rsp+70h] [rbp-90h] BYREF
  char v32; // [rsp+72h] [rbp-8Eh]
  int v33; // [rsp+78h] [rbp-88h] BYREF
  int v34; // [rsp+7Ch] [rbp-84h]
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  float v37; // [rsp+98h] [rbp-68h]
  float v38; // [rsp+9Ch] [rbp-64h]
  float v39; // [rsp+A0h] [rbp-60h]
  float v40; // [rsp+A4h] [rbp-5Ch]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  float v43; // [rsp+B0h] [rbp-50h]
  float v44; // [rsp+B4h] [rbp-4Ch]
  float v45; // [rsp+B8h] [rbp-48h]
  float v46; // [rsp+BCh] [rbp-44h]
  int v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C4h] [rbp-3Ch]
  float v49; // [rsp+C8h] [rbp-38h]
  float v50; // [rsp+CCh] [rbp-34h]
  float v51; // [rsp+D0h] [rbp-30h]
  float v52; // [rsp+D4h] [rbp-2Ch]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  float v55; // [rsp+E0h] [rbp-20h]
  float v56; // [rsp+E4h] [rbp-1Ch]
  float v57; // [rsp+E8h] [rbp-18h]
  float v58; // [rsp+ECh] [rbp-14h]
  int v59; // [rsp+F0h] [rbp-10h]
  int v60; // [rsp+F4h] [rbp-Ch]
  float v61; // [rsp+F8h] [rbp-8h]
  float v62; // [rsp+FCh] [rbp-4h]
  float v63; // [rsp+100h] [rbp+0h]
  float v64; // [rsp+104h] [rbp+4h]
  int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]
  float v67; // [rsp+110h] [rbp+10h]
  float v68; // [rsp+114h] [rbp+14h]
  float v69; // [rsp+118h] [rbp+18h]
  float v70; // [rsp+11Ch] [rbp+1Ch]
  __int64 v71; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v72[2]; // [rsp+128h] [rbp+28h] BYREF
  __int128 v73; // [rsp+138h] [rbp+38h] BYREF
  __int64 v74; // [rsp+148h] [rbp+48h]

  v9 = (__int64)a3 + *(int *)(a3[1] + 8LL) + 8;
  v11 = *(CSurfaceShaderComposer **)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9) + 1512);
  v12 = 0LL;
  v74 = 0LL;
  v31 = 256;
  v32 = 1;
  v73 = 0LL;
  if ( !v11 )
  {
    v13 = -2005270524;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2005270524, 0x91u, 0LL);
    return v13;
  }
  do
  {
    *((float *)&v73 + v12) = (float)*(int *)(a5 + 4 * v12);
    ++v12;
  }
  while ( v12 < 4 );
  v14 = a3[1];
  HIDWORD(v74) = 1065353216;
  v15 = (void (__fastcall ***)(_QWORD, int *))((char *)a3 + *(int *)(v14 + 16) + 8);
  (**v15)(v15, &v33);
  v16 = _mm_cvtsi32_si128(a4[1]);
  v17 = (float)*a4;
  v36[0] = -1082130432;
  v36[1] = 1065353216;
  v41 = -1082130432;
  v42 = -1082130432;
  v47 = 1065353216;
  v48 = 1065353216;
  v53 = -1082130432;
  v18 = *a4 + a4[2];
  v54 = -1082130432;
  v59 = 1065353216;
  v60 = -1082130432;
  v65 = 1065353216;
  v66 = 1065353216;
  v19 = (float)(a4[1] + a4[3]);
  v37 = v17 / (float)v33;
  v38 = _mm_cvtepi32_ps(v16).m128_f32[0] / (float)v34;
  v44 = v19 / (float)v34;
  v46 = v44;
  v56 = v44;
  v58 = v44;
  v62 = v44;
  v64 = v44;
  v39 = v37;
  v40 = v38;
  v43 = v37;
  v45 = v37;
  v49 = (float)v18 / (float)v33;
  v50 = v38;
  v51 = v49;
  v52 = v38;
  v55 = v37;
  v57 = v37;
  v61 = v49;
  v63 = v49;
  v67 = v49;
  v68 = v38;
  v69 = v49;
  v70 = v38;
  SurfacePixelShaderNoRef = CDrawingContext::FlushD2D((CDrawingContext *)a2);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 181;
    goto LABEL_14;
  }
  if ( g_LockAndReadLayer )
  {
    v22 = *(int *)(a3[1] + 16LL);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)((char *)a3 + v22 + 8) + 24LL))(
      (__int64)a3 + v22 + 8,
      (a2 + 24) & ((unsigned __int128)-(__int128)a2 >> 64));
  }
  v35 = 0LL;
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::GetSurfacePixelShaderNoRef(v11, a6, &v35);
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 190;
    goto LABEL_14;
  }
  SurfacePixelShaderNoRef = CSurfaceShaderComposer::UpdateSDRBoostConstantBuffer(v11, *(float *)(a2 + 72));
  v13 = SurfacePixelShaderNoRef;
  if ( SurfacePixelShaderNoRef < 0 )
  {
    v30 = 192;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, SurfacePixelShaderNoRef, v30, 0LL);
    return v13;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD *))(*a3 + 8LL))(a3);
  v24 = *(_QWORD *)(a2 + 32);
  v71 = v23;
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
  v26 = *(int *)(a3[1] + 8LL);
  v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)((char *)a3 + v26 + 8) + 24LL))((__int64)a3 + v26 + 8);
  v72[1] = &v31;
  v72[0] = 1LL;
  CSurfaceShaderComposer::RunShader(
    (_DWORD)v11,
    (unsigned int)v36,
    v28,
    (unsigned int)&v71,
    1,
    (__int64)&v73,
    0,
    (__int64)v72,
    v27,
    v25,
    v35,
    0LL,
    0);
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture((CDrawingContext *)a2);
  return v13;
}
