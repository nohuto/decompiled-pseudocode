/*
 * XREFs of sub_1800FEA0C @ 0x1800FEA0C
 * Callers:
 *     sub_1800BD2B0 @ 0x1800BD2B0 (sub_1800BD2B0.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_1800B2CC4 @ 0x1800B2CC4 (sub_1800B2CC4.c)
 *     sub_1800B2F70 @ 0x1800B2F70 (sub_1800B2F70.c)
 *     sub_1800FE1B4 @ 0x1800FE1B4 (sub_1800FE1B4.c)
 *     sub_1800FED28 @ 0x1800FED28 (sub_1800FED28.c)
 *     sub_1800FEFCC @ 0x1800FEFCC (sub_1800FEFCC.c)
 *     sub_1800FF27C @ 0x1800FF27C (sub_1800FF27C.c)
 *     sub_1800FF83C @ 0x1800FF83C (sub_1800FF83C.c)
 *     sub_1800FFF50 @ 0x1800FFF50 (sub_1800FFF50.c)
 *     sub_180100020 @ 0x180100020 (sub_180100020.c)
 *     memset @ 0x18011E09A (memset.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FEA0C(__int64 a1, char *a2, size_t a3, size_t *a4)
{
  char v7; // r15
  void **v8; // rdx
  const void *v9; // rcx
  unsigned __int64 v10; // r14
  size_t v11; // rdi
  void **v13; // rdx
  const void *v14; // rcx
  void **v16; // rdx
  const void *v17; // rcx
  void **v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v25; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h]
  unsigned int v27; // [rsp+40h] [rbp-C0h]
  __int64 v28[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-A8h]
  _BYTE v30[240]; // [rsp+70h] [rbp-90h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v28[0]) = 0;
  if ( a2 != &a2[a3] )
  {
    if ( a3 > 0xF )
    {
      sub_18000FB34(v28, a3, 0LL, a2);
    }
    else
    {
      si128.m128i_i64[0] = a3;
      memmove(v28, a2, a3);
      *((_BYTE *)v28 + a3) = 0;
    }
  }
  memset(v30, 0, sizeof(v30));
  v7 = 1;
  sub_1800B2CC4((__int64)v30, (__int64)v28, 1, 1);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v8 = &qword_18020D618;
  if ( *((_QWORD *)&xmmword_18020D628 + 1) >= 0x10uLL )
    v8 = (void **)qword_18020D618;
  v9 = a4;
  v10 = a4[3];
  if ( v10 >= 0x10 )
    v9 = (const void *)*a4;
  v11 = a4[2];
  if ( v11 == (_QWORD)xmmword_18020D628 && !memcmp(v9, v8, a4[2]) )
  {
    sub_1800FEFCC(a1, v28, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v13 = &qword_18020D5B8;
  if ( *((_QWORD *)&xmmword_18020D5C8 + 1) >= 0x10uLL )
    v13 = (void **)qword_18020D5B8;
  v14 = a4;
  if ( v10 >= 0x10 )
    v14 = (const void *)*a4;
  if ( v11 == (_QWORD)xmmword_18020D5C8 && !memcmp(v14, v13, v11) )
  {
    sub_1800FED28(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v16 = aCube;
  if ( *((_QWORD *)&xmmword_18020D5E8 + 1) >= 0x10uLL )
    v16 = (void **)aCube[0];
  v17 = a4;
  if ( v10 >= 0x10 )
    v17 = (const void *)*a4;
  if ( v11 != (_QWORD)xmmword_18020D5E8 || memcmp(v17, v16, v11) )
    v7 = 0;
  if ( v7 )
  {
    sub_1800FF27C(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v18 = aLook;
  if ( *((_QWORD *)&xmmword_18020D608 + 1) >= 0x10uLL )
    v18 = (void **)aLook[0];
  if ( v10 >= 0x10 )
    a4 = (size_t *)*a4;
  if ( v11 == (_QWORD)xmmword_18020D608 && !memcmp(a4, v18, v11) )
    sub_1800FF83C(a1, v30, &v24);
  sub_180100020(a1, v24, &v25, v27, v24);
  sub_1800FFF50(a1, 8LL);
  sub_1800FE1B4(a1);
  v19 = v25;
  if ( (_QWORD)v25 )
  {
    v20 = (v26 - v25) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v20 >= 0x1000 )
    {
      v21 = v20 + 39;
      v19 = *(_QWORD *)(v25 - 8);
      if ( (unsigned __int64)(v25 - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v21);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
    v25 = 0LL;
    v26 = 0LL;
  }
  sub_1800B2F70((__int64)&v30[144]);
  result = std::ios::~ios<char,std::char_traits<char>>(&v30[144]);
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v23 = v28[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v23 = *(_QWORD *)(v28[0] - 8);
      if ( (unsigned __int64)(v28[0] - v23 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v23, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    return j_j__o_free(v23);
  }
  return result;
}
