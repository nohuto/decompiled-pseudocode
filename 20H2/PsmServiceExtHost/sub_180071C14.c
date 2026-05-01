/*
 * XREFs of sub_180071C14 @ 0x180071C14
 * Callers:
 *     sub_180021CC4 @ 0x180021CC4 (sub_180021CC4.c)
 *     sub_180071D9C @ 0x180071D9C (sub_180071D9C.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006ABC8 @ 0x18006ABC8 (sub_18006ABC8.c)
 *     sub_18006AE28 @ 0x18006AE28 (sub_18006AE28.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 */

void __fastcall sub_180071C14(__int64 a1, int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+28h] [rbp-50h]

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(_QWORD *)(v10 + 24 * i + 8);
    if ( *(_DWORD *)(v10 + 24 * i + 16) == 1 )
    {
      v12 = *(_QWORD *)(v10 + 24 * i);
      v13 = *(_DWORD *)(v10 + 24 * i + 20) & 1;
      v15 = 0LL;
      if ( v13 )
        v12 = -1LL;
      v14 = v12;
      DWORD2(v15) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) & 0xFFFFFFF8 | (4 * v13) | (*(_DWORD *)(v11 + 1244) >> 4) & 1;
      sub_18006AE28(v11, (__int64)&v14);
    }
    else
    {
      if ( a5 )
        sub_18006ABC8(*(_QWORD *)(v10 + 24 * i + 8), a5);
      sub_18006B6B4(v11, a2, a3, a4);
    }
  }
}
