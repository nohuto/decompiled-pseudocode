/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801572B4
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1801572A8 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x180157A20 (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VDynamicNodeSourceBase@567@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180158B20 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphDriverClient@Holographi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003AA50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B2E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@PEAX@1@@Z @ 0x1801519E4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$vector@VWeakRef@WRL@M.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Holographic::ISpatialGraphDriverClient,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Windows::Internal::Holographic::DynamicNodeSourceBase,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  std::_Ref_count_base *v5; // rcx

  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
      2 * v3,
      a2);
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(std::_Ref_count_base **)(a1 + 104);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,std::vector<Microsoft::WRL::WeakRef>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::vector<Microsoft::WRL::WeakRef>>,void *>>>(
    a1 + 64,
    a1 + 64,
    *(__int64 **)(*(_QWORD *)(a1 + 64) + 8LL));
  std::_Deallocate<16,0>(*(void **)(a1 + 64), (const struct std::nothrow_t *)0x48);
}
