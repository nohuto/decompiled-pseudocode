/*
 * XREFs of ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2BA4
 * Callers:
 *     ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKERBINDINGMANAGER_SETTRACKERBINDINGMODE@@@Z @ 0x1801D37A0 (-ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCResourceTable@@PEBUta.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801CB944 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDBC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDFC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CCF34 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801D0CF4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801D169C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D1FAC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801D34C8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
 */

void __fastcall CInteractionTrackerBindingManager::BringBoundTrackersStateInSync(
        int a1,
        __int64 a2,
        CInteractionTracker *a3,
        int a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  CInteractionTracker *v9; // rbx
  __int64 v10; // r9
  __int64 *v11; // rbx
  __int64 *v12; // rax
  int v13; // edx
  __int64 v14; // rsi
  float CurrentValue; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  CInteractionTracker *v21; // [rsp+30h] [rbp-30h] BYREF
  CInteractionTracker *v22; // [rsp+38h] [rbp-28h] BYREF
  void *v23[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v24; // [rsp+50h] [rbp-10h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]

  if ( a4 && (*(_DWORD *)(a2 + 168) || *((_DWORD *)a3 + 42)) )
  {
    v22 = 0LL;
    v21 = 0LL;
    v25 = 0LL;
    v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v7 = v7;
    v7[1] = v7;
    v7[2] = v7;
    *((_WORD *)v7 + 12) = 257;
    v23[1] = 0LL;
    v24 = v7;
    v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *v8 = v8;
    v8[1] = v8;
    v8[2] = v8;
    *((_WORD *)v8 + 12) = 257;
    v23[0] = v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(a1, a2, 7, (unsigned int)&v24, (unsigned __int8)&v22);
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
      a1,
      (_DWORD)a3,
      7,
      (unsigned int)v23,
      (unsigned __int8)&v21);
    v9 = v21;
    if ( v22 != v21 )
    {
      if ( *(_DWORD *)(a2 + 168) && v25 == 1 )
        *(_BYTE *)(a2 + 533) |= 1u;
      CInteractionTracker::StopCustomAnimations(a3, 1);
      CInteractionTracker::DestroyDefaultAnimations(a3, 0);
      CInteractionTracker::DestroyInteractionAnimations(a3);
      if ( v9 )
        CInteractionTracker::DemoteToBoundTracker(v9, 1);
      if ( *(_DWORD *)(a2 + 168) != *((_DWORD *)a3 + 42) )
      {
        v11 = (__int64 *)v23[0];
        v12 = *(__int64 **)v23[0];
        v22 = *(CInteractionTracker **)v23[0];
        while ( v12 != v11 )
        {
          v13 = *(_DWORD *)(a2 + 168);
          v14 = v12[4];
          if ( !v13 && *((_DWORD *)a3 + 42) == 1 )
          {
            CInteractionTracker::SetState(v12[4], 2, 1LL, v10);
            CurrentValue = CInteractionTracker::GetCurrentValue(v14, 0);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 0, CurrentValue, 1);
            v16 = CInteractionTracker::GetCurrentValue(v14, 1);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 1u, v16, 1);
            v17 = CInteractionTracker::GetCurrentValue(v14, 2);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 2u, v17, 1);
            *(_BYTE *)(*(_QWORD *)(v14 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v14 + 496) - 1) + 20) = 1;
            v13 = *(_DWORD *)(a2 + 168);
          }
          CInteractionTracker::SetState(v14, v13, 1LL, v10);
          if ( *(_DWORD *)(a2 + 168) == 2 )
          {
            v18 = CInteractionTracker::GetCurrentValue(v14, 0);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 0, v18, 1);
            v19 = CInteractionTracker::GetCurrentValue(v14, 1);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 1u, v19, 1);
            v20 = CInteractionTracker::GetCurrentValue(v14, 2);
            CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v14, 2u, v20, 1);
          }
          *(_BYTE *)(*(_QWORD *)(v14 + 472) + 24LL * (unsigned int)(*(_DWORD *)(v14 + 496) - 1) + 20) = 1;
          std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++((__int64 **)&v22);
          v12 = (__int64 *)v22;
        }
      }
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)v23,
      (__int64)v23,
      *((_QWORD *)v23[0] + 1));
    std::_Deallocate<16,0>(v23[0], 0x28uLL);
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v24,
      (__int64)&v24,
      v24[1]);
    std::_Deallocate<16,0>(v24, 0x28uLL);
  }
}
