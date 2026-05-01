/*
 * XREFs of ??1?$list@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAA@XZ @ 0x1800B4B9C
 * Callers:
 *     _std::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0___::_Hash_std::_Uset_traits_winrt::guid_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_winrt::guid__0____::_1_::dtor$0 @ 0x1800B3DF0 (_std--_Hash_std--_Uset_traits_winrt--guid_std--_Uhash_compare_winrt--guid_std--hash_ea_1800B3DF0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180089424 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<winrt::guid>::~list<winrt::guid>(void **a1)
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
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
