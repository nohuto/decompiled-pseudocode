/*
 * XREFs of ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180167244
 * Callers:
 *     ?SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180168A60 (-SetBootstrapProxy@DiagnosticCallbacksManager@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x180166FA4 (--$_Insert_hint@AEAU-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3,
        __int64 a4,
        _DWORD **a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax

  v5 = *a1;
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_DWORD *)(v9 + 32) = **a5;
  *(_QWORD *)(v9 + 40) = 0LL;
  *(_QWORD *)v9 = v5;
  *(_QWORD *)(v9 + 8) = v5;
  *(_QWORD *)(v9 + 16) = v5;
  *(_WORD *)(v9 + 24) = 0;
  std::_Tree<std::_Tmap_traits<unsigned int,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>,0>>::_Insert_hint<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>> &,std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *> *>(
    a1,
    a2,
    a3,
    (unsigned int *)(v9 + 32),
    v9);
  return a2;
}
