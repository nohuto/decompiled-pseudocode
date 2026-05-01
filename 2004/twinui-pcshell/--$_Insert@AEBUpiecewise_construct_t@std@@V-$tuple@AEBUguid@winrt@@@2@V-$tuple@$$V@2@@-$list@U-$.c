/*
 * XREFs of ??$_Insert@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUguid@winrt@@@2@V?$tuple@$$V@2@@?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUguid@winrt@@_K@std@@@std@@@std@@U_Iterator_base0@2@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUguid@winrt@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C4948
 * Callers:
 *     ??A?$unordered_map@Uguid@winrt@@_KU?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@@std@@QEAAAEA_KAEBUguid@winrt@@@Z @ 0x1800C7E48 (--A-$unordered_map@Uguid@winrt@@_KU-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$allo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800C76A4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@V-$com_ptr_t@UIApplicationView@@Uerr_except.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::pair<winrt::guid const,unsigned __int64>>::_Insert<std::piecewise_construct_t const &,std::tuple<winrt::guid const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD **a4)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x666666666666666LL )
    std::_Xlength_error("list<T> too long");
  v7 = *(_QWORD **)(a2 + 8);
  v10 = a1;
  v11 = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *((_OWORD *)v8 + 1) = **a4;
  v8[4] = 0LL;
  *v8 = a2;
  v8[1] = v7;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v7 = v8;
  v11 = 0LL;
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(&v10);
}
