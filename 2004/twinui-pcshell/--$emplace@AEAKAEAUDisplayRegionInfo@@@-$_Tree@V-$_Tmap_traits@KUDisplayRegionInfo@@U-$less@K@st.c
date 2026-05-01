/*
 * XREFs of ??$emplace@AEAKAEAUDisplayRegionInfo@@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAUDisplayRegionInfo@@@Z @ 0x1802E6344
 * Callers:
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802E6BD0 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180043338 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUDisplayRegionInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@1@@Z @ 0x1802E61E4 (--$_Insert_nohint@AEAU-$pair@$$CBKUDisplayRegionInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBKUDispl.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::emplace<unsigned long &,DisplayRegionInfo &>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r8

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  v10 = *a3;
  *((_DWORD *)v9 + 7) = v10;
  *((_OWORD *)v9 + 2) = *(_OWORD *)a4;
  v9[6] = *(_QWORD *)(a4 + 16);
  *((_DWORD *)v9 + 14) = *(_DWORD *)(a4 + 24);
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Insert_nohint<std::pair<unsigned long const,DisplayRegionInfo> &,std::_Tree_node<std::pair<unsigned long const,DisplayRegionInfo>,void *> *>(
    a1,
    a2,
    v10,
    (_DWORD *)v9 + 7,
    v9);
  return a2;
}
