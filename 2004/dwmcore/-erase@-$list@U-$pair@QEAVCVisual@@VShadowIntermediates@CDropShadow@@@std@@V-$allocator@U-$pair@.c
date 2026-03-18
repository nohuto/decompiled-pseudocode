/*
 * XREFs of ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801C114C
 * Callers:
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800AB0B4 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Insert_unverified@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@1@@Z @ 0x1801C03E8 (--$_Insert_unverified@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$_List_unch.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ShadowIntermediates@CDropShadow@@QEAA@XZ @ 0x1800E0C00 (--1ShadowIntermediates@CDropShadow@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase(
        __int64 a1,
        _QWORD *a2,
        void *a3)
{
  _QWORD *v3; // rbx

  v3 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  CDropShadow::ShadowIntermediates::~ShadowIntermediates((struct CResource **)a3 + 3);
  std::_Deallocate<16,0>(a3, 0x58uLL);
  *a2 = v3;
  return a2;
}
