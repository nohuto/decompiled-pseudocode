/*
 * XREFs of ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18015C790
 * Callers:
 *     ?GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@EAAJAEBUSPATIAL_NODE_ID@@PEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18004CA00 (-GetDynamicNodeTrackingCapabilities@SpatialGraphDriverClient@Holographic@Internal@Windows@@WBA@E.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetDynamicNodeTrackingCapabilities@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@HolographicDriverClientTrace@@SAX$$QEAPEAVSpatialGraphDriverClient@Holographic@Internal@Windows@@AEBU_GUID@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_CAPABILITY_FLAGS@@@Z @ 0x18014E568 (--$GetDynamicNodeTrackingCapabilities@PEAVSpatialGraphDriverClient@Holographic@Internal@Windows@.c)
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D2BC (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::GetDynamicNodeTrackingCapabilities(
        Windows::Internal::Holographic::SpatialGraphDriverClient *this,
        const struct SPATIAL_NODE_ID *a2,
        enum SPATIAL_TRACKING_CAPABILITY_FLAGS *a3)
{
  char *v3; // r14
  int NodePropertyOfKnownSize; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  char *v11; // [rsp+60h] [rbp+8h] BYREF

  *(_DWORD *)a3 = 0;
  v3 = (char *)this - 8;
  NodePropertyOfKnownSize = Windows::Internal::Holographic::SpatialGraphDriverClient::GetNodePropertyOfKnownSize(
                              (char *)this - 8,
                              a2,
                              &SPATIAL_DYNAMIC_NODE_PROPERTY_TRACKING_CAPABILITIES,
                              a3,
                              4LL,
                              Windows::Internal::Holographic::ValidateProperty::SpatialTrackingCapabilityFlags,
                              2);
  v8 = NodePropertyOfKnownSize;
  if ( NodePropertyOfKnownSize >= 0 )
  {
    v11 = v3;
    HolographicDriverClientTrace::GetDynamicNodeTrackingCapabilities<Windows::Internal::Holographic::SpatialGraphDriverClient *,_GUID const &,SPATIAL_NODE_ID const &,enum SPATIAL_TRACKING_CAPABILITY_FLAGS &>(
      &v11,
      (unsigned __int64)this + 72,
      (__int64)a2,
      a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D1,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)NodePropertyOfKnownSize);
    return v8;
  }
}
