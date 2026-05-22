/*
 * XREFs of ??$_Insert@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x18019DE08
 * Callers:
 *     _lambda_2e17bef57c72db371333aa9a3de53833_::operator() @ 0x18019F7B0 (_lambda_2e17bef57c72db371333aa9a3de53833_--operator().c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A1020 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Insert<std::shared_ptr<HotKeyInfo> const &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  v7[2] = 0LL;
  v7[3] = 0LL;
  v8 = a3[1];
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v7[2] = *a3;
  result = a3[1];
  v7[3] = result;
  *v7 = a2;
  v7[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v7;
  *v6 = v7;
  return result;
}
