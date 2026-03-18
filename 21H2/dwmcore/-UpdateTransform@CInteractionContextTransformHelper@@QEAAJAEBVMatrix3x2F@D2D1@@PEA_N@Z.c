/*
 * XREFs of ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1802AEA84
 * Callers:
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z @ 0x180273C70 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBVCMILMatrix@@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     GetIndividualScales @ 0x1802ADD80 (GetIndividualScales.c)
 *     GetInverse @ 0x1802ADE64 (GetInverse.c)
 *     IsEqualMatrix @ 0x1802AE000 (IsEqualMatrix.c)
 */

__int64 __fastcall CInteractionContextTransformHelper::UpdateTransform(
        CInteractionContextTransformHelper *this,
        const struct D2D1::Matrix3x2F *a2,
        bool *a3)
{
  int Inverse; // r8d
  unsigned __int64 v6; // xmm1_8
  unsigned __int64 v7; // xmm1_8
  __int128 v8; // xmm7
  __int64 v9; // xmm0_8
  float v10; // xmm6_4
  float v11; // xmm9_4
  __m128 v12; // xmm12
  float v13; // xmm7_4
  float v14; // xmm8_4
  __m128 v15; // xmm11
  float v16; // xmm5_4
  float v17; // xmm0_4
  __int128 v18; // xmm6
  __int64 v19; // xmm5_8
  __int128 v20; // xmm0
  __int64 v21; // xmm1_8
  __int128 v22; // xmm0
  __int64 v23; // xmm1_8
  __int128 v24; // xmm0
  __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  __int64 v27; // xmm1_8
  __int128 v28; // xmm1
  __int64 v30; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  __int128 v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-B0h]
  _QWORD v35[3]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v36[4]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  __int128 v39; // [rsp+B8h] [rbp-50h] BYREF
  float v40[4]; // [rsp+C8h] [rbp-40h]

  if ( !IsEqualMatrix((float *)a2, (float *)this) )
  {
    v6 = *((_QWORD *)a2 + 2);
    v33 = *(_OWORD *)a2;
    v34 = v6;
    Inverse = GetInverse((float *)&v33, (float *)&v36[1]);
    if ( Inverse >= 0 )
    {
      v7 = *((_QWORD *)a2 + 2);
      v33 = *(_OWORD *)a2;
      v30 = 0x3F8000003F800000LL;
      v34 = v7;
      Inverse = GetIndividualScales((__int64)&v33, (float *)&v30 + 1, (float *)&v30);
      if ( Inverse >= 0 )
      {
        v8 = *(_OWORD *)a2;
        v9 = *((_QWORD *)a2 + 2);
        v10 = 1.0 / *((float *)&v30 + 1);
        v15 = (__m128)(unsigned int)v9;
        v12 = (__m128)HIDWORD(v9);
        v11 = COERCE_FLOAT(HIDWORD(*(_QWORD *)a2)) * (float)(1.0 / *(float *)&v30);
        v12.m128_f32[0] = *((float *)&v9 + 1) * (float)(1.0 / *(float *)&v30);
        v13 = COERCE_FLOAT(*(_OWORD *)a2) * (float)(1.0 / *((float *)&v30 + 1));
        v14 = COERCE_FLOAT(*((_QWORD *)a2 + 1)) * (float)(1.0 / *((float *)&v30 + 1));
        v15.m128_f32[0] = *(float *)&v9 * (float)(1.0 / *((float *)&v30 + 1));
        *((float *)&v31 + 1) = v11;
        *((float *)&v32 + 1) = v12.m128_f32[0];
        *((float *)&v39 + 1) = *((float *)&v8 + 1) * (float)(1.0 / *(float *)&v30);
        *((float *)&v39 + 3) = *((float *)&v8 + 3) * (float)(1.0 / *(float *)&v30);
        v40[1] = v12.m128_f32[0];
        *(float *)&v31 = v13;
        *((_QWORD *)&v31 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v14));
        *(float *)&v32 = v15.m128_f32[0];
        *(float *)&v39 = v13;
        *((float *)&v39 + 2) = *((float *)&v8 + 2) * (float)(1.0 / *((float *)&v30 + 1));
        v40[0] = v15.m128_f32[0];
        Inverse = GetInverse((float *)&v39, (float *)&v37);
        if ( Inverse >= 0 )
        {
          DWORD2(v39) = 0;
          *((float *)&v39 + 3) = v16;
          *(_QWORD *)&v33 = __PAIR64__(LODWORD(v11), LODWORD(v13));
          *((_QWORD *)&v33 + 1) = __PAIR64__(LODWORD(v11), LODWORD(v14));
          *(_QWORD *)&v39 = LODWORD(v10);
          v17 = 0.0 - (float)(v10 * 0.0);
          v18 = v33;
          v40[0] = v17;
          v34 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          v40[1] = 0.0 - (float)(v16 * 0.0);
          v36[0] = _mm_unpacklo_ps(v15, v12).m128_u64[0];
          Inverse = GetInverse((float *)&v33, (float *)&v35[1]);
          if ( Inverse >= 0 )
          {
            *(_OWORD *)this = *(_OWORD *)a2;
            v20 = *(_OWORD *)&v36[1];
            *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
            v21 = v36[3];
            *(_OWORD *)((char *)this + 24) = v20;
            v22 = v31;
            *((_QWORD *)this + 5) = v21;
            v23 = v32;
            *((_OWORD *)this + 3) = v22;
            v24 = v37;
            *((_QWORD *)this + 8) = v23;
            v25 = v38;
            *(_OWORD *)((char *)this + 72) = v24;
            v26 = v39;
            *((_QWORD *)this + 11) = v25;
            v27 = *(_QWORD *)v40;
            *((_OWORD *)this + 6) = v26;
            *(_QWORD *)&v26 = v36[0];
            *((_QWORD *)this + 14) = v27;
            v28 = *(_OWORD *)&v35[1];
            *(_OWORD *)((char *)this + 120) = v18;
            *((_OWORD *)this + 9) = v28;
            *((_QWORD *)this + 20) = v26;
            *((_QWORD *)this + 17) = v19;
          }
        }
      }
    }
  }
  return (unsigned int)Inverse;
}
