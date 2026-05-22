/*
 * XREFs of ?StopTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180165DA4
 * Callers:
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180157D40 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9030 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     _lambda_c364fe7c41acf4148978cba8a333a804_::operator() @ 0x180158360 (_lambda_c364fe7c41acf4148978cba8a333a804_--operator().c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x180159BB0 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAAEAIW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E2E0 (-GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Win.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180167864 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StopTracking(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _DWORD *RefCountForState; // rax
  _DWORD *v8; // rax
  const char *v9; // r9
  const char *v10; // [rsp+28h] [rbp-40h]
  const char *v11; // [rsp+28h] [rbp-40h]
  __int64 *v12[2]; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+88h] [rbp+20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v16 = v6;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
    a1 + 216,
    &v15,
    a2);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7D4,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(v15 == *(_QWORD *)(a1 + 216)),
    (void *)"StopTracking() called without corresponding StartTracking() call",
    v10);
  RefCountForState = (_DWORD *)Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
                                 v15 + 44,
                                 a3);
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7D5,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(*RefCountForState == 0),
    (void *)"TrackingState ref count is incorrect",
    v11);
  v8 = (_DWORD *)Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
                   v15 + 44,
                   a3);
  --*v8;
  v12[0] = &v15;
  v12[1] = (__int64 *)a1;
  v13 = 1;
  try
  {
    Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
      (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
      a2,
      (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)(v15 + 44));
    v13 = 0;
    lambda_c364fe7c41acf4148978cba8a333a804_::operator()(v12);
    if ( v6 )
      LeaveCriticalSection(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::FailFast_CaughtException(
      retaddr,
      (void *)0x7E4,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      v9);
    JUMPOUT(0x180165F16LL);
  }
}
