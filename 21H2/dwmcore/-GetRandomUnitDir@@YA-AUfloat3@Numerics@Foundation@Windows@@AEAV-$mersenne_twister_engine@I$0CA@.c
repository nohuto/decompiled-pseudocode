/*
 * XREFs of ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x180231338
 * Callers:
 *     ?GetRandomDirection@CParticleGenerator@@QEBA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231004 (-GetRandomDirection@CParticleGenerator@@QEBA-AUfloat3@Numerics@Foundation@Windows@@AEAV-$mersenn.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x180231060 (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 * Callees:
 *     acosf @ 0x180101880 (acosf.c)
 *     cosf @ 0x1801018C8 (cosf.c)
 *     _o_sinf_0 @ 0x180101964 (_o_sinf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x18022CC28 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x180230F5C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x180230FD0 (--8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z @ 0x1802317C4 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUquaternion@123@@Z.c)
 */

__int64 __fastcall GetRandomUnitDir(__int64 a1, __int64 a2, float *a3, float *a4, char a5)
{
  float v6; // xmm3_4
  __m128 v10; // xmm2
  float v11; // xmm6_4
  float v12; // xmm0_4
  float v13; // xmm7_4
  float v14; // xmm0_4
  float v15; // xmm11_4
  float v16; // xmm12_4
  float v17; // xmm13_4
  float v18; // xmm10_4
  float v19; // xmm7_4
  float v20; // xmm9_4
  float v21; // xmm8_4
  float v22; // xmm7_4
  __m128 v23; // xmm7
  __m128 v24; // xmm2
  __m128 v25; // xmm1
  __m128 v26; // xmm7
  float v27; // xmm6_4
  float v28; // xmm0_4
  float v29; // xmm5_4
  __m128 v30; // xmm4
  __m128 v31; // xmm2
  float v32; // xmm1_4
  float v33; // xmm3_4
  __m128 v34; // xmm0
  float v35; // xmm2_4
  __m128 v36; // xmm4
  __m128 v37; // xmm4
  __m128 v38; // xmm3
  __m128 v39; // xmm1
  __m128 v40; // xmm4
  __m128 v41; // xmm4
  __m128 v42; // xmm1
  __m128 v43; // xmm3
  __m128 v44; // xmm3
  __m128 v45; // xmm2
  __m128 v46; // xmm1
  __m128 v47; // xmm3
  __int64 v49; // [rsp+28h] [rbp-51h] BYREF
  float v50; // [rsp+30h] [rbp-49h]
  __int64 v51; // [rsp+38h] [rbp-41h] BYREF
  float v52[34]; // [rsp+40h] [rbp-39h]

  v6 = *a3;
  v10 = (__m128)*((unsigned int *)a3 + 2);
  v11 = (float)((float)(*a3 * *a4) + (float)(a3[1] * a4[1])) + (float)(a3[2] * a4[2]);
  if ( v11 > 1.0 )
    goto LABEL_16;
  if ( v11 < -1.0 )
  {
LABEL_12:
    std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
    v49 = 0x3F80000000000000LL;
    v50 = 0.0;
    if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v49) )
      v51 = 1065353216LL;
    else
      v51 = 0x3F80000000000000LL;
    v52[0] = 0.0;
    v30 = (__m128)*((unsigned int *)a3 + 2);
    v31 = (__m128)*((unsigned int *)a3 + 1);
    v32 = *a3;
    v49 = v51;
    v50 = 0.0;
    v33 = v31.m128_f32[0] * *(float *)&v51;
    v31.m128_f32[0] = (float)(v31.m128_f32[0] * 0.0) - (float)(v30.m128_f32[0] * *((float *)&v51 + 1));
    v30.m128_f32[0] = (float)(v30.m128_f32[0] * *(float *)&v51) - (float)(v32 * 0.0);
    v34 = v31;
    v35 = v29;
    v34.m128_u64[0] = _mm_unpacklo_ps(v34, v30).m128_u64[0];
    v36 = 0LL;
    v36.m128_u64[0] = v34.m128_u64[0];
    v52[0] = (float)(v32 * *((float *)&v51 + 1)) - v33;
    v37 = _mm_movelh_ps(v36, (__m128)LODWORD(v52[0]));
    v38 = _mm_mul_ps(v37, v37);
    v39 = _mm_shuffle_ps(v38, v38, 102);
    v38.m128_f32[0] = (float)(v38.m128_f32[0] + v39.m128_f32[0]) + _mm_shuffle_ps(v39, v39, 85).m128_f32[0];
    v40 = _mm_div_ps(v37, _mm_sqrt_ps(_mm_shuffle_ps(v38, v38, 0)));
    v51 = v40.m128_u64[0];
    LODWORD(v52[0]) = _mm_shuffle_ps(v40, v40, 170).m128_u32[0];
    goto LABEL_22;
  }
  if ( v11 > 0.94999999 )
  {
LABEL_16:
    if ( a5 )
    {
      *(_QWORD *)a1 = *(_QWORD *)a3;
      *(float *)(a1 + 8) = a3[2];
      return a1;
    }
    v51 = 0x3F80000000000000LL;
    v52[0] = 0.0;
    if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v51) )
      v51 = 1065353216LL;
    else
      v51 = 0x3F80000000000000LL;
    v42 = v41;
    v49 = v51;
    v50 = 0.0;
    v42.m128_f32[0] = (float)(v41.m128_f32[0] * 0.0) - (float)(v10.m128_f32[0] * *((float *)&v51 + 1));
    v10.m128_f32[0] = (float)(v10.m128_f32[0] * *(float *)&v51) - (float)(v6 * 0.0);
    v52[0] = (float)(v6 * *((float *)&v51 + 1)) - (float)(v41.m128_f32[0] * *(float *)&v51);
    v43 = 0LL;
    v43.m128_u64[0] = _mm_unpacklo_ps(v42, v10).m128_u64[0];
    v44 = _mm_movelh_ps(v43, (__m128)LODWORD(v52[0]));
    v45 = _mm_mul_ps(v44, v44);
    v46 = _mm_shuffle_ps(v45, v45, 102);
    v45.m128_f32[0] = (float)(v45.m128_f32[0] + v46.m128_f32[0]) + _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
    v47 = _mm_div_ps(v44, _mm_sqrt_ps(_mm_shuffle_ps(v45, v45, 0)));
    v51 = v47.m128_u64[0];
    LODWORD(v52[0]) = _mm_shuffle_ps(v47, v47, 170).m128_u32[0];
    v35 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2)
                + 0.0)
        * 6.2831855;
