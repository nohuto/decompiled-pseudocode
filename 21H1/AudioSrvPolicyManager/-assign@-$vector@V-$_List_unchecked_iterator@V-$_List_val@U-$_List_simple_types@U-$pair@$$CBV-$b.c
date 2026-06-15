/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@2@@Z @ 0x180013FC0
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180013EC0 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$unique_ptr@UAudioStateMonitor@@U?$default_delete@UAudioStateMonitor@@@wistd@@@wistd@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800360D4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KV-$unique_ptr@UAudioStateMonitor@@U-$default_delete@UA.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18000F068 (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBV-.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_UNKNOWN **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  const struct std::nothrow_t *v12; // rdx
  __int64 v13; // rcx
  SIZE_T v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 i; // rsi
  __int64 v22; // rbx
  _QWORD *v23; // r10
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_QWORD **)a1;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v8 )
  {
    v9 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v4) >> 3;
    if ( a2 > v9 )
    {
      if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>::_Xlength();
      v10 = v9 >> 1;
      if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
      {
        v11 = v10 + v9;
        if ( v10 + v9 < a2 )
          v11 = a2;
      }
      else
      {
        v11 = a2;
      }
      if ( !v4 )
        goto LABEL_13;
      v12 = (const struct std::nothrow_t *)(8 * v9);
      if ( (unsigned __int64)v12 < 0x1000 )
      {
LABEL_12:
        operator delete(v4, v12);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
LABEL_13:
        v14 = 8 * v11;
        if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
          v14 = -1LL;
        v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(v14);
        *(_QWORD *)a1 = v15;
        v8 = 0LL;
        *(_QWORD *)(a1 + 8) = v15;
        result = (_UNKNOWN **)&v15[v11];
        *(_QWORD *)(a1 + 16) = result;
LABEL_28:
        v20 = *(_QWORD **)(a1 + 8);
        for ( i = a2 - v8; i; --i )
        {
          result = (_UNKNOWN **)*a3;
          *v20++ = *a3;
        }
        *(_QWORD *)(a1 + 8) = v20;
        return result;
      }
      v13 = *(v4 - 1);
      v12 = (const struct std::nothrow_t *)((char *)v12 + 39);
      if ( (unsigned __int64)v4 - v13 - 8 <= 0x1F )
      {
        v4 = (_QWORD *)*(v4 - 1);
        goto LABEL_12;
      }
      result = (_UNKNOWN **)_o__invalid_parameter_noinfo_noreturn(v13, v12);
      __debugbreak();
    }
    v16 = 0LL;
    v17 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v17 = 0LL;
    if ( v17 )
    {
      if ( v17 >= 2 )
      {
        result = (_UNKNOWN **)*a3;
        if ( v4 > a3 || &v4[v17 - 1] < a3 )
        {
          v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v16 += 2LL;
          while ( v16 != v18 );
          v19 = 8 * v18;
          memset64(v4, (unsigned __int64)result, v19 >> 3);
          v4 = (_QWORD *)((char *)v4 + v19);
        }
      }
      while ( v16 != v17 )
      {
        result = (_UNKNOWN **)*a3;
        ++v16;
        *v4++ = *a3;
      }
    }
    goto LABEL_28;
  }
  v22 = 0LL;
  v23 = &v4[a2];
  v24 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v4 > v23 )
    v24 = 0LL;
  if ( v24 )
  {
    if ( v24 >= 2 )
    {
      result = (_UNKNOWN **)*a3;
      if ( v4 > a3 || &v4[v24 - 1] < a3 )
      {
        v25 = v24 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v22 += 2LL;
        while ( v22 != v25 );
        v26 = 8 * v25;
        memset64(v4, (unsigned __int64)result, v26 >> 3);
        v4 = (_QWORD *)((char *)v4 + v26);
      }
    }
    while ( v22 != v24 )
    {
      result = (_UNKNOWN **)*a3;
      ++v22;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v23;
  return result;
}
