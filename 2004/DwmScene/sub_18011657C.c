/*
 * XREFs of sub_18011657C @ 0x18011657C
 * Callers:
 *     sub_180116554 @ 0x180116554 (sub_180116554.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x1801167C8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011657C(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // esi
  int cchWideChar; // r14d
  WCHAR *lpWideCharStr; // rax
  LPWSTR Src[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-18h]

  v3 = a3;
  if ( a3 )
  {
    cchWideChar = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
    if ( cchWideChar <= 0 )
      __fastfail(7u);
    std::wstring::append(Src);
    lpWideCharStr = (WCHAR *)Src;
    if ( *((_QWORD *)&v10 + 1) >= 8uLL )
      lpWideCharStr = Src[0];
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    *(_OWORD *)a1 = *(_OWORD *)Src;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
    unknown_libname_101((__int64 *)Src);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
