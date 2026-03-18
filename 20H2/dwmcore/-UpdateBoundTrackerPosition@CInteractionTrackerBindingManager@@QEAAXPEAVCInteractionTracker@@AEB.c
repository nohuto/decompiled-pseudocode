/*
 * XREFs of ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801CFAF8
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CB868 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801CBB88 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801C8674 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CB868 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CCECC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CD7DC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801CECF8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        const struct D2DVector3 *a3,
        char a4)
{
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  __int64 *v13; // rbx
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  __int64 *v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h]
  __int64 *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  int v22; // [rsp+50h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    v19 = 0LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v8 = v8;
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)(v8 + 16) = v8;
    *(_WORD *)(v8 + 24) = 257;
    v18 = (__int64 *)v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 1u, &v18, 0LL);
    v9 = v18;
    v10 = (__int64 *)*v18;
    v20 = (__int64 *)*v18;
    while ( v10 != v9 )
    {
      v11 = v10[4];
      if ( (struct CInteractionTracker *)v11 != a2 )
      {
        if ( (*(_BYTE *)(v11 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v10[4], 0);
        v12 = *(_DWORD *)(v11 + 80);
        v21 = *(_QWORD *)(v11 + 72);
        LODWORD(v21) = *(_DWORD *)a3;
        v22 = v12;
        CInteractionTracker::SetPosition(v11, (__int64)&v21, 1);
      }
      *(_BYTE *)(v11 + 532) &= ~4u;
      *(_BYTE *)(v11 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v20);
      v10 = v20;
    }
    v13 = v18;
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v18,
      (__int64)&v18,
      v18[1]);
    v13[1] = (__int64)v13;
    *v13 = (__int64)v13;
    v13[2] = (__int64)v13;
    v19 = 0LL;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 2u, &v18, 0LL);
    v14 = v18;
    v15 = (__int64 *)*v18;
    v20 = (__int64 *)*v18;
    while ( v15 != v14 )
    {
      v16 = v15[4];
      if ( (struct CInteractionTracker *)v16 != a2 )
      {
        if ( (*(_BYTE *)(v16 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v15[4], 0);
        v17 = *(_DWORD *)(v16 + 80);
        v21 = *(_QWORD *)(v16 + 72);
        HIDWORD(v21) = *((_DWORD *)a3 + 1);
        v22 = v17;
        CInteractionTracker::SetPosition(v16, (__int64)&v21, 1);
      }
      *(_BYTE *)(v16 + 532) &= ~4u;
      *(_BYTE *)(v16 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v20);
      v15 = v20;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v18,
      (__int64)&v18,
      v18[1]);
    std::_Deallocate<16,0>(v18, 0x28uLL);
  }
}
