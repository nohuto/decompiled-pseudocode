/*
 * XREFs of ?UpdateMostRecentNodePoseValidity@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180166D24
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18015DA70 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JPEA_JPEAUSPATIAL_G.c)
 * Callees:
 *     ??$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@HolographicDriverClientContinuousTrace@@SAX$$QEAPEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@AEAW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEB_N@Z @ 0x18014E820 (--$DynamicNodePoseValidityChanged@PEAVSpatialGraphDriverHandleWrapper@Holographic@Internal@Windo.c)
 *     ?InvokeNodePoseValidityChangedCallbacksAsync@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@AEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_VALIDITY_FLAGS@@@Z @ 0x180160154 (-InvokeNodePoseValidityChangedCallbacksAsync@SpatialGraphDriverHandleWrapper@Holographic@Interna.c)
 *     ?Update@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA?AW4SPATIAL_TRACKING_VALIDITY_FLAGS@@AEBUSPATIAL_NODE_ID@@W46@@Z @ 0x180166C84 (-Update@NodePoseValidityCollection@Details@Holographic@Internal@Windows@@QEAA-AW4SPATIAL_TRACKIN.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::UpdateMostRecentNodePoseValidity(
        __int64 a1,
        _QWORD *a2,
        int a3)
{
  __int64 v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // rdx
  int v9; // r14d
  int v10; // ebx
  __int64 v11; // rdx
  const char *v12; // r9
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+70h] [rbp+18h] BYREF
  bool v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a3;
  AcquireSRWLockExclusive(&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_recentDynamicNodeLock);
  v14[1] = &Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_recentDynamicNodeLock;
  v7 = Windows::Internal::Holographic::Details::NodePoseValidityCollection::Update(v6, a2, a3);
  if ( v7 != a3 )
  {
    v9 = v7 & 3;
    v10 = a3 & 3;
    v17 = v9 != v10;
    v14[0] = a1;
    HolographicDriverClientContinuousTrace::DynamicNodePoseValidityChanged<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *,SPATIAL_NODE_ID const &,enum SPATIAL_TRACKING_VALIDITY_FLAGS &,bool const &>(
      v14,
      v8,
      (unsigned int *)&v16,
      (char *)&v17);
    if ( v9 != v10 )
    {
      try
      {
        Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::InvokeNodePoseValidityChangedCallbacksAsync(
          a1,
          v11,
          a2,
          a3);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x80C,
                               (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
                               v12);
      }
    }
  }
  ReleaseSRWLockExclusive(&Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::s_recentDynamicNodeLock);
  return 0LL;
}
