/*
 * XREFs of sub_180117AFC @ 0x180117AFC
 * Callers:
 *     sub_180117C08 @ 0x180117C08 (sub_180117C08.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011A520 @ 0x18011A520 (sub_18011A520.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180117AFC(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 *v4; // rbx
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  __int64 *v8; // rdx
  __int64 v10[2]; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-39h]
  unsigned __int64 v12; // [rsp+38h] [rbp-31h]
  __int64 v13[2]; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  __int64 *v15; // [rsp+60h] [rbp-9h]
  __int64 *v16; // [rsp+68h] [rbp-1h]
  _QWORD v17[4]; // [rsp+70h] [rbp+7h] BYREF

  v4 = a2;
  v17[2] = a2;
  v17[3] = a3;
  v15 = v10;
  if ( (unsigned __int64)a2[3] >= 8 )
    a2 = (__int64 *)*a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
  LOWORD(v13[0]) = 0;
  v6 = -1LL;
  do
    ++v6;
  while ( *((_WORD *)a2 + v6) );
  std::wstring::assign((char *)v13, a2, v6);
  v11 = 0LL;
  v12 = 0LL;
  sub_18001269C(v10, (__int64)a3);
  v16 = v10;
  sub_18011A520(a1 + 64, v17, v13);
  v7 = v17[0];
  if ( (__int64 *)(v17[0] + 56LL) != v10 )
  {
    v8 = v10;
    if ( v12 >= 8 )
      v8 = (__int64 *)v10[0];
    std::wstring::assign((char *)(v17[0] + 56LL), v8, v11);
  }
  *(_DWORD *)(v7 + 48) = 0;
  unknown_libname_101(v10);
  unknown_libname_101(v13);
  unknown_libname_101(v4);
  return unknown_libname_101(a3);
}
