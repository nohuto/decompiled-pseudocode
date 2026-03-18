/*
 * XREFs of ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801CFCEC
 * Callers:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801CBCF8 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801CBD8C (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8674 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801CBD8C (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CCECC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CD7DC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801CECF8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        float a3,
        char a4)
{
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  struct CInteractionTracker *v10; // rdi
  __int64 *v11[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+10h] BYREF

  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    v11[1] = 0LL;
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v7 = v7;
    *(_QWORD *)(v7 + 8) = v7;
    *(_QWORD *)(v7 + 16) = v7;
    *(_WORD *)(v7 + 24) = 257;
    v11[0] = (__int64 *)v7;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 4u, v11, 0LL);
    v8 = v11[0];
    v9 = (__int64 *)*v11[0];
    v12 = (__int64 *)*v11[0];
    while ( v9 != v8 )
    {
      v10 = (struct CInteractionTracker *)v9[4];
      if ( v10 != a2 )
      {
        if ( (*((_BYTE *)v10 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v9[4], 0);
        CInteractionTracker::SetScale((__int64)v10, a3, 1);
      }
      *((_BYTE *)v10 + 532) &= ~4u;
      *((_BYTE *)v10 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v12);
      v9 = v12;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v11,
      (__int64)v11,
      v11[0][1]);
    std::_Deallocate<16,0>(v11[0], 0x28uLL);
  }
}
