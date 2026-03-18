/*
 * XREFs of ??$_Insert_range@PEAULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@PEAULayoutData@CContent@@1Uforward_iterator_tag@1@@Z @ 0x1801BB550
 * Callers:
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@X@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x1801BB760 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E4860 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x1801BC2C8 (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x1801BC31C (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 */

void *__fastcall std::vector<CContent::LayoutData>::_Insert_range<CContent::LayoutData *>(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  size_t v5; // rbp
  __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  void *result; // rax
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  SIZE_T v15; // rcx
  unsigned __int64 v16; // r10
  char *v17; // rdi
  char *v18; // rcx
  char *v19; // rdx
  size_t v20; // r8
  size_t v21; // r15
  __int64 v22; // r12
  char v23; // [rsp+60h] [rbp+8h]
  unsigned __int64 v24; // [rsp+68h] [rbp+10h]

  v5 = a4 - (_QWORD)a3;
  v8 = (__int64)&a2[-*(_QWORD *)a1];
  v23 = 1;
  v9 = (a4 - (__int64)a3) / 40;
  result = (void *)((unsigned __int64)((unsigned __int128)(v8 * (__int128)0x6666666666666667LL) >> 64) >> 63);
  v11 = v8 / 40;
  if ( v9 == 1 && a2 == *(char **)(a1 + 8) || (v23 = 0, v9) )
  {
    v12 = *(_QWORD *)(a1 + 8);
    if ( v9 <= (*(_QWORD *)(a1 + 16) - v12) / 40 )
    {
      v21 = v12 - (_QWORD)a2;
      v22 = 40 * v9;
      if ( v9 >= (v12 - (__int64)a2) / 40 )
      {
        memmove_0(&a2[v22], a2, v21);
        *(_QWORD *)(a1 + 8) = &a2[v22 + v21];
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v12 - v22), 40 * v9);
        *(_QWORD *)(a1 + 8) = v22 + v12;
        memmove_0(&a2[40 * v9], a2, v12 + -40LL * v9 - (_QWORD)a2);
      }
      return memmove_0(a2, a3, v5);
    }
    else
    {
      v13 = (v12 - *(_QWORD *)a1) / 40;
      if ( v9 > 0x666666666666666LL - v13 )
        std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
      v24 = v13 + v9;
      v14 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v13 + v9);
      v15 = 40 * v14;
      if ( v14 > v16 )
        v15 = -1LL;
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v15);
      memmove_0(&v17[40 * v11], a3, v5);
      v18 = v17;
      v19 = *(char **)a1;
      if ( v23 )
      {
        v20 = *(_QWORD *)(a1 + 8) - (_QWORD)v19;
      }
      else
      {
        memmove_0(v17, v19, (size_t)&a2[-*(_QWORD *)a1]);
        v20 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v18 = &v17[40 * v11 + 40 * v9];
        v19 = a2;
      }
      memmove_0(v18, v19, v20);
      return (void *)std::vector<CContent::LayoutData>::_Change_array(a1, v17, v24, v14);
    }
  }
  return result;
}
