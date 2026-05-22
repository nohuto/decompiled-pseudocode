/*
 * XREFs of ??$_Construct_n_copies_of_ty@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@1@@Z @ 0x180012E60
 * Callers:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012790 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@1@@Z @ 0x180024AD8 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA@$$QEAV01@@Z @ 0x18014AE88 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha_ea_18014AE88.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>::_Construct_n_copies_of_ty<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rax
  size_t v8; // rcx
  void *v9; // rax
  void *v10; // rcx

  if ( a2 )
  {
    v4 = a2;
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v6 = 8 * a2;
    if ( 8 * a2 >= 0x1000 )
    {
      v8 = v6 + 39;
      if ( v6 + 39 < v6 )
        v8 = -1LL;
      v9 = operator new(v8);
      v10 = v9;
      if ( !v9 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
        JUMPOUT(0x180059B89LL);
      }
      v7 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v7 - 1) = v10;
    }
    else if ( v6 )
    {
      v7 = operator new(8 * a2);
    }
    else
    {
      v7 = 0LL;
    }
    *a1 = v7;
    a1[2] = &v7[v6 / 8];
    a1[1] = v7;
    do
    {
      *v7++ = *a3;
      --v4;
    }
    while ( v4 );
    a1[1] = v7;
  }
}
