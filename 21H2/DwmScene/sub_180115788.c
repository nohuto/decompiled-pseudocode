/*
 * XREFs of sub_180115788 @ 0x180115788
 * Callers:
 *     sub_1801148D8 @ 0x1801148D8 (sub_1801148D8.c)
 *     sub_180114A4C @ 0x180114A4C (sub_180114A4C.c)
 *     sub_180114F0C @ 0x180114F0C (sub_180114F0C.c)
 *     sub_1801150E4 @ 0x1801150E4 (sub_1801150E4.c)
 *     sub_180115444 @ 0x180115444 (sub_180115444.c)
 *     sub_180115644 @ 0x180115644 (sub_180115644.c)
 * Callees:
 *     sub_180083FF0 @ 0x180083FF0 (sub_180083FF0.c)
 *     sub_180085248 @ 0x180085248 (sub_180085248.c)
 *     sub_1800B8C48 @ 0x1800B8C48 (sub_1800B8C48.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_180115788(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rdi
  __m128 v12; // xmm2
  unsigned __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int32 v15; // [rsp+28h] [rbp-38h]
  unsigned __int64 v16[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v17[2]; // [rsp+40h] [rbp-20h] BYREF

  v7 = a3;
  v8 = 3LL * a2;
  v9 = (unsigned __int64 *)(a1 + 12LL * a2);
  v10 = 3LL * a4;
  sub_180083FF0(v16, (unsigned __int64 *)(a1 + 12LL * a4), v9);
  v11 = 3 * v7;
  sub_180083FF0(v17, (unsigned __int64 *)(a1 + 4 * v11), v9);
  sub_180085248(v17, &v14, v16);
  if ( a5 )
  {
    v12 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v14, (__m128)v15));
    LODWORD(v14) = v12.m128_i32[0];
    HIDWORD(v14) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    v15 = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  }
  sub_1800B8C48((_DWORD *)(a6 + 4 * v8), &v14);
  sub_1800B8C48((_DWORD *)(a6 + 4 * v11), &v14);
  return sub_1800B8C48((_DWORD *)(a6 + 4 * v10), &v14);
}
