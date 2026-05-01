/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x18045F530
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x18045E9D4 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800871E8 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x18045E50C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18045EF70 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18045FE00 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 */

// Hidden C++ exception states: #wind=3
__m128i *__fastcall ComposeWin32AppIdForJavaApp(__m128i *a1, const WCHAR *a2, _QWORD *a3)
{
  __m128i si128; // xmm6
  const unsigned __int16 *last_path_segment; // rax
  _QWORD *v7; // r9
  __m128i *v8; // rax
  __m128i *v9; // rdi
  LPVOID pv; // [rsp+38h] [rbp-49h] BYREF
  __m128i v12; // [rsp+40h] [rbp-41h] BYREF
  __m128i v13; // [rsp+50h] [rbp-31h]
  _QWORD v14[4]; // [rsp+60h] [rbp-21h] BYREF
  _QWORD v15[4]; // [rsp+80h] [rbp-1h] BYREF

  pv = a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v13 = si128;
  v12.m128i_i16[0] = 0;
  if ( a3[1] )
  {
    last_path_segment = wil::find_last_path_segment(a2, a2);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&pv, (__int64)last_path_segment);
    GetCertSignerHashFromExe(v14);
    if ( v14[2] )
    {
      v7 = v14;
      if ( v14[3] >= 8uLL )
        v7 = (_QWORD *)v14[0];
      v8 = (__m128i *)wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_%s!java=%s", pv, v7, *a3);
    }
    else
    {
      v8 = (__m128i *)wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_!java=%s", pv, *a3);
    }
    v9 = v8;
    if ( &v12 != v8 )
    {
      std::wstring::_Tidy_deallocate(&v12);
      si128 = v9[1];
      v12 = *v9;
      v9->m128i_i16[0] = 0;
      v9[1].m128i_i64[1] = 7LL;
      v9[1].m128i_i64[0] = 0LL;
    }
    std::wstring::_Tidy_deallocate(v15);
    *a1 = v12;
    a1[1] = si128;
    v13 = _mm_load_si128((const __m128i *)&_xmm);
    v12.m128i_i16[0] = 0;
    std::wstring::_Tidy_deallocate(v14);
    if ( pv )
      CoTaskMemFree(pv);
  }
  else
  {
    a1[1].m128i_i64[0] = 0LL;
    a1[1].m128i_i64[1] = 7LL;
    a1->m128i_i16[0] = 0;
  }
  std::wstring::_Tidy_deallocate(&v12);
  return a1;
}
