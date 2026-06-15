/*
 * XREFs of ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1801396B0
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066F30 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800EACD4 (--$_Lbound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trait.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180139784 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$basic_string@GU-$ch_ea_180139784.c)
 */

__int64 __fastcall std::map<std::wstring,std::wstring>::_Try_emplace<std::wstring,>(__int64 *a1, __int64 a2, char *a3)
{
  __int64 *v6; // rax
  unsigned __int64 v7; // r9
  char *v8; // rdx
  char *v9; // rcx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  signed __int64 v12; // rcx
  unsigned __int16 v13; // r11
  int v14; // ecx
  bool v15; // sf
  _QWORD *v16; // rax
  char *v18; // [rsp+50h] [rbp+8h] BYREF
  char v19; // [rsp+68h] [rbp+20h] BYREF

  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Lbound<std::wstring>(
         a1,
         (__int64)a3);
  if ( v6 == (__int64 *)*a1 )
    goto LABEL_20;
  v8 = (char *)(v6 + 4);
  if ( (unsigned __int64)v6[7] >= 8 )
    v8 = (char *)v6[4];
  v9 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v9 = *(char **)a3;
  v10 = v6[6];
  v7 = *((_QWORD *)a3 + 2);
  v11 = v10;
  if ( v10 >= v7 )
    v11 = *((_QWORD *)a3 + 2);
  if ( v11 )
  {
    v12 = v9 - v8;
    while ( 1 )
    {
      v13 = *(_WORD *)&v8[v12];
      if ( v13 != *(_WORD *)v8 )
        break;
      v8 += 2;
      if ( !--v11 )
        goto LABEL_12;
    }
    v14 = v13 < *(_WORD *)v8 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v14 = 0;
  }
  v15 = v14 < 0;
  if ( v14 )
    goto LABEL_17;
  if ( v7 < v10 )
    goto LABEL_20;
  if ( v7 <= v10 )
  {
    v15 = 0;
LABEL_17:
    if ( !v15 )
      goto LABEL_18;
LABEL_20:
    v18 = a3;
    v16 = (_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
                      (_DWORD)a1,
                      (unsigned int)&v19,
                      (_DWORD)v6,
                      v7,
                      (__int64)&v18);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v16;
    return a2;
  }
LABEL_18:
  *(_QWORD *)a2 = v6;
  *(_BYTE *)(a2 + 8) = 0;
  return a2;
}
