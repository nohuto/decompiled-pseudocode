/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBUDockInputIdentity@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBUDockInputIdentity@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180125D9C
 * Callers:
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180125B78 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UKeyboardDockInput@@U-$less.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UKeyboardDockInput@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@1@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAX@1@@Z @ 0x180125450 (--$_Insert_hint@AEAU-$pair@$$CBUDockInputIdentity@@UKeyboardDockInput@@@std@@PEAU-$_Tree_node@U-.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<DockInputIdentity const &>,std::tuple<>>(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        _OWORD **a5)
{
  __int64 v8; // rdi
  _QWORD *v9; // rax
  _OWORD *v10; // rdx

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x68uLL);
  v10 = *a5;
  *((_OWORD *)v9 + 2) = **a5;
  v9[6] = *((_QWORD *)v10 + 2);
  *(_OWORD *)(v9 + 7) = 0LL;
  *(_OWORD *)(v9 + 9) = 0LL;
  *(_OWORD *)(v9 + 11) = 0LL;
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<DockInputIdentity,KeyboardDockInput,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,KeyboardDockInput>>,0>>::_Insert_hint<std::pair<DockInputIdentity const,KeyboardDockInput> &,std::_Tree_node<std::pair<DockInputIdentity const,KeyboardDockInput>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)v9 + 8,
    v9);
  return a2;
}
