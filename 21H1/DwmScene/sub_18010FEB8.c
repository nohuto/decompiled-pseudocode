/*
 * XREFs of sub_18010FEB8 @ 0x18010FEB8
 * Callers:
 *     sub_18010F008 @ 0x18010F008 (sub_18010F008.c)
 *     sub_18010F17C @ 0x18010F17C (sub_18010F17C.c)
 *     sub_18010F63C @ 0x18010F63C (sub_18010F63C.c)
 *     sub_18010F814 @ 0x18010F814 (sub_18010F814.c)
 *     sub_18010FB74 @ 0x18010FB74 (sub_18010FB74.c)
 *     sub_18010FD74 @ 0x18010FD74 (sub_18010FD74.c)
 * Callees:
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_18007F978 @ 0x18007F978 (sub_18007F978.c)
 *     sub_1800B3378 @ 0x1800B3378 (sub_1800B3378.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

_DWORD *__fastcall sub_18010FEB8(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5, __int64 a6)
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
  sub_18007E720(v16, (unsigned __int64 *)(a1 + 12LL * a4), v9);
  v11 = 3 * v7;
  sub_18007E720(v17, (unsigned __int64 *)(a1 + 4 * v11), v9);
  sub_18007F978(v17, &v14, v16);
  if ( a5 )
  {
    v12 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v14, (__m128)v15));
    LODWORD(v14) = v12.m128_i32[0];
    HIDWORD(v14) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    v15 = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  }
  sub_1800B3378((_DWORD *)(a6 + 4 * v8), &v14);
  sub_1800B3378((_DWORD *)(a6 + 4 * v11), &v14);
  return sub_1800B3378((_DWORD *)(a6 + 4 * v10), &v14);
}
