/*
 * XREFs of ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1801D07A0
 * Callers:
 *     ?TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801D17C4 (-TryUpdateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@QEAAXPEAVCInterac.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BFC74 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x1801824CC (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CED2C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??$_Insert_unverified@AEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@@Z @ 0x1801CEF9C (--$_Insert_unverified@AEAU-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@.c)
 *     ??$emplace_front@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@?$list@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@2@@std@@QEAAAEAU?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@1@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CF230 (--$emplace_front@AEAPEAVCInteractionTracker@@AEAW4InteractionTrackerBindingModeFlags@@@-$list@U-.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CF63C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801D0B58 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersAndUpdatedAxes(
        int a1,
        int a2,
        char a3,
        __int64 a4)
{
  char v7; // r14
  int v8; // r15d
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // r11
  __int64 *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rbx
  _QWORD *v18; // rax
  __int64 v19; // r10
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // r11
  __int64 *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // r10
  _QWORD *v28; // rax
  __int64 v29; // rcx
  __int64 *v30; // r11
  __int64 *v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // r10
  __int64 v36; // [rsp+30h] [rbp-40h] BYREF
  __int64 *v37; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int8 v38[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v39; // [rsp+48h] [rbp-28h] BYREF
  __int64 v40; // [rsp+50h] [rbp-20h]
  void *v41[3]; // [rsp+58h] [rbp-18h] BYREF
  int v42; // [rsp+B0h] [rbp+40h]

  v42 = a3 & 4;
  v41[1] = 0LL;
  v7 = a3 & 1;
  v8 = a3 & 2;
  v9 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  v41[0] = v9;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)v41, 0);
  v10 = (__int64 *)v41[0];
  v11 = *(__int64 **)v41[0];
  v37 = *(__int64 **)v41[0];
  while ( v11 != v10 )
  {
    *(_QWORD *)v38 = v11[4];
    LODWORD(v36) = 0;
    std::list<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>::emplace_front<CInteractionTracker * &,enum InteractionTrackerBindingModeFlags &>(
      (__int64 **)(a4 + 8),
      v38,
      &v36);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Insert_unverified<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>>>>(
      (_QWORD *)a4,
      (__int64)&v39,
      (const unsigned __int8 *)(**(_QWORD **)(a4 + 8) + 16LL),
      **(_QWORD **)(a4 + 8));
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v37);
    v11 = v37;
  }
  if ( v7 )
  {
    v40 = 0LL;
    v12 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v12 = v12;
    v12[1] = v12;
    v12[2] = v12;
    *((_WORD *)v12 + 12) = 257;
    v39 = v12;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 1, (unsigned int)&v39, 0);
    v14 = v39;
    v15 = (__int64 *)*v39;
    v37 = (__int64 *)*v39;
    while ( v15 != v14 )
    {
      v16 = v15[4];
      *(_QWORD *)v38 = v16;
      v17 = *(_QWORD *)(a4 + 48) & std::_Fnv1a_append_bytes(v13, v38, 8uLL);
      while ( 1 )
      {
        v18 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                a4,
                &v36,
                v17);
        if ( v19 == *v18 )
          break;
        if ( *(_QWORD *)(v19 + 16) == v16 )
          goto LABEL_12;
      }
      v19 = *(_QWORD *)(a4 + 8);
LABEL_12:
      *(_DWORD *)(v19 + 24) |= 1u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v37);
      v15 = v37;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v39,
      (__int64)&v39,
      v39[1]);
    std::_Deallocate<16,0>(v39, 0x28uLL);
  }
  if ( v8 )
  {
    v40 = 0LL;
    v20 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v20 = v20;
    v20[1] = v20;
    v20[2] = v20;
    *((_WORD *)v20 + 12) = 257;
    v39 = v20;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 2, (unsigned int)&v39, 0);
    v22 = v39;
    v23 = (__int64 *)*v39;
    v37 = (__int64 *)*v39;
    while ( v23 != v22 )
    {
      v24 = v23[4];
      *(_QWORD *)v38 = v24;
      v25 = *(_QWORD *)(a4 + 48) & std::_Fnv1a_append_bytes(v21, v38, 8uLL);
      while ( 1 )
      {
        v26 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                a4,
                &v36,
                v25);
        if ( v27 == *v26 )
          break;
        if ( *(_QWORD *)(v27 + 16) == v24 )
          goto LABEL_22;
      }
      v27 = *(_QWORD *)(a4 + 8);
LABEL_22:
      *(_DWORD *)(v27 + 24) |= 2u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v37);
      v23 = v37;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v39,
      (__int64)&v39,
      v39[1]);
    std::_Deallocate<16,0>(v39, 0x28uLL);
  }
  if ( v42 )
  {
    v40 = 0LL;
    v28 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v28 = v28;
    v28[1] = v28;
    v28[2] = v28;
    *((_WORD *)v28 + 12) = 257;
    v39 = v28;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 4, (unsigned int)&v39, 0);
    v30 = v39;
    v31 = (__int64 *)*v39;
    v37 = (__int64 *)*v39;
    while ( v31 != v30 )
    {
      v32 = v31[4];
      *(_QWORD *)v38 = v32;
      v33 = *(_QWORD *)(a4 + 48) & std::_Fnv1a_append_bytes(v29, v38, 8uLL);
      while ( 1 )
      {
        v34 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                a4,
                &v36,
                v33);
        if ( v35 == *v34 )
          break;
        if ( *(_QWORD *)(v35 + 16) == v32 )
          goto LABEL_32;
      }
      v35 = *(_QWORD *)(a4 + 8);
LABEL_32:
      *(_DWORD *)(v35 + 24) |= 4u;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v37);
      v31 = v37;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v39,
      (__int64)&v39,
      v39[1]);
    std::_Deallocate<16,0>(v39, 0x28uLL);
  }
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v41,
    (__int64)v41,
    *((_QWORD *)v41[0] + 1));
  std::_Deallocate<16,0>(v41[0], 0x28uLL);
}
