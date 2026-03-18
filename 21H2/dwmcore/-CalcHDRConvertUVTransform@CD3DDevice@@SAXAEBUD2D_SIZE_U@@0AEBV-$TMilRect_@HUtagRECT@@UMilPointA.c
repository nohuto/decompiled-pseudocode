/*
 * XREFs of ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18027CD28
 * Callers:
 *     ?HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@1W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18027E784 (-HDRConvert@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0AEBUD2D_SIZE_U@@1AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@3PEAUID3D11RenderTargetView@@2W4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18027EA64 (-HDRConvertWithFakeOverlay@CD3DDevice@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001E4B8 (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18003CF50 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A6570 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800AE500 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x180260ED8 (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 */

void __fastcall CD3DDevice::CalcHDRConvertUVTransform(
        int *a1,
        int *a2,
        unsigned int *a3,
        enum DXGI_MODE_ROTATION a4,
        __int64 a5,
        CMILMatrix *a6)
{
  int v6; // eax
  __m128i v8; // xmm9
  __m128i v9; // xmm10
  __m128i v10; // xmm7
  __m128i v11; // xmm6
  __m128i v12; // xmm5
  __m128i v13; // xmm4
  unsigned int v14; // xmm0_4
  int v15; // eax
  float v16; // xmm0_4
  int v17; // eax
  __m128i v18; // xmm0
  float v19; // xmm9_4
  float v20; // xmm10_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  __int64 v25; // r8
  __int64 v26; // r9
  const struct CMILMatrix *v27; // rdx
  __int64 v28; // r9
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v32; // r8
  __int64 v33; // r8
  __int64 v34; // r9
  _OWORD v35[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v36; // [rsp+68h] [rbp-A0h]
  _OWORD v37[4]; // [rsp+78h] [rbp-90h] BYREF
  int v38; // [rsp+B8h] [rbp-50h]
  _BYTE v39[64]; // [rsp+C8h] [rbp-40h] BYREF
  int v40; // [rsp+108h] [rbp+0h]
  __int128 v41; // [rsp+118h] [rbp+10h] BYREF
  float v42[4]; // [rsp+128h] [rbp+20h] BYREF
  float v43[4]; // [rsp+138h] [rbp+30h] BYREF
  float v44[4]; // [rsp+148h] [rbp+40h] BYREF
  __int128 v45; // [rsp+158h] [rbp+50h] BYREF

  v6 = *a1;
  v8 = _mm_cvtsi32_si128(*a3);
  v9 = _mm_cvtsi32_si128(a3[1]);
  v10 = _mm_cvtsi32_si128(a3[2]);
  v11 = _mm_cvtsi32_si128(a3[3]);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)a5);
  v13 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 4));
  *(_QWORD *)&v41 = 0LL;
  v44[0] = 0.0;
  v44[1] = 0.0;
  v43[0] = 0.0;
  v43[1] = 0.0;
  v40 = 0;
  v45 = _xmm;
  *(float *)&v14 = (float)v6;
  v15 = *a2;
  *((_QWORD *)&v41 + 1) = __PAIR64__((float)a1[1], v14);
  v16 = (float)v15;
  v17 = a2[1];
  v44[2] = v16;
  v18 = _mm_cvtsi32_si128(*(_DWORD *)(a5 + 8));
  v44[3] = (float)v17;
  LODWORD(v19) = _mm_cvtepi32_ps(v8).m128_u32[0];
  LODWORD(v20) = _mm_cvtepi32_ps(v9).m128_u32[0];
  LODWORD(v21) = _mm_cvtepi32_ps(v10).m128_u32[0];
  LODWORD(v22) = _mm_cvtepi32_ps(v11).m128_u32[0];
  v43[3] = (float)*(int *)(a5 + 12) - _mm_cvtepi32_ps(v13).m128_f32[0];
  v42[0] = v19;
  v42[1] = v20;
  v42[2] = v21;
  v42[3] = v22;
  v43[2] = _mm_cvtepi32_ps(v18).m128_f32[0] - _mm_cvtepi32_ps(v12).m128_f32[0];
  CMILMatrix::InferAffineMatrix((__int64)a6, (float *)&v45, (float *)&v41);
  if ( v24 != 0.0 || v23 != 0.0 )
    CMILMatrix::Translate(a6, COERCE_FLOAT(LODWORD(v24) ^ _xmm), COERCE_FLOAT(LODWORD(v23) ^ _xmm));
  if ( a4 == DXGI_MODE_ROTATION_IDENTITY )
  {
    CMILMatrix::InferAffineMatrix((__int64)v39, v43, v42);
    v27 = (const struct CMILMatrix *)v39;
  }
  else
  {
    v36 = 0;
    v41 = 0LL;
    CMILMatrix::SetToRotation((CMILMatrix *)v35, v21 - v19, v22 - v20, a4);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v35, (__int64)v42, (float *)&v41, v28);
    CMILMatrix::InferAffineMatrix((__int64)v39, v43, (float *)&v41);
    CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v39, v29, v30);
    v37[0] = v35[0];
    v37[1] = v35[1];
    v37[2] = v35[2];
    v37[3] = v35[3];
    v38 = v36;
    CMILMatrix::Invert((CMILMatrix *)v37, v31, v32);
    v27 = (const struct CMILMatrix *)v37;
  }
  CMILMatrix::Multiply(a6, v27, v25, v26);
  CMILMatrix::InferAffineMatrix((__int64)v39, v44, (float *)&v45);
  CMILMatrix::Multiply(a6, (const struct CMILMatrix *)v39, v33, v34);
}
