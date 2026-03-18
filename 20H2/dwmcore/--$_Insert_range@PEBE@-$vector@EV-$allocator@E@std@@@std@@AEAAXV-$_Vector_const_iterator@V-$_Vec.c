/*
 * XREFs of ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x18021D790
 * Callers:
 *     ??$insert@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@X@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$span_iterator@V?$span@$$CBE$0?0@gsl@@$0A@@details@gsl@@1@Z @ 0x18021D904 (--$insert@V-$span_iterator@V-$span@$$CBE$0-0@gsl@@$0A@@details@gsl@@X@-$vector@EV-$allocator@E@s.c)
 * Callees:
 *     ?_Calculate_growth@?$vector@EV?$allocator@E@std@@@std@@AEBA_K_K@Z @ 0x18005BBE4 (-_Calculate_growth@-$vector@EV-$allocator@E@std@@@std@@AEBA_K_K@Z.c)
 *     ?_Change_array@?$vector@EV?$allocator@E@std@@@std@@AEAAXQEAE_K1@Z @ 0x18005BC18 (-_Change_array@-$vector@EV-$allocator@E@std@@@std@@AEAAXQEAE_K1@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@CAXXZ @ 0x1800E6190 (-_Xlength@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

void __fastcall std::vector<unsigned char>::_Insert_range<unsigned char const *>(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4)
{
  char *v4; // r15
  size_t v5; // rsi
  char v6; // bp
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  char *v14; // r15
  char *v15; // rdi
  char *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  size_t v19; // r15
  char *v20; // rdi
  unsigned __int64 v21; // [rsp+50h] [rbp+8h]

  v4 = &a2[-*(_QWORD *)a1];
  v5 = a4 - (_QWORD)a3;
  v6 = 1;
  if ( a4 - (_QWORD)a3 == 1 && a2 == *(char **)(a1 + 8) || (v6 = 0, v5) )
  {
    v10 = *(_QWORD *)(a1 + 8);
    if ( v5 <= *(_QWORD *)(a1 + 16) - v10 )
    {
      v19 = v10 - (_QWORD)a2;
      if ( v5 >= v10 - (__int64)a2 )
      {
        v20 = &a2[v5];
        memmove_0(&a2[v5], a2, v19);
        *(_QWORD *)(a1 + 8) = &v20[v19];
      }
      else
      {
        memmove_0(*(void **)(a1 + 8), (const void *)(v10 - v5), a4 - (_QWORD)a3);
        *(_QWORD *)(a1 + 8) = v5 + v10;
        memmove_0((void *)(v10 - (v19 - v5)), a2, v19 - v5);
      }
      memmove_0(a2, a3, v5);
    }
    else
    {
      v11 = v10 - *(_QWORD *)a1;
      if ( v5 > 0x7FFFFFFFFFFFFFFFLL - v11 )
        std::vector<std::unique_ptr<CCheckMPOCache>>::_Xlength();
      v12 = v11 + v5;
      v21 = std::vector<unsigned char>::_Calculate_growth((_QWORD *)a1, v11 + v5);
      v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v21);
      v14 = &v4[v13];
      v15 = (char *)v13;
      memmove_0(v14, a3, v5);
      v16 = *(char **)a1;
      v17 = v15;
      if ( v6 )
      {
        v18 = *(_QWORD *)(a1 + 8) - (_QWORD)v16;
      }
      else
      {
        memmove_0(v15, v16, (size_t)&a2[-*(_QWORD *)a1]);
        v17 = &v14[v5];
        v18 = *(_QWORD *)(a1 + 8) - (_QWORD)a2;
        v16 = a2;
      }
      memmove_0(v17, v16, v18);
      std::vector<unsigned char>::_Change_array((__int64 *)a1, (__int64)v15, v12, v21);
    }
  }
}
