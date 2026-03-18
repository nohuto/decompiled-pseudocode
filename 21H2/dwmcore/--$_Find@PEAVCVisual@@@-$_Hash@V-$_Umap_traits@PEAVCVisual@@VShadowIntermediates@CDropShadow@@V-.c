/*
 * XREFs of ??$_Find@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@1@AEBQEAVCVisual@@_K@Z @ 0x1802123B0
 * Callers:
 *     ?GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z @ 0x18000FB10 (-GetEffectiveShadowIntermediates@CDropShadow@@AEBAPEAVShadowIntermediates@1@PEAVCVisual@@@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1802129EC (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??$_Find_last@PEAVCVisual@@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@PEAX@std@@@1@AEBQEAVCVisual@@_K@Z @ 0x1802123E4 (--$_Find_last@PEAVCVisual@@@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShado.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find<CVisual *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD *)(std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Find_last<CVisual *>(
                         a1,
                         v5,
                         a2,
                         a3)
                     + 8);
  if ( !result )
    return *(_QWORD *)(a1 + 8);
  return result;
}
