/*
 * XREFs of ??0?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@1@@Z @ 0x18002C084
 * Callers:
 *     _lambda_f0f9811b609bc44f6b5f596bb37acf9a_::operator() @ 0x18002B470 (_lambda_f0f9811b609bc44f6b5f596bb37acf9a_--operator().c)
 *     _lambda_b16aee874608ec8ce55934157fa7dff9_::operator() @ 0x18007D3D8 (_lambda_b16aee874608ec8ce55934157fa7dff9_--operator().c)
 *     _lambda_7a8cdf47427de701aad174af942599f3_::operator() @ 0x180189A3C (_lambda_7a8cdf47427de701aad174af942599f3_--operator().c)
 *     _lambda_c5f59095f0ae3e38eeaa5c86892cff4d_::operator() @ 0x18018BA78 (_lambda_c5f59095f0ae3e38eeaa5c86892cff4d_--operator().c)
 *     _lambda_c78139b4692b055c43ac45a1104373ed_::operator() @ 0x180191954 (_lambda_c78139b4692b055c43ac45a1104373ed_--operator().c)
 *     _lambda_a2967a5fef4bd4911d3370ff5cbae9e9_::operator() @ 0x180198020 (_lambda_a2967a5fef4bd4911d3370ff5cbae9e9_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$insert@PEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAAXPEBU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@1@0@Z @ 0x18002B6E0 (--$insert@PEBU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$varian.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::map<std::wstring,std::variant<unsigned long,bool,float>>(
        __int64 *a1,
        __m128i *a2)
{
  _QWORD *v4; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v4 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v4 = v4;
  v4[1] = v4;
  v4[2] = v4;
  *((_WORD *)v4 + 12) = 257;
  *a1 = (__int64)v4;
  std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::insert<std::pair<std::wstring const,std::variant<unsigned long,bool,float>> const *>(
    a1,
    a2->m128i_i64[0],
    _mm_srli_si128(*a2, 8).m128i_i64[0]);
  return a1;
}
