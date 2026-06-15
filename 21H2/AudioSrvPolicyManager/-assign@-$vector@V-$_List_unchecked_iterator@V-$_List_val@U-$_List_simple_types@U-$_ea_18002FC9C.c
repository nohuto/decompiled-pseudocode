/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18002FC9C
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18002FB9C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$a_ea_18002FB9C.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x180009868 (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180009F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Fill_unchecked@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V12@@std@@YAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x18002F844 (--$_Fill_unchecked@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$C.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v5; // rcx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  const struct std::nothrow_t *v11; // rdx
  unsigned __int64 *v12; // r8
  char *v13; // rcx
  SIZE_T v14; // rcx
  unsigned __int64 *v15; // rdx
  unsigned __int64 i; // rdi
  unsigned __int64 v17; // rbx

  v5 = *(unsigned __int64 **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v5) >> 3;
  if ( a2 <= v7 )
  {
    v17 = (unsigned __int64)&v5[a2];
    std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
      v5,
      v17,
      a3);
    *(_QWORD *)(a1 + 8) = v17;
    return;
  }
  v8 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v5) >> 3;
  if ( a2 > v8 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>::_Xlength();
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    v7 = 0LL;
    if ( !v5 )
      goto LABEL_13;
    v11 = (const struct std::nothrow_t *)(8 * v8);
    if ( (unsigned __int64)v11 < 0x1000 )
    {
LABEL_12:
      operator delete(v5, v11);
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
LABEL_13:
      v14 = 8 * v10;
      if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
        v14 = -1LL;
      v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
      *(_QWORD *)a1 = v15;
      *(_QWORD *)(a1 + 8) = v15;
      *(_QWORD *)(a1 + 16) = &v15[v10];
      goto LABEL_18;
    }
    v12 = (unsigned __int64 *)*(v5 - 1);
    v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
    v13 = (char *)((char *)v5 - (char *)v12);
    if ( (unsigned __int64)(v13 - 8) <= 0x1F )
    {
      v5 = v12;
      goto LABEL_12;
    }
    _o__invalid_parameter_noinfo_noreturn(v13, v11);
    __debugbreak();
  }
  std::_Fill_unchecked<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>(
    v5,
    *(_QWORD *)(a1 + 8),
    a3);
  v15 = *(unsigned __int64 **)(a1 + 8);
LABEL_18:
  for ( i = a2 - v7; i; --i )
    *v15++ = *a3;
  *(_QWORD *)(a1 + 8) = v15;
}
