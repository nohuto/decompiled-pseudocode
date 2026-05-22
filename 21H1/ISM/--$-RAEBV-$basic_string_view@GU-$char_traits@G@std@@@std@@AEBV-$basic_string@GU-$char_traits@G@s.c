/*
 * XREFs of ??$?RAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@?$less@X@std@@QEBA_NAEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006D324
 * Callers:
 *     ??$_Eqrange@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@V12@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x18006D564 (--$_Eqrange@V-$basic_string_view@GU-$char_traits@G@std@@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_.c)
 *     ??$find@V?$basic_string_view@GU?$char_traits@G@std@@@std@@U?$less@X@2@H@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@@Z @ 0x18006E118 (--$find@V-$basic_string_view@GU-$char_traits@G@std@@@std@@U-$less@X@2@H@-$_Tree@V-$_Tmap_traits@.c)
 * Callees:
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x18006DCF0 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 */

__int64 __fastcall std::less<void>::operator()<std::basic_string_view<unsigned short> const &,std::wstring const &>(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3)
{
  __int64 v3; // r9

  v3 = a3[2];
  if ( a3[3] >= 8uLL )
    a3 = (_QWORD *)*a3;
  return (unsigned int)std::_Traits_compare<std::char_traits<unsigned short>>(
                         a2->m128i_i64[0],
                         _mm_srli_si128(*a2, 8).m128i_u64[0],
                         a3,
                         v3) >> 31;
}
