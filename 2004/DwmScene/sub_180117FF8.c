/*
 * XREFs of sub_180117FF8 @ 0x180117FF8
 * Callers:
 *     sub_1801180B4 @ 0x1801180B4 (sub_1801180B4.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011A520 @ 0x18011A520 (sub_18011A520.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180117FF8(__int64 a1, __int64 *a2, char a3)
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
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v9[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  std::wstring::assign((char *)v9, a2, v6);
  sub_18011A520(a1 + 64, v11, v9);
  v7 = v11[0];
  *(_BYTE *)(v11[0] + 108LL) = a3;
  *(_DWORD *)(v7 + 48) = 4;
  unknown_libname_101(v9);
  return unknown_libname_101(v4);
}
