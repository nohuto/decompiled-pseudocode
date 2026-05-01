/*
 * XREFs of ??$_Move_backward_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180456ECC
 * Callers:
 *     ??$_Insert_range@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@V?$move_iterator@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1Uforward_iterator_tag@1@@Z @ 0x180456A5C (--$_Insert_range@V-$move_iterator@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Move_backward_unchecked<std::wstring *,std::wstring *>(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx

  if ( a2 != a1 )
  {
    v5 = a2 - 32;
    do
    {
      a3 -= 32LL;
      if ( a3 != v5 )
      {
        std::wstring::_Tidy_deallocate((_QWORD *)a3);
        *(_OWORD *)a3 = *(_OWORD *)v5;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 7LL;
        *(_WORD *)v5 = 0;
      }
      v5 -= 32LL;
    }
    while ( v5 + 32 != a1 );
  }
  return a3;
}
