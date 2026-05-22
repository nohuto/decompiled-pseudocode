/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006DE68
 * Callers:
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x18006E714 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 * Callees:
 *     ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18006D938 (--$_Lbound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trait.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006DF98 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$char_traits@G@s.c)
 */

__int64 __fastcall std::map<std::wstring,std::variant<unsigned long,bool,float>>::_Try_emplace<std::wstring,>(
        __int64 *a1,
        __int64 a2,
        char *a3)
{
  __int64 *v6; // rax
  _QWORD *v7; // r9
  unsigned __int64 v8; // rbp
  char *v9; // rdx
  __int64 v10; // r11
  int v11; // ecx
  unsigned __int16 v12; // r8
  signed __int64 v13; // rdx
  bool v14; // cc
  unsigned __int16 v15; // r8
  bool v16; // sf
  _QWORD *v17; // rax
  char *v19; // [rsp+50h] [rbp+8h] BYREF
  char v20; // [rsp+68h] [rbp+20h] BYREF

  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::_Lbound<std::wstring>(
         a1,
         (__int64)a3);
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_22;
  v7 = v6 + 4;
  v8 = v6[6];
  if ( (unsigned __int64)v6[7] >= 8 )
    v7 = (_QWORD *)*v7;
  v9 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v9 = *(char **)a3;
  v10 = v6[6];
  if ( v8 >= *((_QWORD *)a3 + 2) )
    v10 = *((_QWORD *)a3 + 2);
  v11 = 0;
  if ( v10 )
  {
    v12 = *(_WORD *)v9;
    if ( *(_WORD *)v9 < *(_WORD *)v7 )
    {
LABEL_14:
      v11 = -1;
    }
    else
    {
      v13 = v9 - (char *)v7;
      v14 = v12 <= *(_WORD *)v7;
      while ( v14 )
      {
        if ( v10 == 1 )
          goto LABEL_15;
        v7 = (_QWORD *)((char *)v7 + 2);
        --v10;
        v15 = *(_WORD *)((char *)v7 + v13);
        v14 = v15 <= *(_WORD *)v7;
        if ( v15 < *(_WORD *)v7 )
          goto LABEL_14;
      }
      v11 = 1;
    }
  }
LABEL_15:
  v16 = v11 < 0;
  if ( v11 )
    goto LABEL_19;
  if ( *((_QWORD *)a3 + 2) < v8 )
    goto LABEL_22;
  if ( *((_QWORD *)a3 + 2) <= v8 )
  {
    v16 = 0;
LABEL_19:
    if ( !v16 )
      goto LABEL_20;
LABEL_22:
    v19 = a3;
    v17 = (_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::variant<unsigned long,bool,float>,std::less<void>,std::allocator<std::pair<std::wstring const,std::variant<unsigned long,bool,float>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
                      (_DWORD)a1,
                      (unsigned int)&v20,
                      (_DWORD)v6,
                      (_DWORD)v7,
                      (__int64)&v19);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v17;
    return a2;
  }
LABEL_20:
  *(_QWORD *)a2 = v6;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
