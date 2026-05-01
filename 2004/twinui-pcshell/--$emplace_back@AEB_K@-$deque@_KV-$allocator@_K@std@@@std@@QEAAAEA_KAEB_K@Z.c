/*
 * XREFs of ??$emplace_back@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEB_K@Z @ 0x1800C5E7C
 * Callers:
 *     ??$assign@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@X@?$deque@_KV?$allocator@_K@std@@@std@@QEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@0@Z @ 0x1800C56B0 (--$assign@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800CD294 (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 */

__int64 __fastcall std::deque<unsigned __int64>::emplace_back<unsigned __int64 const &>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 ***v11; // rcx
  __int64 ****v12; // rax
  __int64 *v13; // rax
  unsigned __int64 v14; // rdx

  v4 = *(_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 24);
  if ( (((_BYTE)v4 + (_BYTE)v5) & 1) == 0 && *(_QWORD *)(a1 + 16) <= (unsigned __int64)(v4 + 2) >> 1 )
  {
    std::deque<unsigned __int64>::_Growmap(a1);
    v5 = *(_QWORD *)(a1 + 24);
  }
  v6 = 0LL;
  v7 = v5 & (2LL * *(_QWORD *)(a1 + 16) - 1);
  *(_QWORD *)(a1 + 24) = v7;
  v8 = v7 + *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 8);
  v10 = (v8 >> 1) & (*(_QWORD *)(a1 + 16) - 1LL);
  if ( !*(_QWORD *)(v9 + 8 * v10) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v10) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v9 = *(_QWORD *)(a1 + 8);
  }
  *(_QWORD *)(*(_QWORD *)(v9 + 8 * v10) + 8 * (v8 & 1)) = *a2;
  v11 = 0LL;
  ++*(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)a1 )
  {
    v12 = **(__int64 ******)a1;
    if ( v12 )
      v11 = *v12;
  }
  v13 = 0LL;
  if ( v11 && *v11 )
    v13 = **v11;
  if ( v13 )
    v6 = *v13;
  v14 = *(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32) - 1LL;
  return *(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v14 >> 1))) + 8 * (v14 & 1);
}
