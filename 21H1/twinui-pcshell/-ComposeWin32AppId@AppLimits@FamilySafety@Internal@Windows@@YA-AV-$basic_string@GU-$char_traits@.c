/*
 * XREFs of ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x18043B094
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18043B260 (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x1800870D4 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x18043AE4C (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18043B8B0 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(
        _QWORD *a1,
        const WCHAR *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  const unsigned __int16 *last_path_segment; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  LPVOID v12; // [rsp+20h] [rbp-58h] BYREF
  int v13; // [rsp+28h] [rbp-50h]
  LPVOID pv[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-38h] BYREF

  pv[1] = a1;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v13 = 1;
  last_path_segment = wil::find_last_path_segment(a2, a2);
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&v12, last_path_segment);
  if ( a3[2] )
  {
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v8 = wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_%s", v12, a3);
    goto LABEL_13;
  }
  if ( !a4[2] )
  {
    v8 = wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_", v12);
LABEL_13:
    v10 = v8;
    if ( a1 != (_QWORD *)v8 )
    {
      std::wstring::_Tidy_deallocate(a1);
      *(_OWORD *)a1 = *(_OWORD *)v10;
      *((_OWORD *)a1 + 1) = *(_OWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_WORD *)v10 = 0;
      *(_QWORD *)(v10 + 24) = 7LL;
    }
    std::wstring::_Tidy_deallocate(v15);
    goto LABEL_16;
  }
  if ( a4[3] >= 8uLL )
    a4 = (_QWORD *)*a4;
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(pv, a4);
  v9 = wil::str_printf<std::wstring>((__int64)v15, (__int64)L"win32:%s_!dev=%s", v12, pv[0]);
  if ( a1 != (_QWORD *)v9 )
  {
    std::wstring::_Tidy_deallocate(a1);
    *(_OWORD *)a1 = *(_OWORD *)v9;
    *((_OWORD *)a1 + 1) = *(_OWORD *)(v9 + 16);
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 7LL;
    *(_WORD *)v9 = 0;
  }
  std::wstring::_Tidy_deallocate(v15);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
LABEL_16:
  if ( v12 )
    CoTaskMemFree(v12);
  return a1;
}
