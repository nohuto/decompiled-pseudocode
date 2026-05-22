/*
 * XREFs of ??1?$list@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAA@XZ @ 0x1800AE88C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std::_Uhash_compare_enum_GameInputGamepadButtons_std::hash_enum_GameInputGamepadButtons__std::equal_to_enum_GameInputGamepadButtons____std::allocator_std::pair_enum_GameInputGamepadButtons_const__unsigned_short____0___::_Hash_std::_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std::_Uhash_compare_enum_GameInputGamepadButtons_std::hash_enum_GameInputGamepadButtons__std::equal_to_enum_GameInputGamepadButtons____std::allocator_std::pair_enum_GameInputGamepadButtons_const__unsigned_short____0____::_1_::dtor$0 @ 0x18004F0E9 (_std--_Hash_std--_Umap_traits_enum_GameInputGamepadButtons_unsigned_short_std--_Uhash_compare_en.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Hash_std::_Umap_traits_unsigned_long_unsigned_long_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_long____0____::_1_::dtor$0 @ 0x18004F0FF (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_long_std--_Uhash_compare_unsig_ea_18004F0FF.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_unsigned_int_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_int____0___::_Hash_std::_Umap_traits_unsigned_long_unsigned_int_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__unsigned_int____0____::_1_::dtor$0 @ 0x1800AE5DC (_std--_Hash_std--_Umap_traits_unsigned_long_unsigned_int_std--_Uhash_compare_unsigned_long_std--.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,unsigned int>>::~list<std::pair<unsigned long const,unsigned int>>(
        void **a1)
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
