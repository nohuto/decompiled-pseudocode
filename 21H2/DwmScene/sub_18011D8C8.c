/*
 * XREFs of sub_18011D8C8 @ 0x18011D8C8
 * Callers:
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011FDF0 @ 0x18011FDF0 (sub_18011FDF0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011D8C8(__int64 a1, __int64 *a2, char a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9[2]; // [rsp+20h] [rbp-48h] BYREF
  __m128i si128; // [rsp+30h] [rbp-38h]
  _QWORD v11[3]; // [rsp+40h] [rbp-28h] BYREF

  v4 = a2;
  v11[2] = a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v9[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  std::wstring::assign((char *)v9, a2, v6);
  sub_18011FDF0(a1 + 64, v11, v9);
  v7 = v11[0];
  *(_BYTE *)(v11[0] + 108LL) = a3;
  *(_DWORD *)(v7 + 48) = 4;
  unknown_libname_103(v9);
  return unknown_libname_103(v4);
}
