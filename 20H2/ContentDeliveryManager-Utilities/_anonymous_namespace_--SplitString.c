/*
 * XREFs of _anonymous_namespace_::SplitString @ 0x18002DDE0
 * Callers:
 *     _anonymous_namespace_::GetImpressionEventExpirationTime @ 0x18002DF90 (_anonymous_namespace_--GetImpressionEventExpirationTime.c)
 *     _anonymous_namespace_::DecodeBatchIdFromCreativeId @ 0x18002E1B0 (_anonymous_namespace_--DecodeBatchIdFromCreativeId.c)
 *     ?IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z @ 0x18002F0E4 (-IsHighPriorityEvent@ContentManagement@@YA_NPEBG@Z.c)
 * Callees:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180032CA8 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 *     ?find_first_not_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x18003419C (-find_first_not_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?find_first_of@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K@Z @ 0x180034244 (-find_first_of@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KPEBG_K@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180036C78 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::SplitString(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v6; // r15d
  __int64 first_not_of; // rsi
  __int64 first_of; // r14
  void *v10[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+50h] [rbp-10h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  if ( *(_QWORD *)(a2 + 16) )
  {
    first_not_of = std::wstring::find_first_not_of(a2, a3);
    do
    {
      first_of = std::wstring::find_first_of(a2, a3, first_not_of);
      v11 = 7LL;
      v10[2] = 0LL;
      LOWORD(v10[0]) = 0;
      std::wstring::assign(v10);
      v6 |= 2u;
      std::vector<std::wstring>::push_back(a1, v10);
      if ( v11 >= 8 )
        operator delete(v10[0]);
      first_not_of = first_of + 1;
    }
    while ( first_of != -1 );
  }
  return a1;
}
