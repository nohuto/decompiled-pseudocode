/*
 * XREFs of sub_18011B0B8 @ 0x18011B0B8
 * Callers:
 *     sub_18011AEF0 @ 0x18011AEF0 (sub_18011AEF0.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 *     sub_18011CCD4 @ 0x18011CCD4 (sub_18011CCD4.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011B0B8(__int64 a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  __int64 *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __m128i si128; // [rsp+58h] [rbp-18h]

  v4 = sub_18011CCD4(a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  v5 = 0;
  LOWORD(v14[0]) = 0;
  std::wstring::assign((char *)v14, L"Value", 5uLL);
  if ( !v4 )
  {
    v11 = 4;
    goto LABEL_14;
  }
  v6 = v4 - 1;
  if ( !v6 )
  {
    v11 = 2;
    goto LABEL_14;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = 1;
    goto LABEL_14;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v11 = 3;
    goto LABEL_14;
  }
  if ( v8 == 1 )
  {
    v9 = v14;
    if ( si128.m128i_i64[1] >= 8uLL )
      v9 = (__int64 *)v14[0];
    if ( (unsigned __int8)sub_18011CCD8(a2, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001269C(v13, (__int64)v14);
      v10 = sub_18011CB80(a2, v13);
      v11 = sub_18011B0B8(a1, v10);
LABEL_14:
      v5 = v11;
    }
  }
  unknown_libname_101(v14);
  return v5;
}
