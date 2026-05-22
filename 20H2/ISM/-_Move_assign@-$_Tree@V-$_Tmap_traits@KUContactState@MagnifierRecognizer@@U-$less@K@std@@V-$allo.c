/*
 * XREFs of ?_Move_assign@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x18017E018
 * Callers:
 *     ?Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z @ 0x18017DD20 (-Reset@MagnifierRecognizer@@QEAAXAEBUThresholds@1@@Z.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@1@@Z @ 0x180124F00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Move_assign(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rcx

  v2 = (_QWORD *)*a1;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,MagnifierRecognizer::ContactState>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *(_QWORD *)(*a1 + 8LL));
  v2[1] = v2;
  *v2 = v2;
  v2[2] = v2;
  a1[1] = 0LL;
  v5 = *a1;
  *a1 = *a2;
  result = a2[1];
  *a2 = v5;
  v7 = a1[1];
  a1[1] = result;
  a2[1] = v7;
  return result;
}
