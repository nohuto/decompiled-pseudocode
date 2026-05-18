/*
 * XREFs of sub_180116C4C @ 0x180116C4C
 * Callers:
 *     sub_180114BC0 @ 0x180114BC0 (sub_180114BC0.c)
 *     sub_180114D64 @ 0x180114D64 (sub_180114D64.c)
 *     sub_180114F0C @ 0x180114F0C (sub_180114F0C.c)
 *     sub_1801150E4 @ 0x1801150E4 (sub_1801150E4.c)
 *     sub_180115524 @ 0x180115524 (sub_180115524.c)
 *     sub_180115644 @ 0x180115644 (sub_180115644.c)
 * Callees:
 *     sub_1800B8C48 @ 0x1800B8C48 (sub_1800B8C48.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180116C4C(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  float v8; // xmm5_4
  float v9; // xmm6_4
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // eax
  float v13; // xmm7_4
  float v14; // xmm4_4
  float v15; // xmm8_4
  float v16; // xmm10_4
  float v17; // xmm9_4
  float v18; // xmm11_4
  _DWORD *result; // rax
  float v20; // xmm12_4
  float v21; // xmm13_4
  float v22; // xmm1_4
  __m128 v23; // xmm2
  __int64 v24; // [rsp+28h] [rbp-B9h]
  unsigned __int64 v25; // [rsp+38h] [rbp-A9h] BYREF
  __int64 v26; // [rsp+40h] [rbp-A1h]
  unsigned __int64 v27; // [rsp+48h] [rbp-99h] BYREF
  __int64 v28; // [rsp+50h] [rbp-91h]

  v8 = *(float *)(a2 + 8LL * a5 + 4) - *(float *)(a2 + 8LL * a3 + 4);
  v9 = *(float *)(a2 + 8LL * a5) - *(float *)(a2 + 8LL * a3);
  v10 = 3LL * a3;
  v11 = 3LL * a4;
  v12 = *(_DWORD *)(a1 + 12LL * a3 + 8);
  v13 = *(float *)(a2 + 8LL * a4 + 4) - *(float *)(a2 + 8LL * a3 + 4);
  v14 = *(float *)(a2 + 8LL * a4) - *(float *)(a2 + 8LL * a3);
  v25 = *(_QWORD *)(a1 + 12LL * a3);
  v27 = *(_QWORD *)(a1 + 12LL * a4);
  v15 = *(float *)&v27 - *(float *)&v25;
  v16 = *((float *)&v27 + 1) - *((float *)&v25 + 1);
  v24 = *(_QWORD *)(a1 + 12LL * a5);
  v17 = *(float *)&v24 - *(float *)&v25;
  v18 = *((float *)&v24 + 1) - *((float *)&v25 + 1);
  LODWORD(v26) = v12;
  LODWORD(v28) = *(_DWORD *)(a1 + 12LL * a4 + 8);
  result = (_DWORD *)*(unsigned int *)(a1 + 12LL * a5 + 8);
  v20 = *(float *)&v28 - *(float *)&v26;
  v21 = *(float *)(a1 + 12LL * a5 + 8) - *(float *)&v26;
  v22 = (float)(v8 * v14) - (float)(v13 * v9);
  if ( v22 != 0.0 )
  {
    *(float *)&v25 = (float)((float)(v8 * v15) - (float)(v13 * v17)) * (float)(1.0 / v22);
    *((float *)&v25 + 1) = (float)((float)(v8 * v16) - (float)(v13 * v18)) * (float)(1.0 / v22);
    *(float *)&v26 = (float)((float)(v8 * v20) - (float)(v13 * v21)) * (float)(1.0 / v22);
    *(float *)&v27 = (float)((float)(v14 * v17) - (float)(v9 * v15)) * (float)(1.0 / v22);
    *(float *)&v28 = (float)((float)(v14 * v21) - (float)(v9 * v20)) * (float)(1.0 / v22);
    *((float *)&v27 + 1) = (float)((float)(v14 * v18) - (float)(v9 * v16)) * (float)(1.0 / v22);
    if ( a6 )
    {
      v23 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v25, (__m128)(unsigned int)v26));
      LODWORD(v25) = v23.m128_i32[0];
      HIDWORD(v25) = _mm_shuffle_ps(v23, v23, 85).m128_u32[0];
      LODWORD(v26) = _mm_shuffle_ps(v23, v23, 170).m128_u32[0];
    }
    sub_1800B8C48((_DWORD *)(a7 + 12LL * a3), &v25);
    sub_1800B8C48((_DWORD *)(a7 + 4 * v11), &v25);
    sub_1800B8C48((_DWORD *)(a7 + 12LL * a5), &v25);
    sub_1800B8C48((_DWORD *)(a8 + 4 * v10), &v27);
    sub_1800B8C48((_DWORD *)(a8 + 4 * v11), &v27);
    return sub_1800B8C48((_DWORD *)(a8 + 12LL * a5), &v27);
  }
  return result;
}
