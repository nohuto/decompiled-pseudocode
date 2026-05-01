/*
 * XREFs of sub_180029FD0 @ 0x180029FD0
 * Callers:
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 * Callees:
 *     sub_18002A048 @ 0x18002A048 (sub_18002A048.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006AE28 @ 0x18006AE28 (sub_18006AE28.c)
 */

__int64 __fastcall sub_180029FD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // r9
  __m128i v8; // xmm0
  int v9; // r8d
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  result = sub_18002A048(a1, &v15);
  if ( (int)result >= 0 )
  {
    v7 = v15;
    if ( v15 )
    {
      v17 = 0LL;
      v8 = _mm_srli_si128((__m128i)0LL, 8);
      v9 = 0;
      v10 = ((unsigned __int64)(95 * a3) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v11 = 20971520LL;
      v12 = v10 + ((unsigned __int64)(95 * a3 - v10) >> 1);
      v13 = *(_DWORD *)(a1 + 1244);
      v14 = a2 - (v12 >> 6);
      if ( v14 > 0x1400000 )
        v11 = v14;
      LOBYTE(v9) = v11 >= v15;
      if ( v9 )
        v7 = -1LL;
      v16 = v7;
      DWORD2(v17) = _mm_cvtsi128_si32(v8) & 0xFFFFFFF8 | (4 * v9) | (v13 >> 4) & 1;
      result = sub_18006AE28(a1, &v16);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225517LL;
    }
  }
  return result;
}
