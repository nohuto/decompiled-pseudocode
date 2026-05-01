/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1800B4BF0
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::GetWindowTabAllotment_::_1_::dtor$14 @ 0x1800B82C4 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--GetWindowTabAllotment_--_1_--dt.c)
 *     _std::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0___::_Hash_std::_Uset_traits_unsigned_int_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_unsigned_int__0____::_1_::dtor$0 @ 0x180325A3F (_std--_Hash_std--_Uset_traits_unsigned_int_std--_Uhash_compare_unsigned_int_std--ha_ea_180325A3F.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0___::_Hash_std::_Umap_traits_unsigned_int_bool_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__bool____0____::_1_::dtor$0 @ 0x18033903C (_std--_Hash_std--_Umap_traits_unsigned_int_bool_std--_Uhash_compare_unsigned_int_std--hash_unsig.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}
