/*
 * XREFs of ?CalcEyePointOrVector@CCompositionLight@@IEBA?AUfloat4@Numerics@Foundation@Windows@@PEAVCVisual@@@Z @ 0x180021938
 * Callers:
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180021A00 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801BAF80 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1801BC460 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 * Callees:
 *     ?Transform3DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_3F@@AEBU2@@Z @ 0x18002361C (-Transform3DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_3F@@AEBU2@@Z.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180066BDC (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x1800CD690 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 *     sqrtf_0 @ 0x1800EECEB (sqrtf_0.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F52BC (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801F55A0 (-IntersectFourLines@@YA_NULine3D@@000MPEAUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall CCompositionLight::CalcEyePointOrVector(__int64 a1, __int64 a2, __int64 a3)
{
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  float v7; // xmm14_4
  float v8; // xmm15_4
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm10_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm6_4
  float v16; // xmm0_4
  float v17; // xmm8_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  unsigned int v20; // xmm1_4
  CCompositionLight *v21; // rcx
  unsigned int v22; // xmm1_4
  __int128 v23; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h]
  __int128 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-A0h]
  __int128 v27; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int128 v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-60h]
  __int128 v31; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-40h]
  __int128 v33; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-20h]
  _OWORD v35[4]; // [rsp+F8h] [rbp-10h] BYREF
  int v36; // [rsp+138h] [rbp+30h]
  _OWORD v37[4]; // [rsp+148h] [rbp+40h] BYREF
  int v38; // [rsp+188h] [rbp+80h]

  v3 = *(CTransform3D **)(a3 + 232);
  if ( v3
    && (Matrix = CTransform3D::GetMatrix(v3, (const struct D2D_SIZE_F *)(a3 + 132)),
        v36 = 0,
        CMILMatrix::SetToInverse((CMILMatrix *)v35, Matrix)) )
  {
    v37[0] = v35[0];
    v37[1] = v35[1];
    v38 = v36;
    v37[2] = v35[2];
    v37[3] = v35[3];
    CalcFrustumOutline(v37, &v29, &v23, &v25, &v27);
    v7 = *(float *)&v29 - *(float *)&v27;
    v8 = *((float *)&v29 + 1) - *((float *)&v27 + 1);
    v9 = *((float *)&v29 + 2) - *((float *)&v27 + 2);
    v10 = *(float *)&v23 - *(float *)&v25;
    v11 = *((float *)&v23 + 1) - *((float *)&v25 + 1);
    v12 = *((float *)&v23 + 2) - *((float *)&v25 + 2);
    v13 = *(float *)&v27 - *(float *)&v25;
    v14 = *((float *)&v27 + 1) - *((float *)&v25 + 1);
    v15 = *((float *)&v27 + 2) - *((float *)&v25 + 2);
    v31 = v27;
    v27 = v25;
    v32 = v28;
    v25 = v23;
    v28 = v26;
    v26 = v24;
    v33 = v29;
    v34 = v30;
    v16 = sqrtf_0(
            (float)((float)((float)(*((float *)&v29 + 1) - *((float *)&v23 + 1))
                          * (float)(*((float *)&v29 + 1) - *((float *)&v23 + 1)))
                  + (float)((float)(*(float *)&v29 - *(float *)&v23) * (float)(*(float *)&v29 - *(float *)&v23)))
          + (float)((float)(*((float *)&v29 + 2) - *((float *)&v23 + 2))
                  * (float)(*((float *)&v29 + 2) - *((float *)&v23 + 2))));
    v17 = (float)(v16 + sqrtf_0((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15))) * 0.5;
    v18 = sqrtf_0((float)((float)(v8 * v8) + (float)(v7 * v7)) + (float)(v9 * v9));
    v19 = sqrtf_0((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12));
    if ( (unsigned __int8)IntersectFourLines(
                            &v33,
                            &v25,
                            &v27,
                            &v31,
                            (float)(v17 + (float)((float)(v18 + v19) * 0.5)) / 20.0,
                            &v23) )
    {
      v20 = DWORD1(v23);
      *(_DWORD *)a2 = v23;
      *(_QWORD *)(a2 + 4) = __PAIR64__(DWORD2(v23), v20);
      *(_DWORD *)(a2 + 12) = 1065353216;
      return a2;
    }
    *(_QWORD *)&v23 = 0LL;
    DWORD2(v23) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform3DVector((CMILMatrix *)v35, (struct D2D_VECTOR_3F *)&v25, (const struct D2D_VECTOR_3F *)&v23);
    LODWORD(v23) = v25;
    *(_QWORD *)((char *)&v23 + 4) = *(_QWORD *)((char *)&v25 + 4);
    CCompositionLight::NormalizeVec3(
      v21,
      (const struct Windows::Foundation::Numerics::float3 *)&v23,
      (struct Windows::Foundation::Numerics::float3 *)&v25);
    v22 = DWORD1(v25);
    *(_DWORD *)a2 = v25;
    *(_QWORD *)(a2 + 4) = __PAIR64__(DWORD2(v25), v22);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 8) = 1065353216;
  }
  *(_DWORD *)(a2 + 12) = 0;
  return a2;
}
