/*
 * XREFs of ?_Check_size@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x180013D94
 * Callers:
 *     ??$_Insert_unverified@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@1@@Z @ 0x180013BA8 (--$_Insert_unverified@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180013EC0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ceilf_0 @ 0x1800406B7 (ceilf_0.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Check_size(
        __int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  float v6; // xmm2_4
  float v7; // xmm0_4
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v4 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v4 + (float)(int)v4;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( (v5 & 0x8000000000000000uLL) != 0LL )
    v6 = (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v5 >> 1)) + (float)(int)(*(_DWORD *)(a1 + 56) & 1 | (v5 >> 1));
  else
    v6 = (float)(int)v5;
  if ( (float)(v3 / v6) > *(float *)a1 )
  {
    v7 = ceilf_0(v3 / *(float *)a1);
    v8 = 0LL;
    if ( v7 >= 9.223372e18 )
    {
      v7 = v7 - 9.223372e18;
      if ( v7 < 9.223372e18 )
        v8 = 0x8000000000000000uLL;
    }
    v9 = v8 + (unsigned int)(int)v7;
    v10 = 8LL;
    if ( v9 > 8 )
      v10 = v9;
    if ( v5 < v10 )
    {
      if ( v5 >= 0x200 || (v5 *= 8LL, v5 < v10) )
        v5 = v10;
    }
    std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::_Forced_rehash(
      a1,
      v5);
  }
}
