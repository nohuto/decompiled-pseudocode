/*
 * XREFs of ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801CF788
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801CD98C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801C71FC (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C8D20 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801CBF4C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801CCECC (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801CD7DC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801CECF8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::TransitionDisconnectedTrackersToIdle(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2,
        struct CInteractionTracker *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  float CurrentValue; // xmm0_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  __int64 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 *v16[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 *v17[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v18; // [rsp+98h] [rbp+38h] BYREF

  v17[1] = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  v16[1] = 0LL;
  v17[0] = (__int64 *)v6;
  v7 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v18 = 0LL;
  v15 = 0LL;
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  v16[0] = (__int64 *)v7;
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 7u, v17, (__int64)&v18);
  CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a3, 7u, v16, (__int64)&v15);
  if ( v18 )
  {
    if ( v15 && v18 == v15 )
      goto LABEL_11;
    v9 = v16[0];
  }
  else
  {
    v9 = v17[0];
  }
  v10 = (__int64 *)*v9;
  v18 = (__int64 *)*v9;
  while ( v10 != v9 )
  {
    v11 = v10[4];
    if ( *(_DWORD *)(v11 + 168) == 1 )
    {
      CInteractionTracker::SetState(v10[4], 2, 1LL, v8);
      CurrentValue = CInteractionTracker::GetCurrentValue(v11, 0);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 0, CurrentValue, 1);
      v13 = CInteractionTracker::GetCurrentValue(v11, 1);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 1, v13, 1);
      v14 = CInteractionTracker::GetCurrentValue(v11, 2);
      CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v11, 2, v14, 1);
    }
    CInteractionTracker::SetState(v11, 0, 1LL, v8);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v18);
    v10 = v18;
  }
LABEL_11:
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v16,
    (__int64)v16,
    v16[0][1]);
  std::_Deallocate<16,0>(v16[0], 0x28uLL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
    (__int64)v17,
    (__int64)v17,
    v17[0][1]);
  std::_Deallocate<16,0>(v17[0], 0x28uLL);
}
