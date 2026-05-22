/*
 * XREFs of ?OnNodePropertyRequestComplete@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXAEAVV2NodePropertyRequest@234@J@Z @ 0x1801612F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@?$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@USpatialNodeIdComp@345@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBUSPATIAL_NODE_ID@@@Z @ 0x18015572C (--$_Try_emplace@AEBUSPATIAL_NODE_ID@@$$V@-$map@USPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags.c)
 *     ?GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z @ 0x18015EFCC (-GetValue@V2PropertyRequest@Holographic@Internal@Windows@@QEBAXPEAPEBEPEA_K@Z.c)
 *     ?IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z @ 0x1801601AC (-IsEnabled@HolographicDriverClientTrace@@SA_NE_K@Z.c)
 *     ?NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0J@Z @ 0x180160904 (-NodePropertyRequestFailed_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163BEC (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167B74 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::OnNodePropertyRequestComplete(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        struct _GUID *a2,
        int a3,
        const char *a4)
{
  struct _GUID *v7; // rdi
  int v8; // ebx
  int v9; // r9d
  __int64 v10; // rcx
  HolographicDriverClientTrace *v11; // rcx
  void *v12[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 < 0 )
  {
    if ( HolographicDriverClientTrace::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<HolographicDriverClientTrace>::get(
        v10,
        _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
      HolographicDriverClientTrace::NodePropertyRequestFailed_(
        v11,
        (const struct _GUID *)this + 5,
        (const struct SPATIAL_NODE_ID *)&a2[9],
        a2 + 8,
        a3);
    }
  }
  else
  {
    Windows::Internal::Holographic::V2PropertyRequest::GetValue(
      (Windows::Internal::Holographic::V2PropertyRequest *)a2,
      (const unsigned __int8 **)v12,
      &v13,
      a4);
    v7 = a2 + 9;
    Windows::Internal::Holographic::NodePropertyCache::SetValue(
      (struct _GUID *)((char *)this + 280),
      (const struct SPATIAL_NODE_ID *)&a2[9],
      a2 + 8,
      v12[0],
      v13);
    v8 = *(_DWORD *)&a2[3].Data2;
    std::map<SPATIAL_NODE_ID,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>::_Try_emplace<SPATIAL_NODE_ID const &,>(
      (__int64 *)this + 48,
      (__int64)v12,
      v7,
      v9);
    *((_DWORD *)v12[0] + 11) |= v8;
  }
}
