/*
 * XREFs of ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@@std@@PEAPEAV2@@Z @ 0x1801D34C8
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D204C (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D215C (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2918 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801D2BA4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x1801D3110 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801D391C (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 *     ?TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0@Z @ 0x1801D3F58 (-TransitionDisconnectedTrackersToIdle@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTr.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801D42C8 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801D44C8 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801D45F0 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180044B10 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@2@_K@Z @ 0x18018523C (-_End@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V-$.c)
 *     ??$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@_NAEBQEAVCInteractionTracker@@U_Not_a_node_tag@1@@Z @ 0x1801D16F8 (--$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@PEA.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801D1FAC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@PEAVCInteractionTracker@@.c)
 *     ?_Push_back_internal@?$deque@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@AEAAXAEBQEAVCInteractionTracker@@@Z @ 0x1801D4BD4 (-_Push_back_internal@-$deque@PEAVCInteractionTracker@@V-$allocator@PEAVCInteractionTracker@@@std.c)
 */

void __fastcall CInteractionTrackerBindingManager::GetConnectedTrackersForAxis(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 **a4,
        __int64 a5)
{
  _QWORD *v5; // rsi
  __int64 v9; // r14
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r11
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r11
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r10
  __int64 ***v26; // r15
  __int64 **i; // rbx
  __int64 *v28; // r10
  __int64 *v29; // rax
  __int128 v30; // rcx
  __int64 *v31; // rcx
  _QWORD v32[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v33[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-30h] BYREF
  __int128 v35; // [rsp+58h] [rbp-28h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h]
  __int64 v37; // [rsp+70h] [rbp-10h]
  __int64 *v38; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v39; // [rsp+C8h] [rbp+48h] BYREF

  v39 = a2;
  v5 = (_QWORD *)a5;
  if ( a5 )
    *(_QWORD *)a5 = 0LL;
  v9 = a1 + 64;
  v10 = *(_QWORD *)(a1 + 112) & std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)&v39, 8uLL);
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
            v9,
            &a5,
            v10);
    if ( v13 == *v11 )
      break;
    if ( *(_QWORD *)(v13 + 16) == v14 )
      goto LABEL_8;
  }
  v13 = *(_QWORD *)(v9 + 8);
LABEL_8:
  if ( v13 == *(_QWORD *)(a1 + 72) )
  {
    std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Insert_nohint<CInteractionTracker * const &,std::_Not_a_node_tag>(
      a4,
      (__int64)v32,
      v12,
      &v39);
    if ( v5 )
      *v5 = v39;
  }
  else if ( a3 <= 7 )
  {
    v15 = 150;
    if ( _bittest(&v15, a3) )
    {
      v36 = 0LL;
      v37 = 0LL;
      v35 = 0LL;
      v16 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v16[1] = 0LL;
      v34 = v16;
      *v16 = (__int64)&v34;
      std::deque<CInteractionTracker *>::_Push_back_internal(&v34, &v39);
      while ( v37 )
      {
        v17 = 0LL;
        if ( v34 )
          v17 = *v34;
        v18 = (*(_QWORD *)(v17 + 16) - 1LL) & (v36 >> 1);
        v19 = *(_QWORD *)(v17 + 8);
        v20 = v36 & 1;
        v21 = *(_QWORD *)(*(_QWORD *)(v19 + 8 * v18) + 8 * v20);
        a5 = v21;
        if ( --v37 )
          ++v36;
        else
          v36 = 0LL;
        v22 = *(_QWORD *)(v9 + 48) & std::_Fnv1a_append_bytes(v20, (const unsigned __int8 *const)&a5, 8uLL);
        while ( 1 )
        {
          v23 = std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_End(
                  v9,
                  v32,
                  v22);
          if ( v25 == *v23 )
            break;
          if ( *(_QWORD *)(v25 + 16) == v21 )
            goto LABEL_25;
        }
        v25 = *(_QWORD *)(v9 + 8);
LABEL_25:
        v26 = *(__int64 ****)(v25 + 32);
        for ( i = *v26; i != (__int64 **)v26; i = (__int64 **)*i )
        {
          v28 = *a4;
          v29 = (__int64 *)**a4;
          v38 = v29;
          while ( v29 != v28 )
          {
            if ( (__int64 *)v29[4] == i[2] )
            {
              if ( v29 != v28 )
                goto LABEL_35;
              break;
            }
            std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<CInteractionTracker *>>,std::_Iterator_base0>::operator++(&v38);
            v29 = v38;
          }
          if ( (a3 & (_DWORD)i[3]) == a3 || a3 == 7 )
            std::deque<CInteractionTracker *>::_Push_back_internal(&v34, i + 2);
LABEL_35:
          ;
        }
        std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::_Insert_nohint<CInteractionTracker * const &,std::_Not_a_node_tag>(
          a4,
          (__int64)v33,
          v24,
          &a5);
        if ( v5 && (*(_BYTE *)(a5 + 533) & 1) != 0 )
          *v5 = a5;
      }
      v30 = v35;
      if ( *((_QWORD *)&v35 + 1) )
      {
        do
        {
          --*((_QWORD *)&v30 + 1);
          if ( *(_QWORD *)(v30 + 8LL * *((_QWORD *)&v30 + 1)) )
          {
            std::_Deallocate<16,0>(*(void **)(v30 + 8LL * *((_QWORD *)&v30 + 1)), 0x10uLL);
            *(_QWORD *)&v30 = v35;
          }
        }
        while ( *((_QWORD *)&v30 + 1) );
        *((_QWORD *)&v30 + 1) = *((_QWORD *)&v35 + 1);
      }
      if ( (_QWORD)v30 )
        std::_Deallocate<16,0>((void *)v30, 8LL * *((_QWORD *)&v30 + 1));
      v31 = v34;
      v34 = 0LL;
      v35 = 0uLL;
      std::_Deallocate<16,0>(v31, 0x10uLL);
    }
  }
}
