/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@PEAVCBaseExpression@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180031298
 * Callers:
 *     ??0?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@1@AEBV?$allocator@PEAVCBaseExpression@@@1@@Z @ 0x180030F9C (--0-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpression@@U-$hash@P.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Uset_traits@PEAVCBaseExpression@@V?$_Uhash_compare@PEAVCBaseExpression@@U?$hash@PEAVCBaseExpression@@@std@@U?$equal_to@PEAVCBaseExpression@@@3@@std@@V?$allocator@PEAVCBaseExpression@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801FE150 (-_Forced_rehash@-$_Hash@V-$_Uset_traits@PEAVCBaseExpression@@V-$_Uhash_compare@PEAVCBaseExpressi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800B7030 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<CBaseExpression *>>,std::_Iterator_base0>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v5; // rdx
  unsigned __int64 v7; // rbp
  SIZE_T size_of; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v5 = a1[1];
  v7 = v5 - *a1;
  if ( v7 >= a2 )
  {
    result = 0LL;
    v11 = (unsigned __int64)((char *)v5 - (char *)*a1 + 7) >> 3;
    if ( *a1 > v5 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v11);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v7 )
      std::_Deallocate<16,0>(*a1, 8 * v7);
    result = &v9[a2];
    *a1 = v9;
    a1[1] = result;
    a1[2] = result;
    while ( v9 != result )
      *v9++ = a3;
  }
  return result;
}
