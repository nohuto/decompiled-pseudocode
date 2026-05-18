/*
 * XREFs of sub_18011D078 @ 0x18011D078
 * Callers:
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011FDF0 @ 0x18011FDF0 (sub_18011FDF0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011D078(__int64 a1, __int64 *a2, double a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v8[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i si128; // [rsp+30h] [rbp-48h]
  _QWORD v10[3]; // [rsp+40h] [rbp-38h] BYREF

  v3 = a2;
  v10[2] = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v8[0]) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *((_WORD *)a2 + v5) );
  std::wstring::assign((char *)v8, a2, v5);
  sub_18011FDF0(a1 + 64, v10, v8);
  v6 = v10[0];
  *(double *)(v10[0] + 96LL) = a3;
  *(_DWORD *)(v6 + 48) = 2;
  unknown_libname_103(v8);
  return unknown_libname_103(v3);
}
