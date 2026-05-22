/*
 * XREFs of ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18015184C
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18015184C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@Spat.c)
 *     ??1?$map@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAA@XZ @ 0x1801574D8 (--1-$map@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Inter.c)
 *     ??1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ @ 0x180157BE8 (--1SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x18015184C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@Spat.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *>>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  void *v6; // rcx

  v3 = (_QWORD *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    do
    {
      std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *>>>(
        a1,
        a2,
        v3[2]);
      v6 = v3;
      v3 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x38);
    }
    while ( !*((_BYTE *)v3 + 25) );
  }
}
