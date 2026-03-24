/*
 * XREFs of ?GetRandomUnitDir@@YA?AUfloat3@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@AEBU1234@1_N@Z @ 0x1801E22D0
 * Callers:
 *     ?SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z @ 0x1801E1148 (-SpawnParticles@CParticleEmitterVisual@@IEAAJHAEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRandomOrientation@CParticleGenerator@@QEBA?AUfloat4@Numerics@Foundation@Windows@@AEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@Z @ 0x1801E1FFC (-GetRandomOrientation@CParticleGenerator@@QEBA-AUfloat4@Numerics@Foundation@Windows@@AEAV-$merse.c)
 * Callees:
 *     acosf_0 @ 0x1800F4727 (acosf_0.c)
 *     cosf_0 @ 0x1800F4763 (cosf_0.c)
 *     sinf_0 @ 0x1800F479F (sinf_0.c)
 *     ??$generate_canonical@M$0?0V?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@std@@@std@@YAMAEAV?$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PPPPPPPP@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@$0GMAHIJGF@@0@@Z @ 0x1801DDC24 (--$generate_canonical@M$0-0V-$mersenne_twister_engine@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$0PP.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1801E1F54 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z @ 0x1801E1FC8 (--8Numerics@Foundation@Windows@@YA_NAEBUfloat3@012@0@Z.c)
 *     ?D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z @ 0x1801E2788 (-D3DXVec3Transform@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DQuaternion@@@Z.c)
 */

struct D2DVector3 *__fastcall GetRandomUnitDir(struct D2DVector3 *a1, __int64 a2, float *a3, float *a4, char a5)
{
  float v6; // xmm0_4
  float v9; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  float *v14; // rax
  float v15; // xmm6_4
  float v16; // xmm5_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm2_4
  __m128 v21; // xmm4
  __m128 v22; // xmm3
  __m128 v23; // xmm1
  __m128 v24; // xmm4
  float v25; // xmm0_4
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm11_4
  float v29; // xmm12_4
  float v30; // xmm13_4
  float v31; // xmm8_4
  float v32; // xmm10_4
  __m128 v33; // xmm7
  float v34; // xmm9_4
  float v35; // xmm8_4
  __m128 v36; // xmm7
  __m128 v37; // xmm2
  __m128 v38; // xmm1
  float v39; // xmm6_4
  float v40; // xmm0_4
  float v41; // xmm4_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  float v44; // xmm5_4
  __m128 v45; // xmm3
  __m128 v46; // xmm2
  __m128 v47; // xmm1
  __m128 v48; // xmm3
  __int64 v50; // [rsp+30h] [rbp-69h] BYREF
  int v51; // [rsp+38h] [rbp-61h]
  __int64 v52; // [rsp+40h] [rbp-59h] BYREF
  float v53; // [rsp+48h] [rbp-51h]
  float v54; // [rsp+108h] [rbp+6Fh] BYREF
  int v55; // [rsp+110h] [rbp+77h] BYREF