LABEL_22:
    Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v49, (float *)&v51, v35);
    Windows::Foundation::Numerics::transform(a1, a3, &v49);
    return a1;
  }
  if ( v11 < -0.94999999 )
    goto LABEL_12;
  v12 = acosf(v11);
  v13 = v12;
  if ( !a5 )
    v13 = 12.566371 - v12;
  v14 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[2];
  v18 = (float)(v14 + 0.0) * v13;
  v19 = a4[2];
  v21 = a4[1] - (float)(v16 * v11);
  *(float *)&v49 = *a4 - (float)(*a3 * v11);
  v20 = *(float *)&v49;
  *((float *)&v49 + 1) = v21;
  v22 = v19 - (float)(v17 * v11);
  v50 = v22;
  if ( *(float *)&v49 != 0.0 || v21 != 0.0 || v22 != 0.0 )
  {
    v23 = _mm_movelh_ps((__m128)(unsigned __int64)v49, (__m128)LODWORD(v50));
    v24 = _mm_mul_ps(v23, v23);
    v25 = _mm_shuffle_ps(v24, v24, 102);
    v24.m128_f32[0] = (float)(v24.m128_f32[0] + v25.m128_f32[0]) + _mm_shuffle_ps(v25, v25, 85).m128_f32[0];
    v26 = _mm_div_ps(v23, _mm_sqrt_ps(_mm_shuffle_ps(v24, v24, 0)));
    v51 = v26.m128_u64[0];
    v20 = v26.m128_f32[0];
    v21 = v26.m128_f32[1];
    LODWORD(v22) = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
  }
  v27 = o_sinf_0(v18);
  v28 = cosf(v18);
  *(float *)a1 = (float)(v20 * v27) + (float)(v15 * v28);
  *(float *)(a1 + 4) = (float)(v21 * v27) + (float)(v16 * v28);
  *(float *)(a1 + 8) = (float)(v22 * v27) + (float)(v17 * v28);
  return a1;
}
