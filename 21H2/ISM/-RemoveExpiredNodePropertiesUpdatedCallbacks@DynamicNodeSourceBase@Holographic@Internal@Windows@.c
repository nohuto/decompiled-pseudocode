/*
 * XREFs of ?RemoveExpiredNodePropertiesUpdatedCallbacks@DynamicNodeSourceBase@Holographic@Internal@Windows@@IEAA?AV?$vector@USPATIAL_NODE_ID@@V?$allocator@USPATIAL_NODE_ID@@@std@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801635F0
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1801629B8 (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800796B8 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 *     ??$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@?$vector@USystemButtonEventInfo@@V?$allocator@USystemButtonEventInfo@@@std@@@std@@QEAAPEAUSystemButtonEventInfo@@QEAU2@AEBU2@@Z @ 0x180102A30 (--$_Emplace_reallocate@AEBUSystemButtonEventInfo@@@-$vector@USystemButtonEventInfo@@V-$allocator.c)
 *     ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014FE04 (--$WeakRefAs@V-$ComPtrRef@V-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Inte.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801679F0 (-erase@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@V-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::DynamicNodeSourceBase::RemoveExpiredNodePropertiesUpdatedCallbacks(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v4; // r15
  __int64 v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  _OWORD *v8; // r8
  _BYTE *v9; // rdx
  __int64 v11; // [rsp+28h] [rbp-10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+38h] BYREF
  __int64 v13; // [rsp+78h] [rbp+40h]
  __int64 v14; // [rsp+80h] [rbp+48h] BYREF
  __int64 v15; // [rsp+88h] [rbp+50h] BYREF

  v14 = a3;
  v13 = a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD *)(a1 + 32);
  v5 = **(_QWORD **)(a1 + 32);
LABEL_2:
  v12 = v5;
  while ( v5 != *v4 )
  {
    v6 = *(_QWORD **)(v5 + 48);
    while ( 1 )
    {
      v7 = *(_QWORD **)(v5 + 56);
      if ( v6 == v7 )
        break;
      v14 = 0LL;
      if ( (int)WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>>>(
                  v6,
                  &v14) >= 0
        && v14 )
      {
        ++v6;
      }
      else
      {
        v6 = (_QWORD *)*std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v5 + 48, &v11, (__int64)v6);
      }
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
    }
    if ( *(_QWORD **)(v5 + 48) == v7 )
    {
      v8 = (_OWORD *)(v5 + 32);
      v9 = *(_BYTE **)(a2 + 8);
      if ( *(_BYTE **)(a2 + 16) == v9 )
      {
        std::vector<SystemButtonEventInfo>::_Emplace_reallocate<SystemButtonEventInfo const &>(
          (const void **)a2,
          v9,
          v8);
      }
      else
      {
        *(_OWORD *)v9 = *v8;
        *(_QWORD *)(a2 + 8) += 16LL;
      }
      std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::vector<Microsoft::WRL::WeakRef>,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,std::vector<Microsoft::WRL::WeakRef>>>,0>>::erase(
        v4,
        &v15,
        v5);
      v5 = v15;
      goto LABEL_2;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v12);
    v5 = v12;
  }
  return a2;
}