  v6 = a3[1] * a4[1];
  v9 = *a3 * *a4;
  v11 = a3[2];
  v12 = v11 * a4[2];
  v55 = -1082130432;
  v13 = (float)(v9 + v6) + v12;
  v54 = v13;
  if ( v13 > 1.0 )
    goto LABEL_17;
  v14 = &v54;
  if ( v13 < -1.0 )
    v14 = (float *)&v55;
  v15 = *v14;
  if ( *v14 > 0.94999999 )
  {
LABEL_17:
    if ( !a5 )
    {
      v52 = 0x3F80000000000000LL;
      v53 = 0.0;
      if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v52) )
        v52 = 1065353216LL;
      else
        v52 = 0x3F80000000000000LL;
      v50 = v52;
      v51 = 0;
      v43 = v42 * 0.0;
      v44 = v42 * *(float *)&v52;
      *(float *)&v52 = v43 - (float)(v11 * *((float *)&v52 + 1));
      *((float *)&v52 + 1) = (float)(v11 * *(float *)&v50) - (float)(v41 * 0.0);
      v45 = _mm_movelh_ps(
              (__m128)(unsigned __int64)v52,
              (__m128)COERCE_UNSIGNED_INT((float)(v41 * *((float *)&v50 + 1)) - v44));
      v46 = _mm_mul_ps(v45, v45);
      v47 = _mm_shuffle_ps(v46, v46, 102);
      v46.m128_f32[0] = (float)(v46.m128_f32[0] + v47.m128_f32[0]) + _mm_shuffle_ps(v47, v47, 85).m128_f32[0];
      v48 = _mm_div_ps(v45, _mm_sqrt_ps(_mm_shuffle_ps(v46, v46, 0)));
      LODWORD(v52) = v48.m128_i32[0];
      LODWORD(v53) = _mm_shuffle_ps(v48, v48, 170).m128_u32[0];
      HIDWORD(v52) = _mm_shuffle_ps(v48, v48, 85).m128_u32[0];
      v20 = (float)(std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2)
                  + 0.0)
          * 6.2831855;
      goto LABEL_23;
    }
    *(_QWORD *)a1 = *(_QWORD *)a3;
    *((float *)a1 + 2) = a3[2];
  }
  else
  {
    if ( v15 < -0.94999999 )
    {
      std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
      v52 = 0x3F80000000000000LL;
      v53 = 0.0;
      if ( Windows::Foundation::Numerics::operator==(a3, (float *)&v52) )
        v52 = 1065353216LL;
      else
        v52 = 0x3F80000000000000LL;
      v53 = 0.0;
      v17 = a3[2];
      v18 = a3[1];
      v19 = *a3;
      v50 = v52;
      v51 = 0;
      *(float *)&v52 = (float)(v18 * 0.0) - (float)(v17 * *((float *)&v52 + 1));
      *((float *)&v52 + 1) = (float)(v17 * *(float *)&v50) - (float)(v19 * 0.0);
      v53 = (float)(v19 * *((float *)&v50 + 1)) - (float)(v18 * *(float *)&v50);
      v20 = v16;
      v21 = _mm_movelh_ps((__m128)(unsigned __int64)v52, (__m128)LODWORD(v53));
      v22 = _mm_mul_ps(v21, v21);
      v23 = _mm_shuffle_ps(v22, v22, 102);
      v22.m128_f32[0] = (float)(v22.m128_f32[0] + v23.m128_f32[0]) + _mm_shuffle_ps(v23, v23, 85).m128_f32[0];
      v24 = _mm_div_ps(v21, _mm_sqrt_ps(_mm_shuffle_ps(v22, v22, 0)));
      LODWORD(v52) = v24.m128_i32[0];
      LODWORD(v53) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
      HIDWORD(v52) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
LABEL_23:
      Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)&v50, (float *)&v52, v20);
      D3DXVec3Transform(a1, (const struct D2DVector3 *)a3, (const struct D2DQuaternion *)&v50);
      return a1;
    }
    v25 = acosf_0(*v14);
    v26 = v25;
    if ( !a5 )
      v26 = 12.566371 - v25;
    v27 = std::generate_canonical<float,-1,std::mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253>>(a2);
    v28 = *a3;
    v29 = a3[1];
    v30 = a3[2];
    v31 = a4[2];
    v32 = (float)(v27 + 0.0) * v26;
    v34 = a4[1] - (float)(v29 * v15);
    *(float *)&v52 = *a4 - (float)(*a3 * v15);
    v33.m128_f32[0] = *(float *)&v52;
    *((float *)&v52 + 1) = v34;
    v35 = v31 - (float)(v30 * v15);
    v53 = v35;
    if ( *(float *)&v52 != 0.0 || v34 != 0.0 || v35 != 0.0 )
    {
      v36 = _mm_movelh_ps((__m128)(unsigned __int64)v52, (__m128)LODWORD(v53));
      v37 = _mm_mul_ps(v36, v36);
      v38 = _mm_shuffle_ps(v37, v37, 102);
      v37.m128_f32[0] = (float)(v37.m128_f32[0] + v38.m128_f32[0]) + _mm_shuffle_ps(v38, v38, 85).m128_f32[0];
      v33 = _mm_div_ps(v36, _mm_sqrt_ps(_mm_shuffle_ps(v37, v37, 0)));
      LODWORD(v34) = _mm_shuffle_ps(v33, v33, 85).m128_u32[0];
      LODWORD(v35) = _mm_shuffle_ps(v33, v33, 170).m128_u32[0];
    }
    v39 = sinf_0(v32);
    v40 = cosf_0(v32);
    *(float *)a1 = (float)(v33.m128_f32[0] * v39) + (float)(v28 * v40);
    *((float *)a1 + 1) = (float)(v34 * v39) + (float)(v29 * v40);
    *((float *)a1 + 2) = (float)(v35 * v39) + (float)(v30 * v40);
  }
  return a1;
}
