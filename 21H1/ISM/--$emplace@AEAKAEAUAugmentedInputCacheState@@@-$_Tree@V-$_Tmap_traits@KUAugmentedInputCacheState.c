/*
 * XREFs of ??$emplace@AEAKAEAUAugmentedInputCacheState@@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@AEAKAEAUAugmentedInputCacheState@@@Z @ 0x18008F4B4
 * Callers:
 *     ?AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z @ 0x18008F640 (-AddDeviceToCache@AugmentedInputDeviceCollection@@AEAAJKGGG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKUAugmentedInputCacheState@@@1@PEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@1@@Z @ 0x18008F354 (--$_Insert_nohint@AEAU-$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::emplace<unsigned long &,AugmentedInputCacheState &>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v10; // r8

  v8 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v10 = *a3;
  *((_DWORD *)v9 + 7) = v10;
  v9[4] = *(_QWORD *)a4;
  *((_DWORD *)v9 + 10) = *(_DWORD *)(a4 + 8);
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Insert_nohint<std::pair<unsigned long const,AugmentedInputCacheState> &,std::_Tree_node<std::pair<unsigned long const,AugmentedInputCacheState>,void *> *>(
    a1,
    a2,
    v10,
    (_DWORD *)v9 + 7,
    v9);
  return a2;
}
