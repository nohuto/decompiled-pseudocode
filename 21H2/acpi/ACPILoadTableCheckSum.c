/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C00BD8B0
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C00BD6E4 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     ACPIAssert @ 0x1C00228CC (ACPIAssert.c)
 */

char __fastcall ACPILoadTableCheckSum(const __m128i *a1, unsigned int a2, int a3, int a4)
{
  char v6; // di
  const __m128i *v7; // rbx
  unsigned int v8; // ecx
  __m128i v9; // xmm1
  __m128i v10; // xmm2
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm1
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-28h]
  unsigned int v20; // [rsp+30h] [rbp-28h]

  v6 = 0;
  v7 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = (_DWORD)a1 + a2 - 1;
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x1Bu,
      (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
      a1,
      v20);
  }
  v8 = 0;
  if ( !a2 )
    goto LABEL_11;
  if ( a2 < 0x20 )
    goto LABEL_8;
  v9 = 0LL;
  v10 = 0LL;
  do
  {
    v8 += 32;
    v9 = _mm_add_epi8(v9, _mm_loadu_si128(v7));
    v11 = _mm_loadu_si128(v7 + 1);
    v7 += 2;
    v12 = _mm_add_epi8(v11, v10);
    v10 = v12;
  }
  while ( v8 < (a2 & 0xFFFFFFE0) );
  v13 = _mm_add_epi8(v9, v12);
  v14 = _mm_add_epi8(v13, _mm_srli_si128(v13, 8));
  v15 = _mm_add_epi8(v14, _mm_srli_si128(v14, 4));
  v16 = _mm_add_epi8(v15, _mm_srli_si128(v15, 2));
  v6 = _mm_cvtsi128_si32(_mm_add_epi8(v16, _mm_srli_si128(v16, 1)));
  if ( v8 < a2 )
  {
LABEL_8:
    v17 = a2 - v8;
    do
    {
      v6 += v7->m128i_i8[0];
      v7 = (const __m128i *)((char *)v7 + 1);
      --v17;
    }
    while ( v17 );
  }
  if ( v6 )
  {
    ACPIAssert(0, 8194, a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v19) = (_DWORD)a1 + a2 - 1;
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0x1Cu,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        a1,
        v19);
    }
    return 0;
  }
  else
  {
LABEL_11:
    ACPIAssert(1, 8194, a3, a4);
    return 1;
  }
}
