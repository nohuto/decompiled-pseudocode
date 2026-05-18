/*
 * XREFs of sub_1800866A4 @ 0x1800866A4
 * Callers:
 *     sub_180012460 @ 0x180012460 (sub_180012460.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800FE7B0 @ 0x1800FE7B0 (sub_1800FE7B0.c)
 *     sub_180102090 @ 0x180102090 (sub_180102090.c)
 *     sub_1801023A0 @ 0x1801023A0 (sub_1801023A0.c)
 * Callees:
 *     sub_18001BA00 @ 0x18001BA00 (sub_18001BA00.c)
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_180085020 @ 0x180085020 (sub_180085020.c)
 *     sub_180085248 @ 0x180085248 (sub_180085248.c)
 *     sub_180085444 @ 0x180085444 (sub_180085444.c)
 *     sub_180085CD8 @ 0x180085CD8 (sub_180085CD8.c)
 *     sub_180086C14 @ 0x180086C14 (sub_180086C14.c)
 *     ?_Init@?$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180088790 (-_Init@-$numpunct@_W@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_180089CA0 @ 0x180089CA0 (sub_180089CA0.c)
 *     sub_180089D84 @ 0x180089D84 (sub_180089D84.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     acosf @ 0x18012502A (acosf.c)
 */

__int64 __fastcall sub_1800866A4(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __m128 v12; // xmm2
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  __int128 v20; // [rsp+20h] [rbp-89h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-71h]
  __int64 v23; // [rsp+40h] [rbp-69h] BYREF
  int v24; // [rsp+48h] [rbp-61h]
  unsigned __int64 v25; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+58h] [rbp-51h]
  __int128 v27; // [rsp+60h] [rbp-49h] BYREF
  _OWORD v28[4]; // [rsp+A0h] [rbp-9h] BYREF

  sub_18008933C(a1);
  sub_180085CD8(a1, (__int64)&v23);
  sub_180083FF0(&v21, a2, (unsigned __int64 *)&v23);
  v6 = 0LL;
  v6.m128_f32[0] = *(float *)&v21;
  v7 = _mm_movelh_ps(_mm_unpacklo_ps(v6, (__m128)HIDWORD(v21)), (__m128)v22);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  if ( _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)).m128_f32[0] <= 0.00000059604645 )
  {
    v20 = xmmword_180214CD0;
  }
  else
  {
    v26 = v22;
    v25 = v21;
    sub_180086C14(&v25);
    v10 = *(_DWORD *)(a3 + 8);
    v21 = *(_QWORD *)a3;
    v22 = v10;
    sub_180086C14(&v21);
    v11 = sub_180085248(&v25, &v20, &v21);
    if ( !v11 )
      wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x1F1u);
    v12 = _mm_movelh_ps((__m128)*(unsigned __int64 *)v11, (__m128)(unsigned int)v11[2]);
    v13 = _mm_mul_ps(v12, v12);
    v14 = _mm_shuffle_ps(v13, v13, 102);
    v13.m128_f32[0] = (float)(v13.m128_f32[0] + v14.m128_f32[0]) + _mm_shuffle_ps(v14, v14, 85).m128_f32[0];
    if ( _mm_sqrt_ps(_mm_shuffle_ps(v13, v13, 0)).m128_f32[0] <= 0.00000059604645 )
    {
      v23 = qword_180214C68;
      v24 = dword_180214C70;
      sub_180085248((unsigned __int64 *)&v23, &v21, &v25);
      sub_180086C14(&v21);
      LODWORD(v16) = sub_180085444((unsigned __int64 *)&v23, &v25).m128_u32[0];
      v17 = fmaxf(v16, -1.0);
      v18 = fminf(v17, 1.0);
      acosf(v18);
      v15 = _mm_movelh_ps((__m128)v21, (__m128)v22);
      sub_180089CA0();
    }
    else
    {
      sub_180085020((__int64)v28, (unsigned __int64 *)&v23, a2, &v21);
      sub_18001BA00(v28, (__int64)&v27);
      v15.m128_u64[1] = *((_QWORD *)&v27 + 1);
      *(double *)v15.m128_u64 = sub_180089D84();
    }
    v20 = (__int128)v15;
  }
  return std::numpunct<wchar_t>::_Init(a1, &v20);
}
