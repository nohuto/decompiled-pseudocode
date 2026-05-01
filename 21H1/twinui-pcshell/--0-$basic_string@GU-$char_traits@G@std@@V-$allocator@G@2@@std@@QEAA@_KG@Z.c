/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180339054
 * Callers:
 *     ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x180338064 (--$_Floating_to_wstring@N@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@0@PE.c)
 *     ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x18043B7D0 (-GetDisplayNameFromWindow@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEA.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x18043BD58 (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 * Callees:
 *     ??$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@Z @ 0x180338114 (--$_Reallocate_for@V_lambda_8317d86ccc4fc543e8e6132f798c706e_@@G@-$basic_string@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wstring::wstring(__int64 a1, unsigned __int64 a2)
{
  _WORD *v3; // r8
  _WORD *v4; // rdi
  unsigned __int64 i; // rcx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_WORD *)a1 = 0;
  if ( a2 > 7 )
  {
    std::wstring::_Reallocate_for<_lambda_8317d86ccc4fc543e8e6132f798c706e_,unsigned short>(a1, a2);
  }
  else
  {
    v3 = (_WORD *)a1;
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      v3 = *(_WORD **)a1;
    *(_QWORD *)(a1 + 16) = a2;
    if ( a2 )
    {
      v4 = v3;
      for ( i = a2; i; --i )
        *v4++ = 0;
    }
    v3[a2] = 0;
  }
  return a1;
}
