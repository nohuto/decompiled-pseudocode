/*
 * XREFs of sub_180120988 @ 0x180120988
 * Callers:
 *     sub_1801207C0 @ 0x1801207C0 (sub_1801207C0.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 *     sub_1801225A4 @ 0x1801225A4 (sub_1801225A4.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180120988(__int64 a1, __int64 a2)
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

  v4 = sub_1801225A4(a2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
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
    if ( (unsigned __int8)sub_1801225A8(a2, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001277C(v13, (__int64)v14);
      v10 = sub_180122450(a2, v13);
      v11 = sub_180120988(a1, v10);
LABEL_14:
      v5 = v11;
    }
  }
  unknown_libname_103(v14);
  return v5;
}
