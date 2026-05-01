/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x18045ECEC
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x18045EC4C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _vscwprintf @ 0x18008DF20 (_vscwprintf.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x18045F7E8 (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x18045FB58 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__m128i *a1, const wchar_t *a2, va_list *a3)
{
  __int64 v6; // r15
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int16 **v9; // r8
  unsigned __int64 *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  __m128i v14; // xmm6
  __m128i v15; // xmm7
  __m128i v16; // xmm0
  unsigned int v18; // [rsp+28h] [rbp-69h]
  STRSAFE_LPWSTR pszDest[2]; // [rsp+48h] [rbp-49h] BYREF
  __m128i si128; // [rsp+58h] [rbp-39h]
  __m128i v21; // [rsp+68h] [rbp-29h] BYREF
  __m128i v22; // [rsp+78h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  LOWORD(pszDest[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = wil::details::string_maker<std::wstring>::make(pszDest, v7, v6);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 1772LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v13 = (wchar_t *)pszDest;
  if ( si128.m128i_i64[1] >= 8uLL )
    v13 = pszDest[0];
  v8 = StringCchVPrintfExW(v13, v6 + 1, v9, v10, v18, a2, *a3);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = 1775LL;
    goto LABEL_7;
  }
  v14 = *(__m128i *)pszDest;
  LOWORD(pszDest[0]) = 0;
  v15 = si128;
  v21 = v14;
  v22 = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( a1 != &v21 )
  {
    std::wstring::_Tidy_deallocate(a1);
    v16 = _mm_load_si128((const __m128i *)&_xmm);
    *a1 = v14;
    v21.m128i_i16[0] = 0;
    v22 = v16;
    a1[1] = v15;
  }
  std::wstring::_Tidy_deallocate(&v21);
  v11 = 0;
LABEL_11:
  std::wstring::_Tidy_deallocate(pszDest);
  return v11;
}
