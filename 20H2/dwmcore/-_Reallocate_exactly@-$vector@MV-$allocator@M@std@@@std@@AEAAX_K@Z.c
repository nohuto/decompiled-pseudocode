/*
 * XREFs of ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x180173860
 * Callers:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x180173B50 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EE9D7 (memmove_0.c)
 */

__int64 __fastcall std::vector<float>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  void *v6; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v5 = 4 * a2;
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v6, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<int>::_Change_array(a1, (__int64)v6, v4, a2);
}
