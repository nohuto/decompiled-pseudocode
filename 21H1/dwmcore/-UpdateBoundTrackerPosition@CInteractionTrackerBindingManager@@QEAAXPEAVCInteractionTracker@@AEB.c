/*
 * XREFs of ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801D42C8
 * Callers:
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CFF70 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x1801D02D8 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDBC (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801CFF70 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@1@@Z @ 0x1801D169C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D1FAC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801D34C8 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4.c)
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
  float v13; // xmm0_4
  __int64 *v14; // rbx
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  float v19; // xmm0_4
  __int64 *v20; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+38h] [rbp-28h]
  __int64 *v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF
  int v24; // [rsp+50h] [rbp-10h]

  if ( (*((_BYTE *)a2 + 533) & 1) != 0 )
  {
    v21 = 0LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    *(_QWORD *)v8 = v8;
    *(_QWORD *)(v8 + 8) = v8;
    *(_QWORD *)(v8 + 16) = v8;
    *(_WORD *)(v8 + 24) = 257;
    v20 = (__int64 *)v8;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 1u, &v20, 0LL);
    v9 = v20;
    v10 = (__int64 *)*v20;
    v22 = (__int64 *)*v20;
    while ( v10 != v9 )
    {
      v11 = v10[4];
      if ( (struct CInteractionTracker *)v11 != a2 )
      {
        if ( (*(_BYTE *)(v11 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v10[4], 0);
        v12 = *(_DWORD *)(v11 + 80);
        v23 = *(_QWORD *)(v11 + 72);
        v13 = *(float *)&v23 + *(float *)a3;
        v24 = v12;
        *(float *)&v23 = v13;
        CInteractionTracker::SetPosition(v11, (__int64)&v23, 1);
      }
      *(_BYTE *)(v11 + 532) &= ~4u;
      *(_BYTE *)(v11 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
      v10 = v22;
    }
    v14 = v20;
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v20,
      (__int64)&v20,
      v20[1]);
    v14[1] = (__int64)v14;
    *v14 = (__int64)v14;
    v14[2] = (__int64)v14;
    v21 = 0LL;
    CInteractionTrackerBindingManager::GetConnectedTrackersForAxis((__int64)this, (__int64)a2, 2u, &v20, 0LL);
    v15 = v20;
    v16 = (__int64 *)*v20;
    v22 = (__int64 *)*v20;
    while ( v16 != v15 )
    {
      v17 = v16[4];
      if ( (struct CInteractionTracker *)v17 != a2 )
      {
        if ( (*(_BYTE *)(v17 + 533) & 1) != 0 )
          CInteractionTracker::DemoteToBoundTracker((CInteractionTracker *)v16[4], 0);
        v18 = *(_DWORD *)(v17 + 80);
        v23 = *(_QWORD *)(v17 + 72);
        v19 = *((float *)&v23 + 1) + *((float *)a3 + 1);
        v24 = v18;
        *((float *)&v23 + 1) = v19;
        CInteractionTracker::SetPosition(v17, (__int64)&v23, 1);
      }
      *(_BYTE *)(v17 + 532) &= ~4u;
      *(_BYTE *)(v17 + 532) |= 4 * a4;
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v22);
      v16 = v22;
    }
    std::_Tree_val<std::_Tree_simple_types<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>,void *>>>(
      (__int64)&v20,
      (__int64)&v20,
      v20[1]);
    std::_Deallocate<16,0>(v20, 0x28uLL);
  }
}
