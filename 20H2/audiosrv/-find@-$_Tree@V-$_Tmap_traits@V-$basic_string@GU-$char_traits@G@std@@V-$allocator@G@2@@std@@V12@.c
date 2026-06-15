/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18013A67C
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180066370 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ??$_Lbound@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEBAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1800EA044 (--$_Lbound@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Tree@V-$_Tmap_trait.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
        __int64 *a1,
        __int64 **a2,
        char *a3)
{
  __int64 v3; // rbp
  __int64 *v6; // rax
  char *v7; // rcx
  char *v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  signed __int64 v12; // rdx
  unsigned __int16 v13; // r11
  int v14; // ecx
  bool v15; // sf

  v3 = *a1;
  v6 = std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Lbound<std::wstring>(
         a1,
         (__int64)a3);
  if ( v6 == (__int64 *)v3 )
    goto LABEL_18;
  v7 = (char *)(v6 + 4);
  if ( (unsigned __int64)v6[7] >= 8 )
    v7 = (char *)v6[4];
  v8 = a3;
  if ( *((_QWORD *)a3 + 3) >= 8uLL )
    v8 = *(char **)a3;
  v9 = v6[6];
  v10 = *((_QWORD *)a3 + 2);
  v11 = v9;
  if ( v9 >= v10 )
    v11 = *((_QWORD *)a3 + 2);
  if ( v11 )
  {
    v12 = v8 - v7;
    while ( 1 )
    {
      v13 = *(_WORD *)&v7[v12];
      if ( v13 != *(_WORD *)v7 )
        break;
      v7 += 2;
      if ( !--v11 )
        goto LABEL_12;
    }
    v14 = v13 < *(_WORD *)v7 ? -1 : 1;
  }
  else
  {
LABEL_12:
    v14 = 0;
  }
  v15 = v14 < 0;
  if ( v14 )
  {
LABEL_17:
    if ( v15 )
      goto LABEL_18;
    goto LABEL_19;
  }
  if ( v10 < v9 )
  {
LABEL_18:
    v6 = (__int64 *)v3;
    goto LABEL_19;
  }
  if ( v10 <= v9 )
  {
    v15 = 0;
    goto LABEL_17;
  }
LABEL_19:
  *a2 = v6;
  return a2;
}
