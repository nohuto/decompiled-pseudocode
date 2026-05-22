/*
 * XREFs of ??$_Insert@AEBEUTargetingInfo@KeyboardProcessor@@@?$list@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBE$$QEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180047D0C
 * Callers:
 *     ??$emplace@AEBEUTargetingInfo@KeyboardProcessor@@@?$_Hash@V?$_Umap_traits@EUTargetingInfo@KeyboardProcessor@@V?$_Uhash_compare@EU?$hash@E@std@@U?$equal_to@E@2@@std@@V?$allocator@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBEUTargetingInfo@KeyboardProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBE$$QEAUTargetingInfo@KeyboardProcessor@@@Z @ 0x180047F84 (--$emplace@AEBEUTargetingInfo@KeyboardProcessor@@@-$_Hash@V-$_Umap_traits@EUTargetingInfo@Keyboa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::list<std::pair<unsigned char const,KeyboardProcessor::TargetingInfo>>::_Insert<unsigned char const &,KeyboardProcessor::TargetingInfo>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        _QWORD *a4)
{
  _QWORD *v8; // r14
  _QWORD *v9; // rdx
  _QWORD *result; // rax
  _QWORD **v11; // rsi

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v8 = *(_QWORD **)(a2 + 8);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *((_BYTE *)v9 + 16) = *a3;
  result = v9 + 3;
  v9[3] = 0LL;
  if ( v9 + 3 != a4 )
  {
    *result = *a4;
    *a4 = 0LL;
  }
  v11 = (_QWORD **)(a4 + 1);
  v9[4] = 0LL;
  if ( v9 + 4 != v11 )
  {
    result = *v11;
    v9[4] = *v11;
    *v11 = 0LL;
  }
  *v9 = a2;
  v9[1] = v8;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v9;
  *v8 = v9;
  return result;
}
