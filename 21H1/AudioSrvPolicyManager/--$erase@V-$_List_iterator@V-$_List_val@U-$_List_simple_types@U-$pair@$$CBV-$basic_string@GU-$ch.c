/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800142E8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____CRenderEndpointDuckingManagerContext_std::_Uhash_compare_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::equal_to_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__CRenderEndpointDuckingManagerContext____0___::_Insert_unverified_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__CRenderEndpointDuckingManagerContext__std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__CRenderEndpointDuckingManagerContext__________::_1_::catch$1 @ 0x180041060 (_std--_Hash_std--_Umap_traits_std--basic_string_unsigned_short_std--char_traits_unsigned_short__.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000F4F0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>,void>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // r10
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx

  v6 = a3 + 2;
  if ( a3[5] >= 8uLL )
    v6 = (_QWORD *)a3[2];
  v7 = 0LL;
  v8 = 0xCBF29CE484222325uLL;
  v9 = 2LL * a3[4];
  if ( v9 )
  {
    do
    {
      v10 = *((unsigned __int8 *)v6 + v7++);
      v8 = 0x100000001B3LL * (v10 ^ v8);
    }
    while ( v7 < v9 );
  }
  v11 = v8 & a1[6];
  v12 = a1[3];
  v13 = 2 * v11;
  if ( *(_QWORD **)(v12 + 8 * v13 + 8) == a3 )
  {
    if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
    {
      *(_QWORD *)(v12 + 8 * v13) = a1[1];
      v12 = a1[3];
      v14 = a1[1];
    }
    else
    {
      v14 = a3[1];
    }
    *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
  }
  else if ( *(_QWORD **)(v12 + 8 * v13) == a3 )
  {
    *(_QWORD *)(v12 + 8 * v13) = *a3;
  }
  v15 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  std::wstring::~wstring((__int64)(a3 + 2));
  operator delete(a3, (const struct std::nothrow_t *)0x38);
  *a2 = v15;
  return a2;
}
