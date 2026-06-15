/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180137BBC
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180137ABC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180008E7C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>>>>::_Reallocate_exactly(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  _QWORD *result; // rax

  v3 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v4 = a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = *(_QWORD **)a1;
  v8 = v6;
  v9 = 0LL;
  v10 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1 + 7LL) >> 3;
  if ( *(_QWORD *)a1 > *(_QWORD *)(a1 + 8) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      *v8++ = *v7++;
      ++v9;
    }
    while ( v9 != v10 );
  }
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(
      *(void **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = &v6[v3];
  result = &v6[v4];
  *(_QWORD *)(a1 + 16) = &v6[v4];
  return result;
}
