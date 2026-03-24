/*
 * XREFs of ??$_Insert_range@PEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@PEBM1Uforward_iterator_tag@1@@Z @ 0x1801ECD68
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@X@?$vector@MV?$allocator@M@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@M@std@@@std@@@1@V?$span_iterator@V?$span@$$CBM$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x1801ECF0C (--$insert@V-$span_iterator@V-$span@$$CBM$0-0@gsl@@$0A@@details@gsl@@X@-$vector@MV-$allocator@M@s.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800EB3A0 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     ?_Change_array@?$vector@HV?$allocator@H@std@@@std@@AEAAXQEAH_K1@Z @ 0x1801530AC (-_Change_array@-$vector@HV-$allocator@H@std@@@std@@AEAAXQEAH_K1@Z.c)
 *     ?_Calculate_growth@?$vector@MV?$allocator@M@std@@@std@@AEBA_K_K@Z @ 0x1801E1E40 (-_Calculate_growth@-$vector@MV-$allocator@M@std@@@std@@AEBA_K_K@Z.c)
 */

void __fastcall std::vector<float>::_Insert_range<float const *>(__int64 a1, char *a2, const void *a3, __int64 a4)
{
  size_t v4; // rbp
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  char v7; // r12
  __int64 v11; // rdi
  __int64 v12; // rdi
  SIZE_T v13; // rcx
  unsigned __int64 v14; // r9
  char *v15; // rdi
  char *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  size_t v19; // r15
  __int64 v20; // r12
  char *v21; // rdi
  unsigned __int64 v22; // [rsp+60h] [rbp+8h]
  __int64 v23; // [rsp+68h] [rbp+10h]

  v4 = a4 - (_QWORD)a3;
  v5 = (__int64)&a2[-*(_QWORD *)a1] >> 2;
  v6 = (a4 - (__int64)a3) >> 2;
  v7 = 1;
  if ( v6 == 1 && a2 == *(char **)(a1 + 8) || (v7 = 0, v6) )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v6 <= (*(_QWORD *)(a1 + 16) - v11) >> 2 )
    {
      v19 = v11 - (_QWORD)a2;
      v20 = 4 * v6;
      if ( v6 >= (v11 - (__int64)a2) >> 2 )
      {
        v21 = &a2[v20];
        memmove_0(&a2[v20], a2, v19);
        *(_QWORD *)(a1 + 8) = &v21[v19];
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v11 - v20), 4 * v6);
        *(_QWORD *)(a1 + 8) = v20 + v11;
        memmove_0(&a2[4 * v6], a2, v11 + -4LL * v6 - (_QWORD)a2);
      }
      memmove_0(a2, a3, v4);
    }
    else
    {
      v12 = (v11 - *(_QWORD *)a1) >> 2;
      if ( v6 > 0x3FFFFFFFFFFFFFFFLL - v12 )
        std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
      v23 = v12 + v6;
      v22 = std::vector<float>::_Calculate_growth((_QWORD *)a1, v12 + v6);
      v13 = 4 * v22;
      if ( v22 > v14 )
        v13 = -1LL;
      v15 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      memmove_0(&v15[4 * v5], a3, v4);
      v16 = *(char **)a1;
      v17 = v15;
      if ( v7 )
      {
        v18 = *(_QWORD *)(a1 + 8) - (_QWORD)v16;
      }
      else
      {
        memmove_0(v15, v16, (size_t)&a2[-*(_QWORD *)a1]);
        v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v17 = &v15[4 * v5 + 4 * v6];
        v16 = a2;
      }
      memmove_0(v17, v16, v18);
      std::vector<int>::_Change_array(a1, (__int64)v15, v23, v22);
    }
  }
}
