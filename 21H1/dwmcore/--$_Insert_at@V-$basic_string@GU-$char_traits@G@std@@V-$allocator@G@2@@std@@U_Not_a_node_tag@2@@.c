/*
 * XREFs of ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180029FD8
 * Callers:
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180029ED4 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800D0100 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800D0154 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  char v12; // r11
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 *result; // rax
  __int64 v19; // rax
  __int64 *v20; // rdx
  __int64 v21; // rcx

  if ( a1[1] >= 0x3FFFFFFFFFFFFFEuLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *a1;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  v12 = 0;
  v13 = v10;
  *(_QWORD *)(v10 + 48) = 0LL;
  *(_QWORD *)(v10 + 56) = 0LL;
  *(_OWORD *)(v10 + 32) = *(_OWORD *)a5;
  *(_OWORD *)(v10 + 48) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 7LL;
  *(_WORD *)a5 = 0;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  *(_QWORD *)(v10 + 16) = v9;
  *(_WORD *)(v10 + 24) = 0;
  ++a1[1];
  *(_QWORD *)(v10 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    v14 = *a1;
LABEL_5:
    *(_QWORD *)(v14 + 16) = v13;
    goto LABEL_8;
  }
  if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v10;
    goto LABEL_8;
  }
  a4[2] = v10;
  v14 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_5;
LABEL_8:
  v15 = *(_QWORD *)(v13 + 8);
  v16 = v13;
  while ( *(_BYTE *)(v15 + 24) == v12 )
  {
    v19 = *(_QWORD *)(v16 + 8);
    v20 = *(__int64 **)(v19 + 8);
    v21 = *v20;
    if ( v19 == *v20 )
    {
      v21 = v20[2];
      if ( *(_BYTE *)(v21 + 24) == v12 )
        goto LABEL_17;
      if ( v16 == *(_QWORD *)(v19 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Lrotate(a1, *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
      std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v11,
        v16);
    }
    else
    {
      if ( *(_BYTE *)(v21 + 24) == v12 )
      {
LABEL_17:
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(v21 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
        goto LABEL_18;
      }
      if ( v16 == *(_QWORD *)v19 )
        std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(
          a1,
          *(_QWORD *)(v16 + 8),
          v11,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v12;
      std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Lrotate(a1, *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL));
    }
LABEL_18:
    v15 = *(_QWORD *)(v16 + 8);
  }
  v17 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v13;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
