/*
 * XREFs of sub_1801225A8 @ 0x1801225A8
 * Callers:
 *     sub_18011CDEC @ 0x18011CDEC (sub_18011CDEC.c)
 *     sub_18011D134 @ 0x18011D134 (sub_18011D134.c)
 *     sub_18011D4D8 @ 0x18011D4D8 (sub_18011D4D8.c)
 *     sub_18011D984 @ 0x18011D984 (sub_18011D984.c)
 *     sub_18011DC10 @ 0x18011DC10 (sub_18011DC10.c)
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011E370 @ 0x18011E370 (sub_18011E370.c)
 *     sub_1801207C0 @ 0x1801207C0 (sub_1801207C0.c)
 *     sub_180120988 @ 0x180120988 (sub_180120988.c)
 *     sub_180120A90 @ 0x180120A90 (sub_180120A90.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180121728 @ 0x180121728 (sub_180121728.c)
 */

bool __fastcall sub_1801225A8(__int64 a1, _WORD *a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __m128i si128; // [rsp+38h] [rbp-20h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
  LOWORD(v7[0]) = 0;
  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  std::wstring::assign((char *)v7, a2, v2);
  v4 = *(_QWORD *)(a1 + 72);
  sub_180121728((_QWORD *)(a1 + 64), &v6, v7);
  unknown_libname_103(v7);
  return v6 != v4;
}
