/*
 * XREFs of ??1?$list@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@2@@std@@QEAA@XZ @ 0x18012C54C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect____0___::_Hash_std::_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect____0____::_1_::dtor$0 @ 0x18012C336 (_std--_Hash_std--_Umap_traits_unsigned___int64_HeatDisplayOcclusionRect_std--_Uhash_ea_18012C336.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>::~list<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>>(
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
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0xB0);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0xB0);
}
