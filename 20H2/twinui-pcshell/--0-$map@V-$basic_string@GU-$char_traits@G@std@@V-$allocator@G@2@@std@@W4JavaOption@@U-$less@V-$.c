/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@1@@Z @ 0x1800BE4F8
 * Callers:
 *     ?GetJavaOption@@YA?AW4JavaOption@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAV23@@Z @ 0x1800BE5AC (-GetJavaOption@@YA-AW4JavaOption@@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003A530 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$emplace_hint@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@std@@@std@@@std@@@1@AEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4JavaOption@@@1@@Z @ 0x1800BE448 (--$emplace_hint@AEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@W4J.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<std::wstring,enum JavaOption>::map<std::wstring,enum JavaOption>(__int64 a1, __m128i *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __int64 v6; // rbx
  unsigned __int64 v7; // xmm0_8
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  qword_1805CD4E8 = 0LL;
  qword_1805CD4F0 = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  qword_1805CD4E8 = (__int64)v3;
  v5 = *a2;
  v6 = a2->m128i_i64[0];
  v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
  if ( v6 != v7 )
  {
    while ( 1 )
    {
      std::_Tree<std::_Tmap_traits<std::wstring,enum JavaOption,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,enum JavaOption>>,0>>::emplace_hint<std::pair<std::wstring const,enum JavaOption> const &>(
        v4,
        &v9,
        (__int64)v3,
        v6);
      v6 += 40LL;
      if ( v6 == v7 )
        break;
      v3 = (_QWORD *)qword_1805CD4E8;
    }
  }
  return &qword_1805CD4E8;
}
