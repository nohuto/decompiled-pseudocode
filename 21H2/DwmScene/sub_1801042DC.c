/*
 * XREFs of sub_1801042DC @ 0x1801042DC
 * Callers:
 *     sub_1800C2B80 @ 0x1800C2B80 (sub_1800C2B80.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_1800B8594 @ 0x1800B8594 (sub_1800B8594.c)
 *     sub_1800B8840 @ 0x1800B8840 (sub_1800B8840.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 *     sub_1801045F8 @ 0x1801045F8 (sub_1801045F8.c)
 *     sub_18010489C @ 0x18010489C (sub_18010489C.c)
 *     sub_180104B4C @ 0x180104B4C (sub_180104B4C.c)
 *     sub_18010510C @ 0x18010510C (sub_18010510C.c)
 *     sub_180105820 @ 0x180105820 (sub_180105820.c)
 *     sub_1801058F0 @ 0x1801058F0 (sub_1801058F0.c)
 *     memset @ 0x18012396A (memset.c)
 *     memmove @ 0x180123982 (memmove.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801042DC(__int64 a1, char *a2, size_t a3, size_t *a4)
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

  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v28[0]) = 0;
  if ( a2 != &a2[a3] )
  {
    if ( a3 > 0xF )
    {
      sub_18000FC14(v28, a3, 0LL, a2);
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
  sub_1800B8594((__int64)v30, (__int64)v28, 1, 1);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v8 = &qword_180214688;
  if ( *((_QWORD *)&xmmword_180214698 + 1) >= 0x10uLL )
    v8 = (void **)qword_180214688;
  v9 = a4;
  v10 = a4[3];
  if ( v10 >= 0x10 )
    v9 = (const void *)*a4;
  v11 = a4[2];
  if ( v11 == (_QWORD)xmmword_180214698 && !memcmp(v9, v8, a4[2]) )
  {
    sub_18010489C(a1, v28, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v13 = &qword_180214628;
  if ( *((_QWORD *)&xmmword_180214638 + 1) >= 0x10uLL )
    v13 = (void **)qword_180214628;
  v14 = a4;
  if ( v10 >= 0x10 )
    v14 = (const void *)*a4;
  if ( v11 == (_QWORD)xmmword_180214638 && !memcmp(v14, v13, v11) )
  {
    sub_1801045F8(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v16 = aCube;
  if ( *((_QWORD *)&xmmword_180214658 + 1) >= 0x10uLL )
    v16 = (void **)aCube[0];
  v17 = a4;
  if ( v10 >= 0x10 )
    v17 = (const void *)*a4;
  if ( v11 != (_QWORD)xmmword_180214658 || memcmp(v17, v16, v11) )
    v7 = 0;
  if ( v7 )
  {
    sub_180104B4C(a1, v30, &v24);
    v10 = a4[3];
    v11 = a4[2];
  }
  v18 = aLook;
  if ( *((_QWORD *)&xmmword_180214678 + 1) >= 0x10uLL )
    v18 = (void **)aLook[0];
  if ( v10 >= 0x10 )
    a4 = (size_t *)*a4;
  if ( v11 == (_QWORD)xmmword_180214678 && !memcmp(a4, v18, v11) )
    sub_18010510C(a1, v30, &v24);
  sub_1801058F0(a1, v24, &v25, v27, v24);
  sub_180105820(a1, 8LL);
  sub_180103A84(a1);
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
  sub_1800B8840((__int64)&v30[144]);
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
