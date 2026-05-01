/*
 * XREFs of ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x18043BD58
 * Callers:
 *     ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x18043AEEC (--$str_vprintf_nothrow@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wi.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180339054 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::string_maker<std::wstring>::make(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  try
  {
    v4 = std::wstring::wstring((__int64)v6, a3);
    if ( a1 != v4 )
    {
      std::wstring::_Tidy_deallocate((_QWORD *)a1);
      *(_OWORD *)a1 = *(_OWORD *)v4;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 7LL;
      *(_WORD *)v4 = 0;
    }
    std::wstring::_Tidy_deallocate(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return 2147942414LL;
  }
  return result;
}
