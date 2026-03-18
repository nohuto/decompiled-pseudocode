/*
 * XREFs of ??$_Insert_at@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@1@_NPEAU?$_Tree_node@_JPEAX@1@AEB_JU_Not_a_node_tag@1@@Z @ 0x18019AD40
 * Callers:
 *     ??$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@std@@_N@1@_NAEB_JU_Not_a_node_tag@1@@Z @ 0x18019AEFC (--$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_JU-$less@_J@std@@V-$alloc.c)
 *     ??$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@_NAEBQEAVCInteractionTracker@@U_Not_a_node_tag@1@@Z @ 0x1801D16F8 (--$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@PEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180155D20 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180155D70 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::_Insert_at<__int64 const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // r11
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *result; // rax

  if ( a1[1] >= 0x666666666666665uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = *a1;
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v11 = 0;
  v12 = v10;
  *(_QWORD *)(v10 + 32) = *a5;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(v10 + 8) = v9;
  *(_QWORD *)(v10 + 16) = v9;
  *(_WORD *)(v10 + 24) = 0;
  ++a1[1];
  *(_QWORD *)(v10 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v10;
    *(_QWORD *)*a1 = v10;
    v13 = *a1;
LABEL_9:
    *(_QWORD *)(v13 + 16) = v12;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v10;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v10;
    goto LABEL_10;
  }
  a4[2] = v10;
  v13 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v12;
  while ( *(_BYTE *)(v14 + 24) == v11 )
  {
    v16 = *(_QWORD *)(v15 + 8);
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( *(_BYTE *)(v18 + 24) == v11 )
        goto LABEL_17;
      if ( v15 == *(_QWORD *)(v16 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          (__int64)a1,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(*(_QWORD *)(v15 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v18 + 24) == v11 )
      {
LABEL_17:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL);
        goto LABEL_21;
      }
      if ( v15 == *(_QWORD *)v16 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          (__int64)a1,
          *(_QWORD **)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL));
    }
LABEL_21:
    v14 = *(_QWORD *)(v15 + 8);
  }
  v19 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v19 + 24) = 1;
  return result;
}
