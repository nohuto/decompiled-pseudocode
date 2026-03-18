/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x18000DA2C
 * Callers:
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x18000B66C (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x18000C550 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x18000CBC0 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x18000DC50 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18000DD44 (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        FLOAT *a4)
{
  unsigned int v8; // ebx
  const struct CCompositionLight *v9; // rax
  __int64 v10; // rdx
  const struct CCompositionLight *v11; // r14
  __int64 v12; // rdx
  float v13; // xmm6_4
  float v14; // xmm7_4
  __int64 (__fastcall *v15)(const struct CVisualTree *); // rax
  float v16; // xmm8_4
  float *v17; // rax
  FLOAT v18; // xmm8_4
  FLOAT v19; // xmm7_4
  __m128 v20; // xmm1
  unsigned __int64 v21; // xmm1_8
  FLOAT z; // eax
  int v24; // eax
  unsigned int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rax
  FLOAT v29; // xmm1_4
  FLOAT v30; // xmm0_4
  struct D2D_VECTOR_4F v31; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v32; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v33[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+98h] [rbp-70h]
  _OWORD v36[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v37; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2);
  v37 = 0;
  v11 = v9;
  if ( a3 == v9 )
  {
    v36[0] = _xmm;
    v36[1] = _xmm;
    v36[2] = _xmm;
    v36[3] = _xmm;
    LOWORD(v37) = 32085;
  }
  else
  {
    v24 = CVisual::CalcSrcToDestVisualTransform(this, v10, v9, a3, v36);
    v8 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x59u, 0LL);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 232LL))(a2) == 2 )
  {
    v28 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 240LL))(a2);
    v29 = *(float *)(v28 + 4);
    v31.x = *(FLOAT *)v28;
    v30 = *(float *)(v28 + 8);
    v31.y = v29;
    v31.z = v30;
    LODWORD(v31.w) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v36, &v32, &v31);
    v31.z = v32.z;
    v21 = _mm_unpacklo_ps((__m128)LODWORD(v32.x), (__m128)LODWORD(v32.y)).m128_u64[0];
  }
  else
  {
    v35 = 0;
    if ( a3 == v11 )
    {
      v33[0] = _xmm;
      v33[1] = _xmm;
      v33[2] = _xmm;
      v34 = _xmm;
      LOWORD(v35) = 32085;
    }
    else
    {
      v26 = CVisual::CalcSrcToDestVisualTransform(this, v12, a3, v11, v33);
      v8 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x72u, 0LL);
        return v8;
      }
    }
    v13 = *(float *)&v34;
    v14 = *((float *)&v34 + 1);
    v15 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 248LL);
    v16 = *((float *)&v34 + 2);
    v31.w = *((FLOAT *)&v34 + 3);
    v17 = (float *)v15(a2);
    v18 = v16 - (float)(v17[2] * 100.0);
    v19 = v14 - (float)(v17[1] * 100.0);
    v31.x = v13 - (float)(*v17 * 100.0);
    v31.z = v18;
    v31.y = v19;
    v20 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v36, &v32, &v31));
    LODWORD(v31.z) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v21 = _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0];
  }
  z = v31.z;
  *(_QWORD *)a4 = v21;
  a4[2] = z;
  return v8;
}
