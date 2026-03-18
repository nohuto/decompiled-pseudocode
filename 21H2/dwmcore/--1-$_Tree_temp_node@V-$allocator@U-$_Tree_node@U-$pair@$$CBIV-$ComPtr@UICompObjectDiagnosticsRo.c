/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801962C0
 * Callers:
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18019603C (--$_Try_emplace@AEBI$$V@-$map@IV-$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@U-$le.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v2 + 40));
    v3 = *(void **)(a1 + 8);
    if ( v3 )
      std::_Deallocate<16,0>(v3, 0x30uLL);
  }
}
