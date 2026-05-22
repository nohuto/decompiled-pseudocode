/*
 * XREFs of ?StartTracking@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180164D98
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@AEBUDynamicNodeInfo@234@W4SPATIAL_TRACKING_STATE@@USpatialGraphSettings@234@@Z @ 0x180163CF4 (-RuntimeClassInitialize@SpatialGraphNodeReference@Holographic@Internal@Windows@@QEAAJAEBV-$share.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x180036A54 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800757C0 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800C9400 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 *     std::function_void___cdecl(void)_::operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_ @ 0x18014E200 (std--function_void___cdecl(void)_--operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_.c)
 *     std::function_void___cdecl(void)_::operator___lambda_bb99315a2e04bb315428571541c06609__void_ @ 0x18014E2A4 (std--function_void___cdecl(void)_--operator___lambda_bb99315a2e04bb315428571541c06609__void_.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@PEAX@1@@Z @ 0x180153010 (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWra.c)
 *     ?CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUTrackingStateEntry@1234@@Z @ 0x18015A010 (-CheckForTrackingStateTransition@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@A.c)
 *     ?GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@QEAAAEAIW4SPATIAL_TRACKING_STATE@@@Z @ 0x18015E740 (-GetRefCountForState@TrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Win.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@USpatialNodeIdComp@456@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180167C84 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@UTrackingStateEntry@SpatialGraphDriverHandleWrap.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::StartTracking(
        __int64 a1,
        const struct SPATIAL_NODE_ID *a2,
        int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 **v6; // r14
  _DWORD *v7; // rax
  __int64 v8; // r8
  __int64 *v9; // r12
  _DWORD *RefCountForState; // rax
  __int128 v11; // xmm6
  __int64 v12; // xmm7_8
  int v13; // r13d
  __int64 *v14; // r15
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // edi
  __int64 v19; // rdx
  const char *v21; // [rsp+28h] [rbp-100h]
  const char *v22; // [rsp+28h] [rbp-100h]
  int v23; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-F0h] BYREF
  __int128 v25; // [rsp+40h] [rbp-E8h] BYREF
  _QWORD v26[4]; // [rsp+50h] [rbp-D8h] BYREF
  char v27; // [rsp+70h] [rbp-B8h]
  _QWORD v28[8]; // [rsp+80h] [rbp-A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v23 = a3;
  wil::details::in1diag3::FailFast_IfMsg(
    retaddr,
    (void *)0x7B2,
    (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
    (const char *)(a3 == 0),
    (void *)"StartTracking called with TrackingStateStopped",
    v21);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v26[2] = a1 + 176;
  v6 = (__int64 **)(a1 + 216);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::find(
    a1 + 216,
    &v24,
    a2);
  v28[0] = off_1801B84B8;
  v28[7] = v28;
  v26[3] = v28;
  v27 = 1;
  if ( v24 == *(_QWORD *)(a1 + 216) )
  {
    *(_QWORD *)&v25 = a1;
    *((_QWORD *)&v25 + 1) = &v24;
    std::function_void___cdecl_void__::operator___lambda_bb99315a2e04bb315428571541c06609__void_((__int64)v28, &v25);
    v9 = *v6;
    *(_QWORD *)&v25 = 0LL;
    DWORD2(v25) = 0;
    RefCountForState = (_DWORD *)Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
                                   (__int64)&v25,
                                   v23);
    ++*RefCountForState;
    v11 = *(_OWORD *)a2;
    v12 = v25;
    v13 = DWORD2(v25);
    v14 = *v6;
    v26[0] = a1 + 216;
    v26[1] = 0LL;
    v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    *(_OWORD *)((char *)v15 + 28) = v11;
    *(_QWORD *)((char *)v15 + 44) = v12;
    *((_DWORD *)v15 + 13) = v13;
    *v15 = v14;
    v15[1] = v14;
    v15[2] = v14;
    *((_WORD *)v15 + 12) = 0;
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>>,0>>::_Insert_hint<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry>,void *> *>(
      (__int64 *)(a1 + 216),
      v26,
      v9,
      (char *)v15 + 28,
      v15);
    v8 = v26[0];
    v24 = v26[0];
  }
  else
  {
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x7BD,
      (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(*(_DWORD *)(v24 + 44) + *(_DWORD *)(v24 + 48) == 0),
      (void *)"NodeId should not be in map if TrackingState ref count < 1",
      v22);
    *(_QWORD *)&v25 = &v24;
    *((_QWORD *)&v25 + 1) = &v23;
    std::function_void___cdecl_void__::operator___lambda_1fd6b219498efdbd05d8af8c3e9a695a__void_((__int64)v28, &v25);
    v7 = (_DWORD *)Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry::GetRefCountForState(
                     v24 + 44,
                     v23);
    ++*v7;
    v8 = v24;
  }
  v16 = Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::CheckForTrackingStateTransition(
          (Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper *)a1,
          a2,
          (struct Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::TrackingStateEntry *)(v8 + 44));
  v18 = v16;
  if ( v16 >= 0 )
  {
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v28, v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v16);
    std::_Func_class<void,>::operator()((__int64)v28);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v28, v19);
    if ( v5 )
      LeaveCriticalSection(v5);
    return v18;
  }
}
